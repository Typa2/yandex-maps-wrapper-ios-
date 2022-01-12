#import <YandexMapsMobile/YMKSearchSearchManager.h>

#import <yandex/maps/mapkit/search/search_manager.h>

#import <memory>

@interface YMKSearchManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::SearchManager>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::SearchManager>)nativeSearchManager;
- (std::shared_ptr<::yandex::maps::mapkit::search::SearchManager>)native;

@end
