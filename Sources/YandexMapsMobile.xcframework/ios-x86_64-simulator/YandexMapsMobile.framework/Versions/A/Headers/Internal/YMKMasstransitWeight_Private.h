#import <YandexMapsMobile/YMKMasstransitWeight.h>

#import <yandex/maps/mapkit/transport/masstransit/weight.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Weight, YMKMasstransitWeight, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Weight from(
        YMKMasstransitWeight* platformWeight);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Weight, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitWeight*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Weight from(
        PlatformType platformWeight)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Weight, YMKMasstransitWeight>::from(
            platformWeight);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Weight> {
    static YMKMasstransitWeight* from(
        const ::yandex::maps::mapkit::transport::masstransit::Weight& weight);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
