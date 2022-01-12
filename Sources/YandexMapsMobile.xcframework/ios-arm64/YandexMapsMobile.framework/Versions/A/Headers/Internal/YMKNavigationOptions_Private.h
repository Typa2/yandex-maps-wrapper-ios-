#import <YandexMapsMobile/YMKNavigationOptions.h>

#import <yandex/maps/mapkit/directions/navigation/navigation_options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::navigation::NavigationOptions, YMKNavigationOptions, void> {
    static ::yandex::maps::mapkit::directions::navigation::NavigationOptions from(
        YMKNavigationOptions* platformNavigationOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::navigation::NavigationOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKNavigationOptions*>::value>::type> {
    static ::yandex::maps::mapkit::directions::navigation::NavigationOptions from(
        PlatformType platformNavigationOptions)
    {
        return ToNative<::yandex::maps::mapkit::directions::navigation::NavigationOptions, YMKNavigationOptions>::from(
            platformNavigationOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::navigation::NavigationOptions> {
    static YMKNavigationOptions* from(
        const ::yandex::maps::mapkit::directions::navigation::NavigationOptions& navigationOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
