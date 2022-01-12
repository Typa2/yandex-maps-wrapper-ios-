#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKLocation.h>
#import <YandexMapsMobile/YMKLocationLocationManager.h>

/**
 * :nodoc:
 */
@protocol YMKRecordedSimulatorListener <NSObject>

- (void)onLocationUpdated;

- (void)onRouteUpdated;

- (void)onProblemMark;

- (void)onFinish;

@end

/**
 * :nodoc:
 */
@interface YMKRecordedSimulator : YMKLocationManager
@property (nonatomic, nonnull) NSDate *timestamp;
@property (nonatomic) NSInteger clockRate;
/**
 * true if simulator is not suspended
 */
@property (nonatomic, readonly, getter=isActive) BOOL active;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKLocation *location;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKDrivingRoute *route;

- (void)subscribeForSimulatorEventsWithSimulatorListener:(nonnull id<YMKRecordedSimulatorListener>)simulatorListener;

- (void)unsubscribeFromSimulatorEventsWithSimulatorListener:(nonnull id<YMKRecordedSimulatorListener>)simulatorListener;

@end
