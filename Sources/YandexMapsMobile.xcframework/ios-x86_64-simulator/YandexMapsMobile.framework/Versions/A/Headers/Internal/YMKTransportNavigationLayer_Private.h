#import <YandexMapsMobile/YMKTransportNavigationLayer.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/transport/navigation/layer/navigation_layer.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

@interface YMKTransportNavigationLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::NavigationLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::NavigationLayer>)nativeNavigationLayer;
- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::NavigationLayer>)native;

@end
