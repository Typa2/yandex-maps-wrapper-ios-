#import <YandexMapsMobile/YMKSearchSort.h>

#import <yandex/maps/mapkit/search/sort.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Sort, YMKSearchSort, void> {
    static ::yandex::maps::mapkit::search::Sort from(
        YMKSearchSort* platformSort);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Sort, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchSort*>::value>::type> {
    static ::yandex::maps::mapkit::search::Sort from(
        PlatformType platformSort)
    {
        return ToNative<::yandex::maps::mapkit::search::Sort, YMKSearchSort>::from(
            platformSort);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Sort> {
    static YMKSearchSort* from(
        const ::yandex::maps::mapkit::search::Sort& sort);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
