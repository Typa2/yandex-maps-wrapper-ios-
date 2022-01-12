#import <YandexMapsMobile/YMKBalloonViewListener.h>

#import <yandex/maps/mapkit/directions/navigation_layer/balloon_view_listener.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation_layer {
namespace ios {

class BalloonViewListenerBinding : public ::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener {
public:
    explicit BalloonViewListenerBinding(
        id<YMKBalloonViewListener> platformListener);

    virtual void onBalloonViewsChanged(
        ::yandex::maps::mapkit::directions::navigation_layer::RouteView* route) override;

    virtual void onBalloonViewTap(
        ::yandex::maps::mapkit::directions::navigation_layer::BalloonView* balloon) override;

    id<YMKBalloonViewListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKBalloonViewListener> platformListener_;
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener>, id<YMKBalloonViewListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener> from(
        id<YMKBalloonViewListener> platformBalloonViewListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener> from(
        PlatformType platformBalloonViewListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener>, id<YMKBalloonViewListener>>::from(
            platformBalloonViewListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener>> {
    static id<YMKBalloonViewListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonViewListener>& nativeBalloonViewListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
