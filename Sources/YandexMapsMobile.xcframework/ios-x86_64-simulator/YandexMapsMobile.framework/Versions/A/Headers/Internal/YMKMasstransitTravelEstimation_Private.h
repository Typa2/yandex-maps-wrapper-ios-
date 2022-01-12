#import <YandexMapsMobile/YMKMasstransitTravelEstimation.h>

#import <yandex/maps/mapkit/transport/masstransit/travel_estimation.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::TravelEstimation, YMKMasstransitTravelEstimation, void> {
    static ::yandex::maps::mapkit::transport::masstransit::TravelEstimation from(
        YMKMasstransitTravelEstimation* platformTravelEstimation);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::TravelEstimation, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitTravelEstimation*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::TravelEstimation from(
        PlatformType platformTravelEstimation)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::TravelEstimation, YMKMasstransitTravelEstimation>::from(
            platformTravelEstimation);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::TravelEstimation> {
    static YMKMasstransitTravelEstimation* from(
        const ::yandex::maps::mapkit::transport::masstransit::TravelEstimation& travelEstimation);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
