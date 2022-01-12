#import <YandexMapsMobile/YMKSearchError.h>

#import <yandex/maps/mapkit/search/error.h>

#import <memory>

@interface YMKSearchCacheUnavailableError ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::CacheUnavailableError>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::CacheUnavailableError>)nativeCacheUnavailableError;

@end
