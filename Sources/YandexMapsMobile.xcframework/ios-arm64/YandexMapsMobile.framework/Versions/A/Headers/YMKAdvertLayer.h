#import <YandexMapsMobile/YMKGeoObject.h>
#import <YandexMapsMobile/YMKGeometry.h>

/**
 * :nodoc:
 */
@protocol YMKAdvertLayerListener <NSObject>

/**
 * Method to receive show events.
 */
- (void)onAdvertPinShownWithGeoObject:(nonnull YMKGeoObject *)geoObject;

/**
 * Method to receive hide events.
 */
- (void)onAdvertPinHiddenWithGeoObject:(nonnull YMKGeoObject *)geoObject;

/**
 * Method to receive tap events.
 */
- (void)onAdvertPinTappedWithGeoObject:(nonnull YMKGeoObject *)geoObject;

@end

/**
 * :nodoc:
 */
@interface YMKAdvertLayer : NSObject

/**
 * Set route geometry to receive route adverts.
 *
 * @param route route geometry. May not be null, use `resetRoute` to
 * reset.
 */
- (void)setRouteWithRoute:(nonnull YMKPolyline *)route;

/**
 * Resets route geometry. No further adverts will be shown until new
 * route is provided.
 */
- (void)resetRoute;

/**
 * Set current position on route to receive route advert if possible.
 * Throws if no route set.
 *
 * @param point new route position value
 */
- (void)setRoutePositionWithPoint:(nonnull YMKPolylinePosition *)point;

/**
 * Turns on/off labels for pins. Default is on.
 */
- (void)showLabelsWithValue:(BOOL)value;

/**
 * If there is a pin selected by a user tap, deselect it.
 */
- (void)clearSelection;

/**
 * Sets the listener to receive layer events.
 *
 * @param advertLayerListener listener to add
 */
- (void)addListenerWithAdvertLayerListener:(nonnull id<YMKAdvertLayerListener>)advertLayerListener;

/**
 * Removes a layer listener.
 *
 * @param advertLayerListener listener to remove
 */
- (void)removeListenerWithAdvertLayerListener:(nonnull id<YMKAdvertLayerListener>)advertLayerListener;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
