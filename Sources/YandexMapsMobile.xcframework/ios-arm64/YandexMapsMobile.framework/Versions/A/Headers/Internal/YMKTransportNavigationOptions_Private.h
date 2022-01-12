#import <YandexMapsMobile/YMKTransportNavigationOptions.h>

#import <yandex/maps/mapkit/transport/navigation/navigation_options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::navigation::NavigationOptions, YMKTransportNavigationOptions, void> {
    static ::yandex::maps::mapkit::transport::navigation::NavigationOptions from(
        YMKTransportNavigationOptions* platformNavigationOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::navigation::NavigationOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKTransportNavigationOptions*>::value>::type> {
    static ::yandex::maps::mapkit::transport::navigation::NavigationOptions from(
        PlatformType platformNavigationOptions)
    {
        return ToNative<::yandex::maps::mapkit::transport::navigation::NavigationOptions, YMKTransportNavigationOptions>::from(
            platformNavigationOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::navigation::NavigationOptions> {
    static YMKTransportNavigationOptions* from(
        const ::yandex::maps::mapkit::transport::navigation::NavigationOptions& navigationOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
