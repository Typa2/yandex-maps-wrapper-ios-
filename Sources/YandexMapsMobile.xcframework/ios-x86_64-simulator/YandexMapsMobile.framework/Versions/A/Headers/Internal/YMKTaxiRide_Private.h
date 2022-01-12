#import <YandexMapsMobile/YMKTaxiRide.h>

#import <yandex/maps/mapkit/transport/taxi/ride.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::taxi::RideOption, YMKTaxiRideOption, void> {
    static ::yandex::maps::mapkit::transport::taxi::RideOption from(
        YMKTaxiRideOption* platformRideOption);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::taxi::RideOption, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKTaxiRideOption*>::value>::type> {
    static ::yandex::maps::mapkit::transport::taxi::RideOption from(
        PlatformType platformRideOption)
    {
        return ToNative<::yandex::maps::mapkit::transport::taxi::RideOption, YMKTaxiRideOption>::from(
            platformRideOption);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::taxi::RideOption> {
    static YMKTaxiRideOption* from(
        const ::yandex::maps::mapkit::transport::taxi::RideOption& rideOption);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


