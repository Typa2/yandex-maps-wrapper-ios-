#import <YandexMapsMobile/YMKMapObjectCollection.h>
#import <YandexMapsMobile/YMKVehicleTapListener.h>

/**
 * :nodoc:
 * Provides information about the positions of public transport vehicles
 * in real time.
 */
@interface YMKMasstransitLayer : NSObject

/**
 * Enables or disables the layer. If enabled, the layer regularly
 * requests updated information from the server and provides clients
 * with mass transit information in real time.
 */
- (void)setVehiclesVisibleWithOn:(BOOL)on;

/**
 * Returns whether the layer is processing vehicles.
 */
- (BOOL)isVehiclesVisible;

/**
 * Adds a new line ID to the line filter. Vehicles which do not match
 * any of the IDs in the line filter are filtered out.
 */
- (void)addLineFilterWithLineId:(nonnull NSString *)lineId;

/**
 * Removes all IDs from the line filter.
 */
- (void)clearLineFilter;

/**
 * Adds a new vehicle type to the vehicle types filter. Vehicles which
 * do not match any of the IDs in the vehicle types filter are filtered
 * out.
 */
- (void)addTypeFilterWithType:(nonnull NSString *)type;

/**
 * Removes all entries from the vehicle types filter.
 */
- (void)clearTypeFilter;

/**
 * Sets a tap listener for all vehicles created by this layer.
 *
 * Remark:
 * @param tapListener has optional type, it may be uninitialized.
 */
- (void)setVehicleTapListenerWithTapListener:(nullable id<YMKMasstransitVehicleTapListener>)tapListener;
/**
 * Gets the collection of public transport vehicles on the map.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKMapObjectCollection *vehicleObjects;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
