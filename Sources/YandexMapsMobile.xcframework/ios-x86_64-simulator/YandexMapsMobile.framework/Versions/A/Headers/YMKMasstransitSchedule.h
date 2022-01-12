#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKMasstransitCommon.h>
#import <YandexMapsMobile/YMKTime.h>

@class YMKMasstransitScheduleScheduleEntry;
@class YMKVehicle;

/**
 * :nodoc:
 * @brief Arrival time estimation.
 */
@interface YMKMasstransitEstimation : NSObject

/**
 * Specifies which YMKVehicle is expected to arrive at the specified
 * time.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *vehicleId;

/**
 * Estimated arrival time.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTime *arrivalTime;


+ (nonnull YMKMasstransitEstimation *)estimationWithVehicleId:(nullable NSString *)vehicleId
                                                  arrivalTime:(nullable YMKTime *)arrivalTime;


@end

/**
 * :nodoc:
 * @brief Defines a frequency-based schedule that does not contain exact
 * arrival and departure times.
 */
@interface YMKMasstransitPeriodical : NSObject

/**
 * Frequency at which vehicles arrive or depart on average.
 */
@property (nonatomic, readonly, nonnull) YMKLocalizedValue *frequency;

/**
 * Start of the time range when the ScheduleEntry is applicable.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTime *begin;

/**
 * End of the time range when the ScheduleEntry is applicable.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTime *end;

/**
 * Collection of estimated arrivals within the applicable time range.
 * The estimations are sorted by arrival time.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitEstimation *> *estimations;


+ (nonnull YMKMasstransitPeriodical *)periodicalWithFrequency:(nonnull YMKLocalizedValue *)frequency
                                                        begin:(nullable YMKTime *)begin
                                                          end:(nullable YMKTime *)end
                                                  estimations:(nonnull NSArray<YMKMasstransitEstimation *> *)estimations;


@end

/**
 * :nodoc:
 * @brief Defines the exact arrival and departure time.
 */
@interface YMKMasstransitScheduled : NSObject

/**
 * Arrival time, if specified in schedule.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTime *arrivalTime;

/**
 * Departure time, if specified in schedule.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTime *departureTime;

/**
 * Estimated arrival time.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitEstimation *estimation;


+ (nonnull YMKMasstransitScheduled *)scheduledWithArrivalTime:(nullable YMKTime *)arrivalTime
                                                departureTime:(nullable YMKTime *)departureTime
                                                   estimation:(nullable YMKMasstransitEstimation *)estimation;


@end

/**
 * :nodoc:
 * @brief Contains information about upcoming vehicle arrivals and
 * departures
 */
@interface YMKMasstransitSchedule : NSObject

/**
 * Collection of schedule entries, sorted by time.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitScheduleScheduleEntry *> *scheduleEntries;


+ (nonnull YMKMasstransitSchedule *)scheduleWithScheduleEntries:(nonnull NSArray<YMKMasstransitScheduleScheduleEntry *> *)scheduleEntries;


@end

/**
 * :nodoc:
 * Describes the thread schedule at the specified time period.
 * ScheduleEntry either defines arrival and departure frequency for some
 * time range, or defines a single arrival and departure at some point
 * in time.
 */
@interface YMKMasstransitScheduleScheduleEntry : NSObject

/**
 * Defines a frequency-based schedule that does not contain exact
 * arrival and departure times. A ScheduleEntry must have exactly one of
 * Periodical or Scheduled set.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitPeriodical *periodical;

/**
 * Defines the exact arrival and departure time. A ScheduleEntry must
 * have exactly one of Periodical or Scheduled set.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitScheduled *scheduled;


+ (nonnull YMKMasstransitScheduleScheduleEntry *)scheduleEntryWithPeriodical:(nullable YMKMasstransitPeriodical *)periodical
                                                                   scheduled:(nullable YMKMasstransitScheduled *)scheduled;


@end

/**
 * :nodoc:
 * @brief Contains information about a mass transit thread that runs
 * through a specified stop.
 */
@interface YMKMasstransitThreadAtStop : NSObject

/**
 * Mass transit thread.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitThread *thread;

/**
 * Indicates that boarding is not allowed at the specified stop on the
 * specified thread.
 */
@property (nonatomic, readonly) BOOL noBoarding;

/**
 * Indicates that drop off is not allowed at the specified stop on the
 * specified thread.
 */
@property (nonatomic, readonly) BOOL noDropOff;

/**
 * Information about upcoming vehicle arrivals and departures.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitSchedule *schedule;


+ (nonnull YMKMasstransitThreadAtStop *)threadAtStopWithThread:(nonnull YMKMasstransitThread *)thread
                                                    noBoarding:( BOOL)noBoarding
                                                     noDropOff:( BOOL)noDropOff
                                                      schedule:(nonnull YMKMasstransitSchedule *)schedule;


@end

/**
 * :nodoc:
 * @brief Contains information about the mass transit line and the
 * collection of mass transit threads on the line that go through the
 * specified stop.
 */
@interface YMKMasstransitLineAtStop : NSObject

/**
 * Mass transit line.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitLine *line;

/**
 * @brief Information about mass transit threads of the specified line
 * which go through the specified stop.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitThreadAtStop *> *threadsAtStop;


+ (nonnull YMKMasstransitLineAtStop *)lineAtStopWithLine:(nonnull YMKMasstransitLine *)line
                                           threadsAtStop:(nonnull NSArray<YMKMasstransitThreadAtStop *> *)threadsAtStop;


@end
