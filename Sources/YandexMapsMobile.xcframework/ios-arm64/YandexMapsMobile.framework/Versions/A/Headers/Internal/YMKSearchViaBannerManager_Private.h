#import <YandexMapsMobile/YMKSearchViaBannerManager.h>

#import <yandex/maps/mapkit/search/via_banner_manager.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

ViaBannerSession::OnViaBanner onViaBanner(
    YMKSearchViaBannerSessionResponseHandler handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchViaBannerSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::ViaBannerSession>)native;

- (::yandex::maps::mapkit::search::ViaBannerSession *)nativeViaBannerSession;

@end

@interface YMKSearchViaBannerManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::ViaBannerManager>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::ViaBannerManager>)nativeViaBannerManager;
- (std::shared_ptr<::yandex::maps::mapkit::search::ViaBannerManager>)native;

@end
