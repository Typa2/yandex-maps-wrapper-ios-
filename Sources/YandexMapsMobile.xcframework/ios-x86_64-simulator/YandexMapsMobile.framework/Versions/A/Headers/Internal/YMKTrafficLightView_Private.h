#import <YandexMapsMobile/YMKTrafficLightView.h>

#import <yandex/maps/mapkit/directions/navigation_layer/traffic_light_view.h>

#import <memory>

@interface YMKTrafficLightView ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightView>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightView>)nativeTrafficLightView;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightView>)native;

@end
