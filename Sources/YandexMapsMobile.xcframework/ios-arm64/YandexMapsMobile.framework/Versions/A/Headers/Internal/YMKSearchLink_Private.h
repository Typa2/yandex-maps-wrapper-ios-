#import <YandexMapsMobile/YMKSearchLink.h>

#import <yandex/maps/mapkit/search/link.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Link, YMKSearchLink, void> {
    static ::yandex::maps::mapkit::search::Link from(
        YMKSearchLink* platformLink);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Link, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchLink*>::value>::type> {
    static ::yandex::maps::mapkit::search::Link from(
        PlatformType platformLink)
    {
        return ToNative<::yandex::maps::mapkit::search::Link, YMKSearchLink>::from(
            platformLink);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Link> {
    static YMKSearchLink* from(
        const ::yandex::maps::mapkit::search::Link& link);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
