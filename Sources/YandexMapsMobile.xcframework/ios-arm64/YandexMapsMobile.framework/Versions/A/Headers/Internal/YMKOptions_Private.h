#import <YandexMapsMobile/YMKOptions.h>

#import <yandex/maps/mapkit/transport/masstransit/options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::TimeOptions, YMKTimeOptions, void> {
    static ::yandex::maps::mapkit::transport::masstransit::TimeOptions from(
        YMKTimeOptions* platformTimeOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::TimeOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKTimeOptions*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::TimeOptions from(
        PlatformType platformTimeOptions)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::TimeOptions, YMKTimeOptions>::from(
            platformTimeOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::TimeOptions> {
    static YMKTimeOptions* from(
        const ::yandex::maps::mapkit::transport::masstransit::TimeOptions& timeOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
