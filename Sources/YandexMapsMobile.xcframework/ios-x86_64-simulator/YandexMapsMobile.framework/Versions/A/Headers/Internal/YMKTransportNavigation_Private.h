#import <YandexMapsMobile/YMKTransportNavigation.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/transport/navigation/navigation.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace navigation {
namespace ios {

class NavigationListenerBinding : public ::yandex::maps::mapkit::transport::navigation::NavigationListener {
public:
    explicit NavigationListenerBinding(
        id<YMKTransportNavigationListener> platformListener);

    virtual void onRoutingError(
        ::yandex::maps::runtime::Error* error) override;

    virtual void onRoutesChanged() override;

    virtual void onLocationChanged() override;

    virtual void onRoutePositionChanged() override;

    virtual void onCurrentRouteLost() override;

    virtual void onCurrentRouteFinished() override;

    virtual void onCurrentRouteChanged() override;

    virtual void onStreetNameUpdated() override;

    virtual void onReachedWayPoint() override;

    virtual void onUserActivityChanged() override;

    id<YMKTransportNavigationListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKTransportNavigationListener> platformListener_;
};

} // namespace ios
} // namespace navigation
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKTransportNavigation ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Navigation>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Navigation>)nativeNavigation;
- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Navigation>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::NavigationListener>, id<YMKTransportNavigationListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::NavigationListener> from(
        id<YMKTransportNavigationListener> platformNavigationListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::NavigationListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::NavigationListener> from(
        PlatformType platformNavigationListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::NavigationListener>, id<YMKTransportNavigationListener>>::from(
            platformNavigationListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::NavigationListener>> {
    static id<YMKTransportNavigationListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::NavigationListener>& nativeNavigationListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
