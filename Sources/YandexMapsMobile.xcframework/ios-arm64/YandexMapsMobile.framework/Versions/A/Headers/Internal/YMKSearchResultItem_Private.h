#import <YandexMapsMobile/YMKSearchResultItem.h>

#import <yandex/maps/mapkit/search/search_layer/search_result_item.h>

#import <memory>

@interface YMKSearchResultItem ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>)nativeSearchResultItem;
- (std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>)native;

@end
