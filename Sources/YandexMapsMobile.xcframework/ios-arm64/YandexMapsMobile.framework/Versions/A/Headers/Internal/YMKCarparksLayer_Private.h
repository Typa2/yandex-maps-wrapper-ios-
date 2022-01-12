#import <YandexMapsMobile/YMKCarparksLayer.h>

#import <yandex/maps/mapkit/directions/carparks/carparks_layer.h>

#import <memory>

@interface YMKCarparksLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::carparks::CarparksLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::carparks::CarparksLayer>)nativeCarparksLayer;
- (std::shared_ptr<::yandex::maps::mapkit::directions::carparks::CarparksLayer>)native;

@end
