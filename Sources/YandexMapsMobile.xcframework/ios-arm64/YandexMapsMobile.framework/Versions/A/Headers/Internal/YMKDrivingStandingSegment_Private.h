#import <YandexMapsMobile/YMKDrivingStandingSegment.h>

#import <yandex/maps/mapkit/directions/driving/standing_segment.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::StandingSegment, YMKDrivingStandingSegment, void> {
    static ::yandex::maps::mapkit::directions::driving::StandingSegment from(
        YMKDrivingStandingSegment* platformStandingSegment);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::StandingSegment, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingStandingSegment*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::StandingSegment from(
        PlatformType platformStandingSegment)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::StandingSegment, YMKDrivingStandingSegment>::from(
            platformStandingSegment);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::StandingSegment> {
    static YMKDrivingStandingSegment* from(
        const ::yandex::maps::mapkit::directions::driving::StandingSegment& standingSegment);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
