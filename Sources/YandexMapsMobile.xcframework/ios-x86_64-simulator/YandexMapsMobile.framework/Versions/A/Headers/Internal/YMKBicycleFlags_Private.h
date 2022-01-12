#import <YandexMapsMobile/YMKBicycleFlags.h>

#import <yandex/maps/mapkit/transport/bicycle/flags.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::bicycle::Flags, YMKBicycleFlags, void> {
    static ::yandex::maps::mapkit::transport::bicycle::Flags from(
        YMKBicycleFlags* platformFlags);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::bicycle::Flags, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKBicycleFlags*>::value>::type> {
    static ::yandex::maps::mapkit::transport::bicycle::Flags from(
        PlatformType platformFlags)
    {
        return ToNative<::yandex::maps::mapkit::transport::bicycle::Flags, YMKBicycleFlags>::from(
            platformFlags);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::bicycle::Flags> {
    static YMKBicycleFlags* from(
        const ::yandex::maps::mapkit::transport::bicycle::Flags& flags);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
