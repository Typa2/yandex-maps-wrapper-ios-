#import <YandexMapsMobile/YMKRoadEventView.h>

#import <yandex/maps/mapkit/directions/navigation_layer/road_event_view.h>

#import <memory>

@interface YMKRoadEventView ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventView>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventView>)nativeRoadEventView;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventView>)native;

@end
