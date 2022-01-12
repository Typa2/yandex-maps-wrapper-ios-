#import <YandexMapsMobile/YMKTransportNavigationLayerOptions.h>

#import <yandex/maps/mapkit/transport/navigation/layer/navigation_layer_options.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::navigation::layer::NavigationLayerOptions, YMKTransportNavigationLayerOptions, void> {
    static ::yandex::maps::mapkit::transport::navigation::layer::NavigationLayerOptions from(
        YMKTransportNavigationLayerOptions* platformNavigationLayerOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::navigation::layer::NavigationLayerOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKTransportNavigationLayerOptions*>::value>::type> {
    static ::yandex::maps::mapkit::transport::navigation::layer::NavigationLayerOptions from(
        PlatformType platformNavigationLayerOptions)
    {
        return ToNative<::yandex::maps::mapkit::transport::navigation::layer::NavigationLayerOptions, YMKTransportNavigationLayerOptions>::from(
            platformNavigationLayerOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::navigation::layer::NavigationLayerOptions> {
    static YMKTransportNavigationLayerOptions* from(
        const ::yandex::maps::mapkit::transport::navigation::layer::NavigationLayerOptions& navigationLayerOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
