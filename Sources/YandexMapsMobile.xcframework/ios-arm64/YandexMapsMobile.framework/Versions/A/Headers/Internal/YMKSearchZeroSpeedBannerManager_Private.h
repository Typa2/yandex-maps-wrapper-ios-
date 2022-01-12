#import <YandexMapsMobile/YMKSearchZeroSpeedBannerManager.h>

#import <yandex/maps/mapkit/search/zero_speed_banner_manager.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

ZeroSpeedBannerSession::OnZeroSpeedBanner onZeroSpeedBanner(
    YMKSearchZeroSpeedBannerSessionResponseHandler handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchZeroSpeedBannerSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::ZeroSpeedBannerSession>)native;

- (::yandex::maps::mapkit::search::ZeroSpeedBannerSession *)nativeZeroSpeedBannerSession;

@end

@interface YMKSearchZeroSpeedBannerManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::ZeroSpeedBannerManager>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::ZeroSpeedBannerManager>)nativeZeroSpeedBannerManager;
- (std::shared_ptr<::yandex::maps::mapkit::search::ZeroSpeedBannerManager>)native;

@end
