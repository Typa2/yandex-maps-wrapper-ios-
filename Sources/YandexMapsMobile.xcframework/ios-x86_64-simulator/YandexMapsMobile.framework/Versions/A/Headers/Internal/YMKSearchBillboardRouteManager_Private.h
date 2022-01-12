#import <YandexMapsMobile/YMKSearchBillboardRouteManager.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/search/billboard_route_manager.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

class AdvertRouteListenerBinding : public ::yandex::maps::mapkit::search::AdvertRouteListener {
public:
    explicit AdvertRouteListenerBinding(
        id<YMKSearchAdvertRouteListener> platformListener);

    virtual void onRouteAdvertReceived() override;

    id<YMKSearchAdvertRouteListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKSearchAdvertRouteListener> platformListener_;
};

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchBillboardRouteManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::BillboardRouteManager>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::BillboardRouteManager>)nativeBillboardRouteManager;
- (std::shared_ptr<::yandex::maps::mapkit::search::BillboardRouteManager>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::AdvertRouteListener>, id<YMKSearchAdvertRouteListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::AdvertRouteListener> from(
        id<YMKSearchAdvertRouteListener> platformAdvertRouteListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::AdvertRouteListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::AdvertRouteListener> from(
        PlatformType platformAdvertRouteListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::AdvertRouteListener>, id<YMKSearchAdvertRouteListener>>::from(
            platformAdvertRouteListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::AdvertRouteListener>> {
    static id<YMKSearchAdvertRouteListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::AdvertRouteListener>& nativeAdvertRouteListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
