#import <YandexMapsMobile/YMKBalloonViewListener.h>
#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKNavigation.h>
#import <YandexMapsMobile/YMKPlacemark.h>
#import <YandexMapsMobile/YMKRequestPointView.h>
#import <YandexMapsMobile/YMKRoadEventViewListener.h>
#import <YandexMapsMobile/YMKRouteView.h>
#import <YandexMapsMobile/YMKTrafficLightViewListener.h>

@class YMKCamera;
@class YMKRoadEventView;

/**
 * :nodoc:
 */
@interface YMKNavigationLayer : NSObject
@property (nonatomic, readonly, readonly, nonnull) YMKNavigation *navigation;
@property (nonatomic, readonly, readonly, nonnull) YMKCamera *camera;
/**
 * This placemark represents user on map. Position and azimuth is
 * automatically updated. It you wish, you can track standing status
 * from guide and animate placemark.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKPlacemarkMapObject *userPlacemark;
/**
 * Show or hide alternative routes on map.
 */
@property (nonatomic, getter=isShowAlternatives) BOOL showAlternatives;
/**
 * Routes representation on the map.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKRouteView *> *routes;

/**
 * Find appearance of route.
 */
- (nullable YMKRouteView *)getViewWithRoute:(nonnull YMKDrivingRoute *)route;

/**
 * NavigationLayer will try to show as  much info as possible about
 * selected route. E.g. if road event placemarks from different routes
 * overlap, road event from selected route will be displayed, conflict
 * will be hidden. None or one route can be selected at the same time.
 * Pass nil/null to unselect route.
 *
 * Remark:
 * @param route has optional type, it may be uninitialized.
 */
- (void)selectRouteWithRoute:(nullable YMKDrivingRoute *)route;

/**
 * Add this listener if you with to customize displayed routes.
 */
- (void)addRouteViewListenerWithRouteViewListener:(nonnull id<YMKRouteViewListener>)routeViewListener;

- (void)removeRouteViewListenerWithRouteViewListener:(nonnull id<YMKRouteViewListener>)routeViewListener;
/**
 * Enabled by default.
 */
@property (nonatomic, getter=isShowRequestPoints) BOOL showRequestPoints;
/**
 * Request points representation on the map.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKRequestPointView *> *requestPoints;

/**
 * Add this listener if you wish to customize request points pins.
 */
- (void)addRequestPointViewListenerWithRequestPointViewListener:(nonnull id<YMKRequestPointViewListener>)requestPointViewListener;

- (void)removeRequestPointViewListenerWithRequestPointViewListener:(nonnull id<YMKRequestPointViewListener>)requestPointViewListener;

/**
 * Find appearance of road event.
 */
- (nullable YMKRoadEventView *)getViewWithEvent:(nonnull YMKDrivingEvent *)event;

/**
 * Add this listener if you with to customize road events along the
 * route.
 */
- (void)addRoadEventViewListenerWithRoadEventViewListener:(nonnull id<YMKRoadEventViewListener>)roadEventViewListener;

- (void)removeRoadEventViewListenerWithRoadEventViewListener:(nonnull id<YMKRoadEventViewListener>)roadEventViewListener;

- (void)addTrafficLightViewListenerWithTrafficLightViewListener:(nonnull id<YMKTrafficLightViewListener>)trafficLightViewListener;

- (void)removeTrafficLightViewListenerWithTrafficLightViewListener:(nonnull id<YMKTrafficLightViewListener>)trafficLightViewListener;

- (void)addBalloonViewListenerWithBalloonListener:(nonnull id<YMKBalloonViewListener>)balloonListener;

- (void)removeBalloonViewListenerWithBalloonListener:(nonnull id<YMKBalloonViewListener>)balloonListener;

/**
 * Removes layer from map. No further operations with layer should be
 * performed.
 */
- (void)removeFromMap;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
