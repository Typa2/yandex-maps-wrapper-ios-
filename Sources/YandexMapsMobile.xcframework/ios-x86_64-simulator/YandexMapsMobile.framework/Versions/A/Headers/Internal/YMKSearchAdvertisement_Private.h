#import <YandexMapsMobile/YMKSearchAdvertisement.h>

#import <yandex/maps/mapkit/search/advertisement.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>





namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Advertisement::Link, YMKSearchAdvertisementLink, void> {
    static ::yandex::maps::mapkit::search::Advertisement::Link from(
        YMKSearchAdvertisementLink* platformLink);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Advertisement::Link, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchAdvertisementLink*>::value>::type> {
    static ::yandex::maps::mapkit::search::Advertisement::Link from(
        PlatformType platformLink)
    {
        return ToNative<::yandex::maps::mapkit::search::Advertisement::Link, YMKSearchAdvertisementLink>::from(
            platformLink);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Advertisement::Link> {
    static YMKSearchAdvertisementLink* from(
        const ::yandex::maps::mapkit::search::Advertisement::Link& link);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex






