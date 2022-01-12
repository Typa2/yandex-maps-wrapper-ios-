#import <YandexMapsMobile/YMKMasstransitInfoService.h>

#import <yandex/maps/mapkit/transport/masstransit/masstransit_info_service.h>

#import <memory>

@interface YMKMasstransitInfoService ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitInfoService>)native;

- (::yandex::maps::mapkit::transport::masstransit::MasstransitInfoService *)nativeMasstransitInfoService;

@end
