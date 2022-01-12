#import <YandexMapsMobile/YMKDirections.h>

#import <yandex/maps/mapkit/directions/directions.h>

#import <memory>

@interface YMKDirections ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::Directions>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::Directions>)nativeDirections;
- (std::shared_ptr<::yandex::maps::mapkit::directions::Directions>)native;

@end
