#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKLocation.h>
#import <YandexMapsMobile/YMKLocationLocationManager.h>
#import <YandexMapsMobile/YMKMasstransitRoute.h>
#import <YandexMapsMobile/YMKRequestPoint.h>
#import <YandexMapsMobile/YMKTransportAnnotationLang.h>

@class YMKTransportNavigation;

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKTransportUserActivity) {
    YMKTransportUserActivityStanding,
    YMKTransportUserActivityMoving
};

/**
 * :nodoc:
 */
@protocol YMKTransportNavigationListener <NSObject>

- (void)onRoutingErrorWithError:(nonnull NSError *)error;

/**
 * Called on Navigation::routes updates: - as a result of called
 * YMKTransportNavigation::requestRoutesWithPoints: - alternative routes
 * were found
 */
- (void)onRoutesChanged;

- (void)onLocationChanged;

- (void)onRoutePositionChanged;

/**
 * Called on pedestrian gets off the Navigation::currentRoute
 */
- (void)onCurrentRouteLost;

/**
 * Called on the Navigation::currentRoute is finished or user called
 * YMKTransportNavigation::stop method
 */
- (void)onCurrentRouteFinished;

/**
 * Called on the Navigation::currentRoute has changed to a different one
 * Reasons: user selected alternative route or received a new route
 * after the pedestrian has left the current
 */
- (void)onCurrentRouteChanged;

- (void)onStreetNameUpdated;

- (void)onReachedWayPoint;

- (void)onUserActivityChanged;

@end

@interface YMKTransportNavigation : NSObject
@property (nonatomic, readonly) YMKTransportAnnotationLanguage annotationLanguage;
@property (nonatomic, readonly, readonly, nonnull) YMKLocationManager *locationManager;

/**
 * Request routes for further guidance. If there was an pending routing
 * request, it will be canceled.
 */
- (void)requestRoutesWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points;

/**
 * Cancel active routing request.
 */
- (void)cancelRoutesRequest;
/**
 * Routes for given request points.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitRoute *> *routes;
@property (nonatomic, readonly, readonly, nonnull) YMKMasstransitRoute *currentRoute;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKLocation *location;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKPolylinePosition *routePosition;

/**
 * Start guidance with given route. This method will reset active
 * current route if any.
 */
- (void)startWithRoute:(nonnull YMKMasstransitRoute *)route;

- (void)stop;
/**
 * Enables background guidance mode. Default is false.
 */
@property (nonatomic, getter=isBackgroundMode) BOOL backgroundMode;

/**
 * Suspend guide stop track user position, later it could be resumed
 * without losing current route. Useful when user don't want guidance in
 * background.
 */
- (void)suspend;

/**
 * Resumes suspended guide. Guide will continue to guide the previous
 * route or rebuild it. Useful when user don't want guidance in
 * background.
 */
- (void)resume;

- (void)addListenerWithNavigationListener:(nonnull id<YMKTransportNavigationListener>)navigationListener;

- (void)removeListenerWithNavigationListener:(nonnull id<YMKTransportNavigationListener>)navigationListener;
/**
 * Current street name
 */
@property (nonatomic, readonly, nonnull) NSString *streetName;
@property (nonatomic, readonly) YMKTransportUserActivity userActivity;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKRequestPoint *lastReachedWaypoint;

@end
