#import <Foundation/Foundation.h>

@class YMKMasstransitLine;

/**
 * :nodoc:
 * Vehicle information that is provided in a vehicle layer.
 */
@interface YMKVehicleData : NSObject
/**
 * ID of a vehicle.
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
 * Current direction of the vehicle's movement.
 */
@property (nonatomic, readonly) float currentAzimuth;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
