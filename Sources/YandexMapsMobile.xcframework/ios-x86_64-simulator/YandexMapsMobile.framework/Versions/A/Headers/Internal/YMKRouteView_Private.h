#import <YandexMapsMobile/YMKRouteView.h>

#import <yandex/maps/mapkit/directions/navigation_layer/route_view.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation_layer {
namespace ios {

class RouteViewListenerBinding : public ::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener {
public:
    explicit RouteViewListenerBinding(
        id<YMKRouteViewListener> platformListener);

    virtual void onRouteViewsChanged() override;

    virtual void onRouteViewTap(
        ::yandex::maps::mapkit::directions::navigation_layer::RouteView* route) override;

    id<YMKRouteViewListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKRouteViewListener> platformListener_;
};

} // namespace ios
} // namespace navigation_layer
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKRouteView ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteView>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteView>)nativeRouteView;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteView>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener>, id<YMKRouteViewListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener> from(
        id<YMKRouteViewListener> platformRouteViewListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener> from(
        PlatformType platformRouteViewListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener>, id<YMKRouteViewListener>>::from(
            platformRouteViewListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener>> {
    static id<YMKRouteViewListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RouteViewListener>& nativeRouteViewListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
