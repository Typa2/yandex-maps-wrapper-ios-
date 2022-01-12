#import <YandexMapsMobile/YMKGuidanceClassifiedLocation.h>

#import <yandex/maps/mapkit/directions/guidance/classified_location.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::guidance::ClassifiedLocation, YMKGuidanceClassifiedLocation, void> {
    static ::yandex::maps::mapkit::directions::guidance::ClassifiedLocation from(
        YMKGuidanceClassifiedLocation* platformClassifiedLocation);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::guidance::ClassifiedLocation, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKGuidanceClassifiedLocation*>::value>::type> {
    static ::yandex::maps::mapkit::directions::guidance::ClassifiedLocation from(
        PlatformType platformClassifiedLocation)
    {
        return ToNative<::yandex::maps::mapkit::directions::guidance::ClassifiedLocation, YMKGuidanceClassifiedLocation>::from(
            platformClassifiedLocation);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::guidance::ClassifiedLocation> {
    static YMKGuidanceClassifiedLocation* from(
        const ::yandex::maps::mapkit::directions::guidance::ClassifiedLocation& classifiedLocation);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
