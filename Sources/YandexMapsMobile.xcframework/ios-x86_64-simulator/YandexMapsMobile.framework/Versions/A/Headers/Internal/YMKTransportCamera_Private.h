#import <YandexMapsMobile/YMKTransportCamera.h>

#import <yandex/maps/mapkit/transport/navigation/layer/camera.h>

#import <memory>

@interface YMKTransportCamera ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::Camera>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::Camera>)nativeCamera;
- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::Camera>)native;

@end
