#import <YandexMapsMobile/YMKColoredPolyline.h>
#import <YandexMapsMobile/YMKDrivingRoute.h>

@class YMKBalloonView;
@class YMKRoadEventView;
@class YMKRouteView;
@class YMKTrafficLightView;

/**
 * :nodoc:
 */
@protocol YMKRouteViewListener <NSObject>

- (void)onRouteViewsChanged;

- (void)onRouteViewTapWithRoute:(nonnull YMKRouteView *)route;

@end

/**
 * :nodoc:
 */
@interface YMKRouteView : NSObject
@property (nonatomic, readonly, readonly, nonnull) YMKDrivingRoute *route;
/**
 * Route representation on map.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKColoredPolylineMapObject *routePolyline;
/**
 * Enable or disable traffic jams along route. Enabled by default.
 */
@property (nonatomic, getter=isShowJams) BOOL showJams;
/**
 * Show balloons related to the route. Enabled by default.
 */
@property (nonatomic, getter=isShowBalloons) BOOL showBalloons;
/**
 * Balloons displayed on map about the route.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBalloonView *> *balloonViews;
/**
 * Enable or disable road events on the route. Enabled by default.
 */
@property (nonatomic, getter=isShowRoadEvents) BOOL showRoadEvents;
/**
 * Road events displayed along the route.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKRoadEventView *> *roadEventViews;
/**
 * Show traffic lights along the route. Enabled by default.
 */
@property (nonatomic, getter=isShowTrafficLights) BOOL showTrafficLights;
/**
 * Traffic lights on the route.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKTrafficLightView *> *trafficLightViews;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
