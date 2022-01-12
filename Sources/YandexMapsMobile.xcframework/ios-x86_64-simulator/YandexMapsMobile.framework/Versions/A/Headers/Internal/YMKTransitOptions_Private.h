#import <YandexMapsMobile/YMKTransitOptions.h>

#import <yandex/maps/mapkit/transport/masstransit/transit_options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::TransitOptions, YMKTransitOptions, void> {
    static ::yandex::maps::mapkit::transport::masstransit::TransitOptions from(
        YMKTransitOptions* platformTransitOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::TransitOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKTransitOptions*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::TransitOptions from(
        PlatformType platformTransitOptions)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::TransitOptions, YMKTransitOptions>::from(
            platformTransitOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::TransitOptions> {
    static YMKTransitOptions* from(
        const ::yandex::maps::mapkit::transport::masstransit::TransitOptions& transitOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
