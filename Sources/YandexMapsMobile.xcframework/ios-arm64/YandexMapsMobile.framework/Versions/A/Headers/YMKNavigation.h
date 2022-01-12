#import <YandexMapsMobile/YMKDrivingAnnotationLang.h>
#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKDrivingVehicleOptions.h>
#import <YandexMapsMobile/YMKLocation.h>
#import <YandexMapsMobile/YMKRequestPoint.h>

@class YMKAnnotator;

/**
 * :nodoc:
 */
@protocol YMKNavigationListener <NSObject>

- (void)onRoutesChanged;

- (void)onRoutesErrorWithError:(nonnull NSError *)error;

- (void)onRoutesRequested;

- (void)onLocationChanged;

- (void)onRouteLost;

- (void)onFastestRouteChanged;

- (void)onStandingStatusChanged;

- (void)onRoadNameChanged;

- (void)onRouteFinished;

- (void)onRouteChanged;

- (void)onReturnedToRoute;

@end

/**
 * :nodoc:
 */
@interface YMKNavigation : NSObject
/**
 * :nodoc:
 */
@property (nonatomic, readonly, nonnull) YMKDrivingVehicleOptions *vehicleOptions;
@property (nonatomic, readonly) YMKDrivingAnnotationLanguage annotationLanguage;
@property (nonatomic, readonly, readonly, nonnull) YMKAnnotator *annotator;

/**
 * Request routes for further guidance. If there was a pending routing
 * request, it will be canceled.
 */
- (void)requestRoutesWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points;

/**
 * Resolve saved driving route URI for further guidance. If there was a
 * pending routing request, it will be canceled.
 */
- (void)resolveUriWithUri:(nonnull NSString *)uri;

/**
 * Cancel active routing request.
 */
- (void)cancelRoutesRequest;
/**
 * All possible routes for given request points.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRoute *> *routes;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKDrivingRoute *currentRoute;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKDrivingRoute *fastestRoute;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKLocation *location;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable, getter=isIsStanding) NSNumber *isStanding;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *roadName;

/**
 * Start guidance with given route. This method will reset active
 * current route if any. It only accepts routes obtained form this
 * Navigation instance.
 *
 * Remark:
 * @param route has optional type, it may be uninitialized.
 */
- (void)startWithRoute:(nullable YMKDrivingRoute *)route;

- (void)stop;

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

- (void)addListenerWithNavigationListener:(nonnull id<YMKNavigationListener>)navigationListener;

- (void)removeListenerWithNavigationListener:(nonnull id<YMKNavigationListener>)navigationListener;

@end
