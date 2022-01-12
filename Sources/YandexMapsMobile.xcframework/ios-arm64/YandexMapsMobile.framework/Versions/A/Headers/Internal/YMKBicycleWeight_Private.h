#import <YandexMapsMobile/YMKBicycleWeight.h>

#import <yandex/maps/mapkit/transport/bicycle/weight.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::bicycle::Weight, YMKBicycleWeight, void> {
    static ::yandex::maps::mapkit::transport::bicycle::Weight from(
        YMKBicycleWeight* platformWeight);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::bicycle::Weight, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKBicycleWeight*>::value>::type> {
    static ::yandex::maps::mapkit::transport::bicycle::Weight from(
        PlatformType platformWeight)
    {
        return ToNative<::yandex::maps::mapkit::transport::bicycle::Weight, YMKBicycleWeight>::from(
            platformWeight);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::bicycle::Weight> {
    static YMKBicycleWeight* from(
        const ::yandex::maps::mapkit::transport::bicycle::Weight& weight);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
