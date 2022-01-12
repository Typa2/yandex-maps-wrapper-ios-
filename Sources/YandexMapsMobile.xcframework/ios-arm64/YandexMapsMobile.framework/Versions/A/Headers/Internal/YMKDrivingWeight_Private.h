#import <YandexMapsMobile/YMKDrivingWeight.h>

#import <yandex/maps/mapkit/directions/driving/weight.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::Weight, YMKDrivingWeight, void> {
    static ::yandex::maps::mapkit::directions::driving::Weight from(
        YMKDrivingWeight* platformWeight);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::Weight, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingWeight*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::Weight from(
        PlatformType platformWeight)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::Weight, YMKDrivingWeight>::from(
            platformWeight);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::Weight> {
    static YMKDrivingWeight* from(
        const ::yandex::maps::mapkit::directions::driving::Weight& weight);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
