#import <YandexMapsMobile/YMKDrivingAnnotation.h>
#import <YandexMapsMobile/YMKDrivingAnnotationLang.h>
#import <YandexMapsMobile/YMKDrivingDirectionSigns.h>
#import <YandexMapsMobile/YMKDrivingLane.h>
#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKDrivingVehicleOptions.h>
#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKGuidanceAnnotatedEventTag.h>
#import <YandexMapsMobile/YMKGuidanceGuidanceListener.h>
#import <YandexMapsMobile/YMKGuidancePerformance.h>
#import <YandexMapsMobile/YMKGuidanceSpeaker.h>
#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKLocationLocationManager.h>
#import <YandexMapsMobile/YMKUpcomingEvent.h>

@class YMKFasterAlternative;
@class YMKGuidanceClassifiedLocation;
@class YMKGuidanceDisplayedAnnotations;
@class YMKGuidanceViewArea;
@class YMKSpeedingPolicy;

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKGuidanceStandingStatus) {
    YMKGuidanceStandingStatusMoving,
    YMKGuidanceStandingStatusStanding
};

/**
 * :nodoc:
 */
@interface YMKGuidanceAnnotationWithDistance : NSObject

@property (nonatomic, readonly, nonnull) YMKDrivingAnnotation *annotation;

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *distance;

@property (nonatomic, readonly, nonnull) YMKPolylinePosition *position;


+ (nonnull YMKGuidanceAnnotationWithDistance *)annotationWithDistanceWithAnnotation:(nonnull YMKDrivingAnnotation *)annotation
                                                                           distance:(nonnull YMKLocalizedValue *)distance
                                                                           position:(nonnull YMKPolylinePosition *)position;


@end

/**
 * :nodoc:
 */
@interface YMKGuidanceDisplayedAnnotations : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKGuidanceAnnotationWithDistance *> *annotations;

/**
 * The name of the road we're about to turn onto. Never appears in
 * free-driving mode.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *nextRoadName;

@property (nonatomic, readonly, nonnull) NSArray<YMKUpcomingEvent *> *upcomingEvents;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingLaneSign *laneSign;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingDirectionSign *directionSign;


+ (nonnull YMKGuidanceDisplayedAnnotations *)displayedAnnotationsWithAnnotations:(nonnull NSArray<YMKGuidanceAnnotationWithDistance *> *)annotations
                                                                    nextRoadName:(nullable NSString *)nextRoadName
                                                                  upcomingEvents:(nonnull NSArray<YMKUpcomingEvent *> *)upcomingEvents
                                                                        laneSign:(nullable YMKDrivingLaneSign *)laneSign
                                                                   directionSign:(nullable YMKDrivingDirectionSign *)directionSign;


@end

/**
 * :nodoc:
 */
@interface YMKGuidanceViewArea : NSObject

/**
 * In the current direction, in meters.
 */
@property (nonatomic, readonly) double lengthwise;

/**
 * Perpendicular to the current direction from the center, in meters.
 */
@property (nonatomic, readonly) double transverse;


+ (nonnull YMKGuidanceViewArea *)viewAreaWithLengthwise:( double)lengthwise
                                             transverse:( double)transverse;


@end

/**
 * :nodoc:
 */
@interface YMKGuidanceGuide : NSObject

- (void)subscribeWithGuidanceListener:(nonnull id<YMKGuidanceGuidanceHandler>)guidanceListener;

- (void)unsubscribeWithGuidanceListener:(nonnull id<YMKGuidanceGuidanceHandler>)guidanceListener;

- (void)setLocationManagerWithLocationManager:(nonnull YMKLocationManager *)locationManager;

- (void)resetSpeaker;

- (void)setLocalizedSpeakerWithSpeaker:(nonnull id<YMKGuidanceLocalizedSpeaker>)speaker
                              language:(YMKDrivingAnnotationLanguage)language;

- (void)setSpeakerLanguageWithLanguage:(YMKDrivingAnnotationLanguage)language;

/**
 * Suspend running Guide. Android-specific.
 */
- (void)suspend;

