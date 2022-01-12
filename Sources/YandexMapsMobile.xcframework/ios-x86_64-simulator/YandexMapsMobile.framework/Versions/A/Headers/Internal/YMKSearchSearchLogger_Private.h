#import <YandexMapsMobile/YMKSearchSearchLogger.h>

#import <yandex/maps/mapkit/search/search_logger.h>

#import <memory>

@interface YMKSearchLogger ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::SearchLogger>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::SearchLogger>)nativeSearchLogger;
- (std::shared_ptr<::yandex::maps::mapkit::search::SearchLogger>)native;

@end
