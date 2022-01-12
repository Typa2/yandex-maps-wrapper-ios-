#import <YandexMapsMobile/YMKNavigationLayer.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/navigation_layer/navigation_layer.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

@interface YMKNavigationLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::NavigationLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::NavigationLayer>)nativeNavigationLayer;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::NavigationLayer>)native;

@end
