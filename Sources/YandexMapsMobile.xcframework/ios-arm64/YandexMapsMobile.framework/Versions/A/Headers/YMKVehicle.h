#import <YandexMapsMobile/YMKMasstransitCommon.h>
#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKTime.h>

@class YMKVehicleProperties;
@class YMKVehicleStopEstimation;

/**
 * :nodoc:
 * Upcoming vehicle stop data with arrival time forecast (if available).
 */
@interface YMKVehicleStop : NSObject

@property (nonatomic, readonly, nonnull) YMKMasstransitStop *stop;

/**
 * Estimated arrival time at the specified stop.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKVehicleStopEstimation *estimation;


+ (nonnull YMKVehicleStop *)vehicleStopWithStop:(nonnull YMKMasstransitStop *)stop
                                     estimation:(nullable YMKVehicleStopEstimation *)estimation;


@end

/**
 * :nodoc:
 * Contains the estimated time for the specified stop.
 */
@interface YMKVehicleStopEstimation : NSObject

/**
 * Estimated arrival time of the specified vehicle for the specified
 * stop.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTime *arrivalTime;


+ (nonnull YMKVehicleStopEstimation *)estimationWithArrivalTime:(nullable YMKTime *)arrivalTime;


@end

/**
 * :nodoc:
 * Vehicle information with stops and arrival forecast.
 */
@interface YMKVehicle : NSObject

/**
 * Vehicle ID.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * ID of the line thread on which the vehicle is running.
 */
@property (nonatomic, readonly, nonnull) NSString *threadId;

/**
 * Stores the vehicle's public transport line info.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitLine *line;

/**
 * List of stops with arrival forecast for each.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKVehicleStop *> *stops;

/**
 * Position of the vehicle.
 */
@property (nonatomic, readonly, nonnull) YMKPoint *position;

/**
 * Properties of the vehicle.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKVehicleProperties *properties;


+ (nonnull YMKVehicle *)vehicleWithId:(nonnull NSString *)id
                             threadId:(nonnull NSString *)threadId
                                 line:(nonnull YMKMasstransitLine *)line
                                stops:(nonnull NSArray<YMKVehicleStop *> *)stops
                             position:(nonnull YMKPoint *)position
                           properties:(nullable YMKVehicleProperties *)properties;


@end

/**
 * :nodoc:
 * Set of properties that might be known for a vehicle.
 */
@interface YMKVehicleProperties : NSObject

/**
 * Indicates whether the vehicle is wheelchair accessible (if known).
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *wheelchairAccessible;

/**
 * Indicates whether bikes are allowed in the vehicle (if known).
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *bikesAllowed;

/**
 * Indicates whether the vehicle is equipped with air conditioning (if
 * known).
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *airConditioning;

/**
 * Indicates whether the vehicle has a low floor (if known).
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *lowFloor;

/**
 * Indicates whether the vehicle is going to a depot (if known).
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *toDepot;


+ (nonnull YMKVehicleProperties *)propertiesWithWheelchairAccessible:(nullable NSNumber *)wheelchairAccessible
                                                        bikesAllowed:(nullable NSNumber *)bikesAllowed
                                                     airConditioning:(nullable NSNumber *)airConditioning
                                                            lowFloor:(nullable NSNumber *)lowFloor
                                                             toDepot:(nullable NSNumber *)toDepot;


@end
