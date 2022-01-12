#import <YandexMapsMobile/YMKDrivingRestrictedForTrucks.h>

#import <yandex/maps/mapkit/directions/driving/restricted_for_trucks.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::RestrictedForTrucksRoad, YMKDrivingRestrictedForTrucksRoad, void> {
    static ::yandex::maps::mapkit::directions::driving::RestrictedForTrucksRoad from(
        YMKDrivingRestrictedForTrucksRoad* platformRestrictedForTrucksRoad);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::RestrictedForTrucksRoad, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingRestrictedForTrucksRoad*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::RestrictedForTrucksRoad from(
        PlatformType platformRestrictedForTrucksRoad)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::RestrictedForTrucksRoad, YMKDrivingRestrictedForTrucksRoad>::from(
            platformRestrictedForTrucksRoad);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::RestrictedForTrucksRoad> {
    static YMKDrivingRestrictedForTrucksRoad* from(
        const ::yandex::maps::mapkit::directions::driving::RestrictedForTrucksRoad& restrictedForTrucksRoad);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
