#import <YandexMapsMobile/YMKDrivingDirectionSigns.h>

#import <yandex/maps/mapkit/directions/driving/direction_signs.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_native_fwd.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/bindings/ios/to_platform_fwd.h>

#import <type_traits>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignStyle, YMKDrivingDirectionSignStyle, void> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignStyle from(
        YMKDrivingDirectionSignStyle* platformDirectionSignStyle);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignStyle, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingDirectionSignStyle*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignStyle from(
        PlatformType platformDirectionSignStyle)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignStyle, YMKDrivingDirectionSignStyle>::from(
            platformDirectionSignStyle);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::DirectionSignStyle> {
    static YMKDrivingDirectionSignStyle* from(
        const ::yandex::maps::mapkit::directions::driving::DirectionSignStyle& directionSignStyle);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignToponym, YMKDrivingDirectionSignToponym, void> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignToponym from(
        YMKDrivingDirectionSignToponym* platformDirectionSignToponym);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignToponym, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingDirectionSignToponym*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignToponym from(
        PlatformType platformDirectionSignToponym)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignToponym, YMKDrivingDirectionSignToponym>::from(
            platformDirectionSignToponym);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::DirectionSignToponym> {
    static YMKDrivingDirectionSignToponym* from(
        const ::yandex::maps::mapkit::directions::driving::DirectionSignToponym& directionSignToponym);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignRoad, YMKDrivingDirectionSignRoad, void> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignRoad from(
        YMKDrivingDirectionSignRoad* platformDirectionSignRoad);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignRoad, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingDirectionSignRoad*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignRoad from(
        PlatformType platformDirectionSignRoad)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignRoad, YMKDrivingDirectionSignRoad>::from(
            platformDirectionSignRoad);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::DirectionSignRoad> {
    static YMKDrivingDirectionSignRoad* from(
        const ::yandex::maps::mapkit::directions::driving::DirectionSignRoad& directionSignRoad);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignExit, YMKDrivingDirectionSignExit, void> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignExit from(
        YMKDrivingDirectionSignExit* platformDirectionSignExit);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignExit, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingDirectionSignExit*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignExit from(
        PlatformType platformDirectionSignExit)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignExit, YMKDrivingDirectionSignExit>::from(
            platformDirectionSignExit);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::DirectionSignExit> {
    static YMKDrivingDirectionSignExit* from(
        const ::yandex::maps::mapkit::directions::driving::DirectionSignExit& directionSignExit);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignIcon, YMKDrivingDirectionSignIcon, void> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignIcon from(
        YMKDrivingDirectionSignIcon* platformDirectionSignIcon);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignIcon, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingDirectionSignIcon*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignIcon from(
        PlatformType platformDirectionSignIcon)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignIcon, YMKDrivingDirectionSignIcon>::from(
            platformDirectionSignIcon);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::DirectionSignIcon> {
    static YMKDrivingDirectionSignIcon* from(
        const ::yandex::maps::mapkit::directions::driving::DirectionSignIcon& directionSignIcon);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignItem, id, void> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignItem from(
        id platformDirectionSignItem);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignItem, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, id>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::DirectionSignItem from(
        PlatformType platformDirectionSignItem)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::DirectionSignItem, id>::from(
            platformDirectionSignItem);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::DirectionSignItem> {
    static id from(
        const ::yandex::maps::mapkit::directions::driving::DirectionSignItem& directionSignItem);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


