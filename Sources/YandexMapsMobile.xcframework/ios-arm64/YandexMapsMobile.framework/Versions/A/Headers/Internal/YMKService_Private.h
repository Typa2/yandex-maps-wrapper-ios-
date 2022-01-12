#import <YandexMapsMobile/YMKService.h>

#import <yandex/maps/mapkit/places/panorama/service.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace places {
namespace panorama {
namespace ios {

PanoramaService::OnPanoramaSearchResult onPanoramaSearchResult(
    YMKPanoramaServiceSearchHandler handler);
PanoramaService::OnPanoramaSearchError onPanoramaSearchError(
    YMKPanoramaServiceSearchHandler handler);

} // namespace ios
} // namespace panorama
} // namespace places
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKPanoramaService ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::places::panorama::PanoramaService>)native;

- (::yandex::maps::mapkit::places::panorama::PanoramaService *)nativePanoramaService;

@end

@interface YMKPanoramaServiceSearchSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::places::panorama::PanoramaService::SearchSession>)native;

- (::yandex::maps::mapkit::places::panorama::PanoramaService::SearchSession *)nativeSearchSession;

@end
