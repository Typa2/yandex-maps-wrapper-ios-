#import <YandexMapsMobile/YMKDrivingTollRoad.h>

#import <yandex/maps/mapkit/directions/driving/toll_road.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::TollRoad, YMKDrivingTollRoad, void> {
    static ::yandex::maps::mapkit::directions::driving::TollRoad from(
        YMKDrivingTollRoad* platformTollRoad);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::TollRoad, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingTollRoad*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::TollRoad from(
        PlatformType platformTollRoad)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::TollRoad, YMKDrivingTollRoad>::from(
            platformTollRoad);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::TollRoad> {
    static YMKDrivingTollRoad* from(
        const ::yandex::maps::mapkit::directions::driving::TollRoad& tollRoad);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
