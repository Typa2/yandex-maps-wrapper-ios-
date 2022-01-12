#import <YandexMapsMobile/YMKDrivingAnnotation.h>

#import <yandex/maps/mapkit/directions/driving/annotation.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::UturnMetadata, YMKDrivingUturnMetadata, void> {
    static ::yandex::maps::mapkit::directions::driving::UturnMetadata from(
        YMKDrivingUturnMetadata* platformUturnMetadata);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::UturnMetadata, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingUturnMetadata*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::UturnMetadata from(
        PlatformType platformUturnMetadata)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::UturnMetadata, YMKDrivingUturnMetadata>::from(
            platformUturnMetadata);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::UturnMetadata> {
    static YMKDrivingUturnMetadata* from(
        const ::yandex::maps::mapkit::directions::driving::UturnMetadata& uturnMetadata);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::LeaveRoundaboutMetadata, YMKDrivingLeaveRoundaboutMetadata, void> {
    static ::yandex::maps::mapkit::directions::driving::LeaveRoundaboutMetadata from(
        YMKDrivingLeaveRoundaboutMetadata* platformLeaveRoundaboutMetadata);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::LeaveRoundaboutMetadata, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingLeaveRoundaboutMetadata*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::LeaveRoundaboutMetadata from(
        PlatformType platformLeaveRoundaboutMetadata)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::LeaveRoundaboutMetadata, YMKDrivingLeaveRoundaboutMetadata>::from(
            platformLeaveRoundaboutMetadata);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::LeaveRoundaboutMetadata> {
    static YMKDrivingLeaveRoundaboutMetadata* from(
        const ::yandex::maps::mapkit::directions::driving::LeaveRoundaboutMetadata& leaveRoundaboutMetadata);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::ActionMetadata, YMKDrivingActionMetadata, void> {
    static ::yandex::maps::mapkit::directions::driving::ActionMetadata from(
        YMKDrivingActionMetadata* platformActionMetadata);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::ActionMetadata, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingActionMetadata*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::ActionMetadata from(
        PlatformType platformActionMetadata)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::ActionMetadata, YMKDrivingActionMetadata>::from(
            platformActionMetadata);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::ActionMetadata> {
    static YMKDrivingActionMetadata* from(
        const ::yandex::maps::mapkit::directions::driving::ActionMetadata& actionMetadata);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex




