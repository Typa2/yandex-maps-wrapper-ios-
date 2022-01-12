#import <YandexMapsMobile/YMKSerializer.h>

#import <yandex/maps/mapkit/transport/masstransit/serializer.h>

#import <memory>

@interface YMKMasstransitRouteSerializer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitRouteSerializer>)native;

- (::yandex::maps::mapkit::transport::masstransit::MasstransitRouteSerializer *)nativeMasstransitRouteSerializer;

@end
