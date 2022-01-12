#import <YandexMapsMobile/YMKNavigation.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/navigation/navigation.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation {
namespace ios {

class NavigationListenerBinding : public ::yandex::maps::mapkit::directions::navigation::NavigationListener {
public:
    explicit NavigationListenerBinding(
        id<YMKNavigationListener> platformListener);

    virtual void onRoutesChanged() override;

    virtual void onRoutesError(
        ::yandex::maps::runtime::Error* error) override;

    virtual void onRoutesRequested() override;

    virtual void onLocationChanged() override;

    virtual void onRouteLost() override;

    virtual void onFastestRouteChanged() override;

    virtual void onStandingStatusChanged() override;

    virtual void onRoadNameChanged() override;

    virtual void onRouteFinished() override;

    virtual void onRouteChanged() override;

    virtual void onReturnedToRoute() override;

    id<YMKNavigationListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKNavigationListener> platformListener_;
};

} // namespace ios
} // namespace navigation
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKNavigation ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Navigation>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Navigation>)nativeNavigation;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Navigation>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::NavigationListener>, id<YMKNavigationListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation::NavigationListener> from(
        id<YMKNavigationListener> platformNavigationListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::NavigationListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation::NavigationListener> from(
        PlatformType platformNavigationListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::NavigationListener>, id<YMKNavigationListener>>::from(
            platformNavigationListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::NavigationListener>> {
    static id<YMKNavigationListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::NavigationListener>& nativeNavigationListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
