#import <YandexMapsMobile/YMKMasstransitLayer.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/transport/masstransit/masstransit_layer.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

@interface YMKMasstransitLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitLayer>)nativeMasstransitLayer;
- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitLayer>)native;

@end
