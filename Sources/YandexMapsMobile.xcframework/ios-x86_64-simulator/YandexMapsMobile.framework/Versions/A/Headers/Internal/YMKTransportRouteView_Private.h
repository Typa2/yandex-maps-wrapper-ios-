#import <YandexMapsMobile/YMKTransportRouteView.h>

#import <yandex/maps/mapkit/transport/navigation/layer/route_view.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace navigation {
namespace layer {
namespace ios {

class RouteViewListenerBinding : public ::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener {
public:
    explicit RouteViewListenerBinding(
        id<YMKTransportRouteViewListener> platformListener);

    virtual void onRouteAdded(
        ::yandex::maps::mapkit::transport::navigation::layer::RouteView* route) override;

    virtual void onRouteTap(
        ::yandex::maps::mapkit::transport::navigation::layer::RouteView* route) override;

    id<YMKTransportRouteViewListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKTransportRouteViewListener> platformListener_;
};

} // namespace ios
} // namespace layer
} // namespace navigation
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKTransportRouteView ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteView>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteView>)nativeRouteView;
- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteView>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener>, id<YMKTransportRouteViewListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener> from(
        id<YMKTransportRouteViewListener> platformRouteViewListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener> from(
        PlatformType platformRouteViewListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener>, id<YMKTransportRouteViewListener>>::from(
            platformRouteViewListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener>> {
    static id<YMKTransportRouteViewListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RouteViewListener>& nativeRouteViewListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
