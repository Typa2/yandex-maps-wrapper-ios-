#import <YandexMapsMobile/YMKRouteHelper.h>

#import <yandex/maps/mapkit/directions/driving/route_helper.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

#import <memory>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::ManeuverStyle, YMKManeuverStyle, void> {
    static ::yandex::maps::mapkit::directions::driving::ManeuverStyle from(
        YMKManeuverStyle* platformManeuverStyle);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::ManeuverStyle, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKManeuverStyle*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::ManeuverStyle from(
        PlatformType platformManeuverStyle)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::ManeuverStyle, YMKManeuverStyle>::from(
            platformManeuverStyle);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::ManeuverStyle> {
    static YMKManeuverStyle* from(
        const ::yandex::maps::mapkit::directions::driving::ManeuverStyle& maneuverStyle);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::JamTypeColor, YMKJamTypeColor, void> {
    static ::yandex::maps::mapkit::directions::driving::JamTypeColor from(
        YMKJamTypeColor* platformJamTypeColor);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::JamTypeColor, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKJamTypeColor*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::JamTypeColor from(
        PlatformType platformJamTypeColor)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::JamTypeColor, YMKJamTypeColor>::from(
            platformJamTypeColor);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::JamTypeColor> {
    static YMKJamTypeColor* from(
        const ::yandex::maps::mapkit::directions::driving::JamTypeColor& jamTypeColor);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex




