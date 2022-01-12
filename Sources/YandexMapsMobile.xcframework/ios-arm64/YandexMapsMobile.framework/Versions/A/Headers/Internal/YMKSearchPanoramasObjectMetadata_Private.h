#import <YandexMapsMobile/YMKSearchPanoramasObjectMetadata.h>

#import <yandex/maps/mapkit/search/panoramas_object_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Panorama, YMKSearchPanorama, void> {
    static ::yandex::maps::mapkit::search::Panorama from(
        YMKSearchPanorama* platformPanorama);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Panorama, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchPanorama*>::value>::type> {
    static ::yandex::maps::mapkit::search::Panorama from(
        PlatformType platformPanorama)
    {
        return ToNative<::yandex::maps::mapkit::search::Panorama, YMKSearchPanorama>::from(
            platformPanorama);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Panorama> {
    static YMKSearchPanorama* from(
        const ::yandex::maps::mapkit::search::Panorama& panorama);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


