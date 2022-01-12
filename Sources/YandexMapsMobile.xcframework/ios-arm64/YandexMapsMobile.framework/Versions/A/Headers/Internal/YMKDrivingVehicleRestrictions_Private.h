#import <YandexMapsMobile/YMKDrivingVehicleRestrictions.h>

#import <yandex/maps/mapkit/directions/driving/vehicle_restrictions.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::VehicleRestriction, YMKDrivingVehicleRestriction, void> {
    static ::yandex::maps::mapkit::directions::driving::VehicleRestriction from(
        YMKDrivingVehicleRestriction* platformVehicleRestriction);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::VehicleRestriction, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingVehicleRestriction*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::VehicleRestriction from(
        PlatformType platformVehicleRestriction)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::VehicleRestriction, YMKDrivingVehicleRestriction>::from(
            platformVehicleRestriction);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::VehicleRestriction> {
    static YMKDrivingVehicleRestriction* from(
        const ::yandex::maps::mapkit::directions::driving::VehicleRestriction& vehicleRestriction);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::RoadVehicleRestriction, YMKDrivingRoadVehicleRestriction, void> {
    static ::yandex::maps::mapkit::directions::driving::RoadVehicleRestriction from(
        YMKDrivingRoadVehicleRestriction* platformRoadVehicleRestriction);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::RoadVehicleRestriction, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingRoadVehicleRestriction*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::RoadVehicleRestriction from(
        PlatformType platformRoadVehicleRestriction)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::RoadVehicleRestriction, YMKDrivingRoadVehicleRestriction>::from(
            platformRoadVehicleRestriction);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::RoadVehicleRestriction> {
    static YMKDrivingRoadVehicleRestriction* from(
        const ::yandex::maps::mapkit::directions::driving::RoadVehicleRestriction& roadVehicleRestriction);
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
struct ToNative<::yandex::maps::mapkit::directions::driving::ManoeuvreVehicleRestriction, YMKDrivingManoeuvreVehicleRestriction, void> {
    static ::yandex::maps::mapkit::directions::driving::ManoeuvreVehicleRestriction from(
        YMKDrivingManoeuvreVehicleRestriction* platformManoeuvreVehicleRestriction);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::ManoeuvreVehicleRestriction, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingManoeuvreVehicleRestriction*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::ManoeuvreVehicleRestriction from(
        PlatformType platformManoeuvreVehicleRestriction)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::ManoeuvreVehicleRestriction, YMKDrivingManoeuvreVehicleRestriction>::from(
            platformManoeuvreVehicleRestriction);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::ManoeuvreVehicleRestriction> {
    static YMKDrivingManoeuvreVehicleRestriction* from(
        const ::yandex::maps::mapkit::directions::driving::ManoeuvreVehicleRestriction& manoeuvreVehicleRestriction);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
