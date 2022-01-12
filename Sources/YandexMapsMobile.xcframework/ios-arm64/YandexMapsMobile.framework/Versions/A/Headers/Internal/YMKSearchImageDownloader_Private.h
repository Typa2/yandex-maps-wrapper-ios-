#import <YandexMapsMobile/YMKSearchImageDownloader.h>

#import <yandex/maps/mapkit/search/image_downloader.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

OnImageReceived onImageReceived(
    YMKSearchImageListener handler);
OnImageError onImageError(
    YMKSearchImageListener handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchImageSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::ImageSession>)native;

- (::yandex::maps::mapkit::search::ImageSession *)nativeImageSession;

@end

@interface YMKSearchImageDownloader ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::ImageDownloader>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::ImageDownloader>)nativeImageDownloader;
- (std::shared_ptr<::yandex::maps::mapkit::search::ImageDownloader>)native;

@end
