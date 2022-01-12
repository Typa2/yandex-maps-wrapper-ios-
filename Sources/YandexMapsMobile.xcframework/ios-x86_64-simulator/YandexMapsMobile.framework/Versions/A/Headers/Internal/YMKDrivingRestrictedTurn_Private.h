#import <YandexMapsMobile/YMKDrivingRestrictedTurn.h>

#import <yandex/maps/mapkit/directions/driving/restricted_turn.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::RestrictedTurn, YMKDrivingRestrictedTurn, void> {
    static ::yandex::maps::mapkit::directions::driving::RestrictedTurn from(
        YMKDrivingRestrictedTurn* platformRestrictedTurn);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::RestrictedTurn, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingRestrictedTurn*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::RestrictedTurn from(
        PlatformType platformRestrictedTurn)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::RestrictedTurn, YMKDrivingRestrictedTurn>::from(
            platformRestrictedTurn);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::RestrictedTurn> {
    static YMKDrivingRestrictedTurn* from(
        const ::yandex::maps::mapkit::directions::driving::RestrictedTurn& restrictedTurn);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
