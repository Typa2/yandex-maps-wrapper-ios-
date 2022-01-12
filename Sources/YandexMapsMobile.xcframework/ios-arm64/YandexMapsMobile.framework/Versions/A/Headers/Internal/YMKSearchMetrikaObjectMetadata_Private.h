#import <YandexMapsMobile/YMKSearchMetrikaObjectMetadata.h>

#import <yandex/maps/mapkit/search/metrika_object_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Goals, YMKSearchGoals, void> {
    static ::yandex::maps::mapkit::search::Goals from(
        YMKSearchGoals* platformGoals);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Goals, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchGoals*>::value>::type> {
    static ::yandex::maps::mapkit::search::Goals from(
        PlatformType platformGoals)
    {
        return ToNative<::yandex::maps::mapkit::search::Goals, YMKSearchGoals>::from(
            platformGoals);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Goals> {
    static YMKSearchGoals* from(
        const ::yandex::maps::mapkit::search::Goals& goals);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


