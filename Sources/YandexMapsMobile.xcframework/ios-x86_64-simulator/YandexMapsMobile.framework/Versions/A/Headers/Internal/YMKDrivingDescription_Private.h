#import <YandexMapsMobile/YMKDrivingDescription.h>

#import <yandex/maps/mapkit/directions/driving/description.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::Description, YMKDrivingDescription, void> {
    static ::yandex::maps::mapkit::directions::driving::Description from(
        YMKDrivingDescription* platformDescription);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::Description, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingDescription*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::Description from(
        PlatformType platformDescription)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::Description, YMKDrivingDescription>::from(
            platformDescription);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::Description> {
    static YMKDrivingDescription* from(
        const ::yandex::maps::mapkit::directions::driving::Description& description);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
