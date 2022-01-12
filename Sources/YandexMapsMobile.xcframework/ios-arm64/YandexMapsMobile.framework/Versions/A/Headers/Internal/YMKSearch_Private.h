#import <YandexMapsMobile/YMKSearch.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/search/search.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

@interface YMKSearch ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::Search>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::Search>)nativeSearch;
- (std::shared_ptr<::yandex::maps::mapkit::search::Search>)native;

@end
