#import <YandexMapsMobile/YMKCarparksNearbyLayer.h>

#import <yandex/maps/mapkit/directions/carparks/carparks_nearby_layer.h>

#import <memory>

@interface YMKCarparksNearbyLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::carparks::CarparksNearbyLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::carparks::CarparksNearbyLayer>)nativeCarparksNearbyLayer;
- (std::shared_ptr<::yandex::maps::mapkit::directions::carparks::CarparksNearbyLayer>)native;

@end
