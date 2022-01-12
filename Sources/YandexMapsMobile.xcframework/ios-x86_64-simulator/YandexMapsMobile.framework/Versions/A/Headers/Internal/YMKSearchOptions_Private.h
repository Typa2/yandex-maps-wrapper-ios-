#import <YandexMapsMobile/YMKSearchOptions.h>

#import <yandex/maps/mapkit/search/search_options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::SearchOptions, YMKSearchOptions, void> {
    static ::yandex::maps::mapkit::search::SearchOptions from(
        YMKSearchOptions* platformSearchOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::SearchOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchOptions*>::value>::type> {
    static ::yandex::maps::mapkit::search::SearchOptions from(
        PlatformType platformSearchOptions)
    {
        return ToNative<::yandex::maps::mapkit::search::SearchOptions, YMKSearchOptions>::from(
            platformSearchOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::SearchOptions> {
    static YMKSearchOptions* from(
        const ::yandex::maps::mapkit::search::SearchOptions& searchOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
