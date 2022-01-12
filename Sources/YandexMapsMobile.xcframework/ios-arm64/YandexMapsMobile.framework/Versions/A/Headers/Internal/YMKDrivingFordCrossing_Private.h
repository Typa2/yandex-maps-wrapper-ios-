#import <YandexMapsMobile/YMKDrivingFordCrossing.h>

#import <yandex/maps/mapkit/directions/driving/ford_crossing.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::FordCrossing, YMKDrivingFordCrossing, void> {
    static ::yandex::maps::mapkit::directions::driving::FordCrossing from(
        YMKDrivingFordCrossing* platformFordCrossing);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::FordCrossing, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingFordCrossing*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::FordCrossing from(
        PlatformType platformFordCrossing)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::FordCrossing, YMKDrivingFordCrossing>::from(
            platformFordCrossing);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::FordCrossing> {
    static YMKDrivingFordCrossing* from(
        const ::yandex::maps::mapkit::directions::driving::FordCrossing& fordCrossing);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
