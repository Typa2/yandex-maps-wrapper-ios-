#import <YandexMapsMobile/YMKBillboardLogger.h>

#import <yandex/maps/mapkit/search/billboard_logger.h>

#import <memory>

@interface YMKBillboardLogger ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::BillboardLogger>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::BillboardLogger>)nativeBillboardLogger;
- (std::shared_ptr<::yandex::maps::mapkit::search::BillboardLogger>)native;

@end
