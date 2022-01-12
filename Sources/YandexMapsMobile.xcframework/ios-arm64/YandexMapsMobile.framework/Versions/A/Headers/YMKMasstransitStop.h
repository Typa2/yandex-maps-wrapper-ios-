#import <YandexMapsMobile/YMKMasstransitCommon.h>
#import <YandexMapsMobile/YMKMasstransitSchedule.h>

/**
 * :nodoc:
 * @brief Contains information about a mass transit stop alert effect
 */
typedef NS_ENUM(NSUInteger, YMKMasstransitStopAlertEffect) {
    /**
     * Unknown
     */
    YMKMasstransitStopAlertEffectUnknownEffect,
    /**
     * No service, stop is closed
     */
    YMKMasstransitStopAlertEffectNoService
};

/**
 * :nodoc:
 * @brief Contains information about a mass transit stop alert
 */
@interface YMKMasstransitStopAlert : NSObject

/**
 * alert effect
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *effect;


+ (nonnull YMKMasstransitStopAlert *)stopAlertWithEffect:(nullable NSNumber *)effect;


@end

/**
 * :nodoc:
 * @brief Contains information about a mass transit stop and the mass
 * transit lines that go through the stop, contains brief schedule
 */
@interface YMKMasstransitStopMetadata : NSObject

/**
 * Mass transit stop.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitStop *stop;

/**
 * Collection of mass transit lines that go through the specified stop.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitLineAtStop *> *linesAtStop;

/**
 * Stop alert
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitStopAlert *alert;


+ (nonnull YMKMasstransitStopMetadata *)stopMetadataWithStop:(nonnull YMKMasstransitStop *)stop
                                                 linesAtStop:(nonnull NSArray<YMKMasstransitLineAtStop *> *)linesAtStop
                                                       alert:(nullable YMKMasstransitStopAlert *)alert;


@end

/**
 * :nodoc:
 * @brief Contains information about a mass transit stop and the mass
 * transit lines that go through it with their corresponding schedules
 * for a service day
 */
@interface YMKMasstransitStopScheduleMetadata : NSObject

/**
 * Mass transit stop.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitStop *stop;

/**
 * Collection of mass transit lines that go through the specified stop.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitLineAtStop *> *linesAtStop;

/**
 * Stop alert
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitStopAlert *alert;


+ (nonnull YMKMasstransitStopScheduleMetadata *)stopScheduleMetadataWithStop:(nonnull YMKMasstransitStop *)stop
                                                                 linesAtStop:(nonnull NSArray<YMKMasstransitLineAtStop *> *)linesAtStop
                                                                       alert:(nullable YMKMasstransitStopAlert *)alert;


@end
