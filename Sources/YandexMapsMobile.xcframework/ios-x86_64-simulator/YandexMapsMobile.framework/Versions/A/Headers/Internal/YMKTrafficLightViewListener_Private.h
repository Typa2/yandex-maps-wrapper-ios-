#import <YandexMapsMobile/YMKTrafficLightViewListener.h>

#import <yandex/maps/mapkit/directions/navigation_layer/traffic_light_view_listener.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation_layer {
namespace ios {

class TrafficLightViewListenerBinding : public ::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener {
public:
    explicit TrafficLightViewListenerBinding(
        id<YMKTrafficLightViewListener> platformListener);

    virtual void onTrafficLightViewsChanged(
        ::yandex::maps::mapkit::directions::navigation_layer::RouteView* route) override;

    virtual void onTrafficLightViewTap(
        ::yandex::maps::mapkit::directions::navigation_layer::TrafficLightView* trafficLightView) override;

    id<YMKTrafficLightViewListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKTrafficLightViewListener> platformListener_;
};

} // namespace ios
} // namespace navigation_layer
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener>, id<YMKTrafficLightViewListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener> from(
        id<YMKTrafficLightViewListener> platformTrafficLightViewListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener> from(
        PlatformType platformTrafficLightViewListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener>, id<YMKTrafficLightViewListener>>::from(
            platformTrafficLightViewListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener>> {
    static id<YMKTrafficLightViewListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::TrafficLightViewListener>& nativeTrafficLightViewListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
