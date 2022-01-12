#import <Foundation/Foundation.h>

@class YMKVehicleData;

/**
 * :nodoc:
 * Base interface for mass transit vehicle tap callbacks.
 */
@protocol YMKMasstransitVehicleTapListener <NSObject>

/**
 * Invoked when the user taps the vehicle icon on the map. Returns true
 * if the event was handled. Event will not be passed to the parent.
 * Returns false if the event was not handled. Event will be passed to
 * the parent.
 */
- (BOOL)onVehicleTapWithVehicle:(nonnull YMKVehicleData *)vehicle;

@end
