#import <YandexMapsMobile/YMKPlaces.h>

#import <yandex/maps/mapkit/places/places.h>

#import <memory>

@interface YMKPlaces ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::places::Places>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::places::Places>)nativePlaces;
- (std::shared_ptr<::yandex::maps::mapkit::places::Places>)native;

@end
