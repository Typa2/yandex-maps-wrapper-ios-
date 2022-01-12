#import <YandexMapsMobile/YMKDrivingVehicleType.h>

@interface YMKDrivingVehicleOptions : NSObject

/// :nodoc:
/**
 * :nodoc:
 * Sets the vehicle type for special routing.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *vehicleType;

/// :nodoc:
/**
 * :nodoc:
 * Real vehicle weight.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *weight;

/// :nodoc:
/**
 * :nodoc:
 * Maximal weight supported by a vehicle axle.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *axleWeight;

/// :nodoc:
/**
 * :nodoc:
 * Maximal allowed weight for the vehicle.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *maxWeight;

/// :nodoc:
/**
 * :nodoc:
 * Vehicle height.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *height;

/// :nodoc:
/**
 * :nodoc:
 * Vehicle width.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *width;

/// :nodoc:
/**
 * :nodoc:
 * Vehicle length.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *length;

/// :nodoc:
/**
 * :nodoc:
 * Vehicle cargo weight.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *payload;

/// :nodoc:
/**
 * :nodoc:
 * Vehicle eco class.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *ecoClass;

/// :nodoc:
/**
 * :nodoc:
 * The vehicle has a trailer attached.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *hasTrailer;

+ (nonnull YMKDrivingVehicleOptions *)vehicleOptionsWithVehicleType:(nullable NSNumber *)vehicleType
                                                             weight:(nullable NSNumber *)weight
                                                         axleWeight:(nullable NSNumber *)axleWeight
                                                          maxWeight:(nullable NSNumber *)maxWeight
                                                             height:(nullable NSNumber *)height
                                                              width:(nullable NSNumber *)width
                                                             length:(nullable NSNumber *)length
                                                            payload:(nullable NSNumber *)payload
                                                           ecoClass:(nullable NSNumber *)ecoClass
                                                         hasTrailer:(nullable NSNumber *)hasTrailer;


@end
