#import <YandexMapsMobile/YMKPoint.h>

/**
 * :nodoc:
 */
@interface YMKCarparksNearbyLayer : NSObject

/**
 * Shows carparks around the origin so that the distance between a
 * carpark and the origin point is less than or equal to maxDistance.
 *
 * @param origin The origin point.
 * @param maxDistance The maximum distance from the origin, in meters.
 */
- (void)showWithOrigin:(nonnull YMKPoint *)origin
           maxDistance:(double)maxDistance;

/**
 * Makes the layer invisible.
 */
- (void)hide;

/**
 * Indicates whether the layer is displayed on a map.
 */
- (BOOL)isVisible;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
