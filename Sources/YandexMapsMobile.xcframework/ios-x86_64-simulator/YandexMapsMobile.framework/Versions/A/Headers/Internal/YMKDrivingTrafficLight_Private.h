#import <YandexMapsMobile/YMKDrivingTrafficLight.h>

#import <yandex/maps/mapkit/directions/driving/traffic_light.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::TrafficLight, YMKDrivingTrafficLight, void> {
    static ::yandex::maps::mapkit::directions::driving::TrafficLight from(
        YMKDrivingTrafficLight* platformTrafficLight);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::TrafficLight, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingTrafficLight*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::TrafficLight from(
        PlatformType platformTrafficLight)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::TrafficLight, YMKDrivingTrafficLight>::from(
            platformTrafficLight);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::TrafficLight> {
    static YMKDrivingTrafficLight* from(
        const ::yandex::maps::mapkit::directions::driving::TrafficLight& trafficLight);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
