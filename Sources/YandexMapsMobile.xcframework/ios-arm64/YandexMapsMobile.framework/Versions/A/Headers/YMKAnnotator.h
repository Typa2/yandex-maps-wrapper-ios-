#import <YandexMapsMobile/YMKAnnotation.h>
#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKSpeaker.h>
#import <YandexMapsMobile/YMKSpeedLimitStatus.h>

@class YMKSpeedLimitsPolicy;

/**
 * :nodoc:
 */
typedef NS_OPTIONS(NSUInteger, YMKAnnotatedEvents) {
    YMKAnnotatedEventsRouteActions = 1,
    YMKAnnotatedEventsFasterAlternative = 1 << 1,
    YMKAnnotatedEventsRoadEvents = 1 << 2,
    YMKAnnotatedEventsTollRoadAhead = 1 << 3,
    YMKAnnotatedEventsSpeedLimitExceeded = 1 << 4,
    YMKAnnotatedEventsParkingRoutes = 1 << 5,
    YMKAnnotatedEventsStreets = 1 << 6,
    YMKAnnotatedEventsEverything = YMKAnnotatedEventsRouteActions| YMKAnnotatedEventsFasterAlternative
        | YMKAnnotatedEventsRoadEvents | YMKAnnotatedEventsSpeedLimitExceeded
        | YMKAnnotatedEventsParkingRoutes | YMKAnnotatedEventsParkingRoutes | YMKAnnotatedEventsStreets
};

/**
 * :nodoc:
 * The order is important. The higher enum value corresponds to more
 * important tag for annotation.
 */
typedef NS_OPTIONS(NSUInteger, YMKAnnotatedRoadEvents) {
    YMKAnnotatedRoadEventsDanger = 1,
    YMKAnnotatedRoadEventsReconstruction = 1 << 1,
    YMKAnnotatedRoadEventsAccident = 1 << 2,
    YMKAnnotatedRoadEventsSchool = 1 << 3,
    /**
     * Traffic code control
     */
    YMKAnnotatedRoadEventsLaneControl = 1 << 4,
    YMKAnnotatedRoadEventsRoadMarkingControl = 1 << 5,
    YMKAnnotatedRoadEventsCrossRoadControl = 1 << 6,
    YMKAnnotatedRoadEventsMobileControl = 1 << 7,
    YMKAnnotatedRoadEventsSpeedLimitControl = 1 << 8,
    YMKAnnotatedRoadEventsTrafficControls = YMKAnnotatedRoadEventsLaneControl | YMKAnnotatedRoadEventsRoadMarkingControl
        | YMKAnnotatedRoadEventsCrossRoadControl | YMKAnnotatedRoadEventsMobileControl | YMKAnnotatedRoadEventsSpeedLimitControl,
    YMKAnnotatedRoadEventsEverything = YMKAnnotatedRoadEventsDanger | YMKAnnotatedRoadEventsReconstruction | YMKAnnotatedRoadEventsAccident
        | YMKAnnotatedRoadEventsSchool | YMKAnnotatedRoadEventsTrafficControls
};

/**
 * :nodoc:
 */
@protocol YMKAnnotatorListener <NSObject>

- (void)annotationsUpdated;

- (void)maneuverAnnotated;

- (void)fasterAlternativeAnnotated;

- (void)speedLimitUpdated;

- (void)speedLimitExceededUpdated;

- (void)speedLimitExceeded;

@end

/**
 * :nodoc:
 */
@interface YMKAnnotator : NSObject
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKAnnotation *currentAnnotation;
/**
 * In case region is not yet available, SpeedingPolicy::region is empty
 * and default speeding config is used.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKSpeedLimitsPolicy *speedLimitsPolicy;
/**
 * Difference between ETA of current and alternative route (current
 * route time - alternative route time).
 */
@property (nonatomic) double speedLimitTolerance;
@property (nonatomic) YMKAnnotatedEvents annotateEvents;
@property (nonatomic) YMKAnnotatedRoadEvents annotateRoadEvents;
/**
 * Returns true if - current speed > speedLimit + allowed speed excess -
 * speedLimit < current speed <= speedLimit + allowed speed excess and
 * no more than 3 seconds have passed since last overspeeding, when
 * current speed > speedLimit + allowed speed excess.
 */
@property (nonatomic, readonly) YMKSpeedLimitStatus speedLimitStatus;
/**
 * Speed limit of the current road.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKLocalizedValue *speedLimit;

- (void)mute;

- (void)unmute;

- (void)addListenerWithAnnotatorListener:(nonnull id<YMKAnnotatorListener>)annotatorListener;

- (void)removeListenerWithAnnotatorListener:(nonnull id<YMKAnnotatorListener>)annotatorListener;

- (void)setSpeakerWithSpeaker:(nullable id<YMKSpeaker>)speaker;

@end
