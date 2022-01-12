#import <YandexMapsMobile/YMKSuggestOptions.h>

#import <yandex/maps/mapkit/search/suggest_options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::SuggestOptions, YMKSuggestOptions, void> {
    static ::yandex::maps::mapkit::search::SuggestOptions from(
        YMKSuggestOptions* platformSuggestOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::SuggestOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSuggestOptions*>::value>::type> {
    static ::yandex::maps::mapkit::search::SuggestOptions from(
        PlatformType platformSuggestOptions)
    {
        return ToNative<::yandex::maps::mapkit::search::SuggestOptions, YMKSuggestOptions>::from(
            platformSuggestOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::SuggestOptions> {
    static YMKSuggestOptions* from(
        const ::yandex::maps::mapkit::search::SuggestOptions& suggestOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
