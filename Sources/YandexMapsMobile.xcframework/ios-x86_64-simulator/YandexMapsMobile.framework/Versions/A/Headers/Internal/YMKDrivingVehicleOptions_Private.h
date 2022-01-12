#import <YandexMapsMobile/YMKDrivingVehicleOptions.h>

#import <yandex/maps/mapkit/directions/driving/vehicle_options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::VehicleOptions, YMKDrivingVehicleOptions, void> {
    static ::yandex::maps::mapkit::directions::driving::VehicleOptions from(
        YMKDrivingVehicleOptions* platformVehicleOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::VehicleOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingVehicleOptions*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::VehicleOptions from(
        PlatformType platformVehicleOptions)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::VehicleOptions, YMKDrivingVehicleOptions>::from(
            platformVehicleOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::VehicleOptions> {
    static YMKDrivingVehicleOptions* from(
        const ::yandex::maps::mapkit::directions::driving::VehicleOptions& vehicleOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
