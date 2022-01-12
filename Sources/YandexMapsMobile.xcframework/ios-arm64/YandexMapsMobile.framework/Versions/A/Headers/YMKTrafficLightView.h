#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKDrivingTrafficLight.h>
#import <YandexMapsMobile/YMKPlacemark.h>

/**
 * :nodoc:
 */
@interface YMKTrafficLightView : NSObject
@property (nonatomic, readonly, nonnull) YMKDrivingTrafficLight *trafficLight;
/**
 * Representation of traffic light on map.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKPlacemarkMapObject *appearance;
/**
 * The route to which this traffic light belongs.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKDrivingRoute *hostRoute;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
