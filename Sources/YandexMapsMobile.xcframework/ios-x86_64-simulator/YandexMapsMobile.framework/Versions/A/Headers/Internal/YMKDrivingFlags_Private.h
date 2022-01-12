#import <YandexMapsMobile/YMKDrivingFlags.h>

#import <yandex/maps/mapkit/directions/driving/flags.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::Flags, YMKDrivingFlags, void> {
    static ::yandex::maps::mapkit::directions::driving::Flags from(
        YMKDrivingFlags* platformFlags);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::Flags, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingFlags*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::Flags from(
        PlatformType platformFlags)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::Flags, YMKDrivingFlags>::from(
            platformFlags);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::Flags> {
    static YMKDrivingFlags* from(
        const ::yandex::maps::mapkit::directions::driving::Flags& flags);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
