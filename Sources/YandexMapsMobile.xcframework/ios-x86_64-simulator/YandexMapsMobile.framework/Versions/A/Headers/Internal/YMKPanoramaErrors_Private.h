#import <YandexMapsMobile/YMKPanoramaErrors.h>

#import <yandex/maps/mapkit/places/panorama/errors.h>

#import <memory>

@interface YMKPanoramaNotFoundError ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::places::panorama::NotFoundError>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::places::panorama::NotFoundError>)nativeNotFoundError;

@end
