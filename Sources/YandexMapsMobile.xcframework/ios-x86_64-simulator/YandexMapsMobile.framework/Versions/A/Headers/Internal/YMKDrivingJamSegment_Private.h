#import <YandexMapsMobile/YMKDrivingJamSegment.h>

#import <yandex/maps/mapkit/directions/driving/jam_segment.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::JamSegment, YMKDrivingJamSegment, void> {
    static ::yandex::maps::mapkit::directions::driving::JamSegment from(
        YMKDrivingJamSegment* platformJamSegment);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::JamSegment, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingJamSegment*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::JamSegment from(
        PlatformType platformJamSegment)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::JamSegment, YMKDrivingJamSegment>::from(
            platformJamSegment);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::JamSegment> {
    static YMKDrivingJamSegment* from(
        const ::yandex::maps::mapkit::directions::driving::JamSegment& jamSegment);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
