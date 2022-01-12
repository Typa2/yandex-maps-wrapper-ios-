#import <YandexMapsMobile/YMKGeoObject.h>
#import <YandexMapsMobile/YMKGeometry.h>

/**
 * :nodoc:
 * Listener to be notified when a new route advertisement is received.
 */
@protocol YMKSearchAdvertRouteListener <NSObject>

/**
 * Method to be called on the listener to notify of a new ad.
 */
- (void)onRouteAdvertReceived;

@end

/**
 * :nodoc:
 * Allows to get ads to show along the user route.
 *
 * The ad is selected based on the provided route (this allows hiding
 * irrelevant ads) and the provided route position (this allows hiding
 * ads for places that the user has already passed on the route).
 *
 * A new advertisement is received in the background, notifiying the
 * user when a new advertisement is available.
 */
@interface YMKSearchBillboardRouteManager : NSObject

/**
 * Set the listener to receive route adverts. The listener may be
 * notified after calls to `setRoute` and `setRoutePosition`.
 *
 * @param routeListener listener to add
 */
- (void)addListenerWithRouteListener:(nonnull id<YMKSearchAdvertRouteListener>)routeListener;

/**
 * Remove the route advertisements listener.
 *
 * @param routeListener listener to remove
 */
- (void)removeListenerWithRouteListener:(nonnull id<YMKSearchAdvertRouteListener>)routeListener;

/**
 * Set the route geometry to receive route advertisements.
 *
 * @param route route geometry. May not be null, use `resetRoute` to
 * reset.
 */
- (void)setRouteWithRoute:(nonnull YMKPolyline *)route;

/**
 * Resets the route geometry. No further notifications will be issued to
 * listeners until a new route is provided.
 */
- (void)resetRoute;

/**
 * Set the current position on the route to receive route advertisements
 * if possible. Throws an exception if no route is set.
 *
 * @param point new route position value
 */
- (void)setRoutePositionWithPoint:(nonnull YMKPolylinePosition *)point;
/**
 * Current route advertisements.
 *
 * @return collection of advertised `GeoObjects`
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKGeoObject *> *advertObjects;

@end
