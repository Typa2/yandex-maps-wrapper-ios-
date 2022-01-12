#import <YandexMapsMobile/YMKDrivingRuggedRoad.h>

#import <yandex/maps/mapkit/directions/driving/rugged_road.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::RuggedRoad, YMKDrivingRuggedRoad, void> {
    static ::yandex::maps::mapkit::directions::driving::RuggedRoad from(
        YMKDrivingRuggedRoad* platformRuggedRoad);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::RuggedRoad, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingRuggedRoad*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::RuggedRoad from(
        PlatformType platformRuggedRoad)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::RuggedRoad, YMKDrivingRuggedRoad>::from(
            platformRuggedRoad);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::RuggedRoad> {
    static YMKDrivingRuggedRoad* from(
        const ::yandex::maps::mapkit::directions::driving::RuggedRoad& ruggedRoad);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