/**
 * Resume running Guide after suspend(). Android-specific.
 */
- (void)resume;

- (void)mute;

- (void)unmute;

- (void)setRouteWithRoute:(nullable YMKDrivingRoute *)route;

- (void)resetRoute;

- (void)setReroutingEnabledWithOn:(BOOL)on;

- (void)setParkingRoutesEnabledWithOn:(BOOL)on;

- (void)setAlternativesEnabledWithOn:(BOOL)on;

- (void)setRouteActionsAnnotatedWithOn:(BOOL)on;

- (void)setFasterAlternativeAnnotatedWithOn:(BOOL)on;

- (void)setRoadEventsAnnotatedWithOn:(BOOL)on;

- (void)setRoadEventTagAnnotatedWithTag:(YMKGuidanceAnnotatedEventTag)tag
                                     on:(BOOL)on;

- (void)setTollRoadAheadAnnotatedWithOn:(BOOL)on;

- (void)setSpeedLimitExceededAnnotatedWithOn:(BOOL)on;

- (void)setParkingRoutesAnnotatedWithOn:(BOOL)on;

- (void)setStreetsAnnotatedWithOn:(BOOL)on;

- (nonnull YMKGuidancePerformanceMonitor *)createPerformanceMonitorWithTag:(YMKGuidancePerformanceMonitorMetricTag)tag;

/**
 * Enables annotations in free-driving mode (default: false).
 */
- (void)setFreeDrivingAnnotationsEnabledWithOn:(BOOL)on;

/**
 * Enables toll avoidance for route requests performed by the Guide
 * (e.g. faster alternatives and rerouting).
 *
 * The default value is 'false'.
 */
- (void)setTollAvoidanceEnabledWithOn:(BOOL)on;

/**
 * :nodoc:
 * Set vehicle options.
 */
- (void)setVehicleOptionsWithVehicleOptions:(nonnull YMKDrivingVehicleOptions *)vehicleOptions;

/**
 * Enables background guidance mode. If this method is called for the
 * iOS `location` flag in `UIBackgroundModes`, it is required in your
 * application.
 */
- (void)setBackgroundModeEnabledWithOn:(BOOL)on;
/**
 * Changes after rerouting (automatically) or by setRoute/resetRoute (by
 * user).
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKDrivingRoute *route;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKPolylinePosition *routePosition;
@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRoute *> *alternatives;
/**
 * Difference between ETA of current and alternative route (current
 * route time - alternative route time).
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKLocalizedValue *> *alternativesTimeDifference;
/**
 * Last known location adjusted to the road network.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKGuidanceClassifiedLocation *location;
/**
 * The annotations to display at the moment.
 */
@property (nonatomic, readonly, nonnull) YMKGuidanceDisplayedAnnotations *displayedAnnotations;
/**
 * In case region is not yet available, SpeedingPolicy::region is empty
 * and default speeding config is used.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKSpeedingPolicy *speedingPolicy;
@property (nonatomic) double speedingToleranceRatio;
/**
 * Speed limit of the current road.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKLocalizedValue *speedLimit;
/**
 * Returns true if - current speed > speedLimit + allowed speed excess -
 * speedLimit < current speed <= speedLimit + allowed speed excess and
 * no more than 3 seconds have passed since last overspeeding, when
 * current speed > speedLimit + allowed speed excess.
 */
@property (nonatomic, readonly, getter=isSpeedLimitExceeded) BOOL speedLimitExceeded;
/**
 * Current zoom area. Updated on each event: onLocationUpdated
 */
@property (nonatomic, readonly, nonnull) YMKGuidanceViewArea *viewArea;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *roadName;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKFasterAlternative *fasterAlternative;
/**
 * Enables/disables snapping the location to the road network.
 */
@property (nonatomic, getter=isSnapToRoadsEnabled) BOOL snapToRoadsEnabled;
/**
 * Parking route.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKDrivingRoute *parkingRoute;
/**
 * Last via point we passed.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKPolylinePosition *lastViaPosition;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *standingStatus;
/**
 * :nodoc:
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKDrivingRoute *freeDriveRoute;

@end
