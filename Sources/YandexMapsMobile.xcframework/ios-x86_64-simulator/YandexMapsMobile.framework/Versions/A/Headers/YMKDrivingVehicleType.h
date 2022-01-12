#import <Foundation/Foundation.h>

/**
 * The type of the vehicle that is used for the route.
 */
typedef NS_ENUM(NSUInteger, YMKDrivingVehicleType) {
    /**
     * Standard vehicle type.
     */
    YMKDrivingVehicleTypeDefault,
    /**
     * :nodoc:
     */
    YMKDrivingVehicleTypeTaxi,
    /**
     * :nodoc:
     */
    YMKDrivingVehicleTypeTruck
};
