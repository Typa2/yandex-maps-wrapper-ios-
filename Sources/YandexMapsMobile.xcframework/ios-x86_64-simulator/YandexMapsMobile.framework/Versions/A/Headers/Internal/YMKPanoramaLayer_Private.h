#import <YandexMapsMobile/YMKPanoramaLayer.h>

#import <yandex/maps/mapkit/places/panorama/panorama_layer.h>

#import <memory>

@interface YMKPanoramaLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaLayer>)nativePanoramaLayer;
- (std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaLayer>)native;

@end
