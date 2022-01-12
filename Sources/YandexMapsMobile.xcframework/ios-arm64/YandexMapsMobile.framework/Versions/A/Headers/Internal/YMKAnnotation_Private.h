#import <YandexMapsMobile/YMKAnnotation.h>

#import <yandex/maps/mapkit/directions/navigation/annotation.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_native_fwd.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/bindings/ios/to_platform_fwd.h>

#import <type_traits>



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::navigation::Annotation, id, void> {
    static ::yandex::maps::mapkit::directions::navigation::Annotation from(
        id platformAnnotation);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::navigation::Annotation, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, id>::value>::type> {
    static ::yandex::maps::mapkit::directions::navigation::Annotation from(
        PlatformType platformAnnotation)
    {
        return ToNative<::yandex::maps::mapkit::directions::navigation::Annotation, id>::from(
            platformAnnotation);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::navigation::Annotation> {
    static id from(
        const ::yandex::maps::mapkit::directions::navigation::Annotation& annotation);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
