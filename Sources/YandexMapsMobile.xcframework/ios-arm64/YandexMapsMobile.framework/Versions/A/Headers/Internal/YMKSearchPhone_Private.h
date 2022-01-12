#import <YandexMapsMobile/YMKSearchPhone.h>

#import <yandex/maps/mapkit/search/phone.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Phone, YMKSearchPhone, void> {
    static ::yandex::maps::mapkit::search::Phone from(
        YMKSearchPhone* platformPhone);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Phone, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchPhone*>::value>::type> {
    static ::yandex::maps::mapkit::search::Phone from(
        PlatformType platformPhone)
    {
        return ToNative<::yandex::maps::mapkit::search::Phone, YMKSearchPhone>::from(
            platformPhone);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Phone> {
    static YMKSearchPhone* from(
        const ::yandex::maps::mapkit::search::Phone& phone);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
