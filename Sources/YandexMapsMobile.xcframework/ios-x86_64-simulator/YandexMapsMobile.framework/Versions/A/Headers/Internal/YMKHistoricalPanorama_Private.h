#import <YandexMapsMobile/YMKHistoricalPanorama.h>

#import <yandex/maps/mapkit/places/panorama/historical_panorama.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::places::panorama::HistoricalPanorama, YMKHistoricalPanorama, void> {
    static ::yandex::maps::mapkit::places::panorama::HistoricalPanorama from(
        YMKHistoricalPanorama* platformHistoricalPanorama);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::places::panorama::HistoricalPanorama, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKHistoricalPanorama*>::value>::type> {
    static ::yandex::maps::mapkit::places::panorama::HistoricalPanorama from(
        PlatformType platformHistoricalPanorama)
    {
        return ToNative<::yandex::maps::mapkit::places::panorama::HistoricalPanorama, YMKHistoricalPanorama>::from(
            platformHistoricalPanorama);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::places::panorama::HistoricalPanorama> {
    static YMKHistoricalPanorama* from(
        const ::yandex::maps::mapkit::places::panorama::HistoricalPanorama& historicalPanorama);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
