#import <YandexMapsMobile/YMKSearchAdvertMenuManager.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/search/advert_menu_manager.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

class AdvertMenuListenerBinding : public ::yandex::maps::mapkit::search::AdvertMenuListener {
public:
    explicit AdvertMenuListenerBinding(
        id<YMKSearchAdvertMenuListener> platformListener);

    virtual void onMenuAdvertReceived() override;

    id<YMKSearchAdvertMenuListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKSearchAdvertMenuListener> platformListener_;
};

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex





@interface YMKSearchAdvertMenuManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuManager>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuManager>)nativeAdvertMenuManager;
- (std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuManager>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuListener>, id<YMKSearchAdvertMenuListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuListener> from(
        id<YMKSearchAdvertMenuListener> platformAdvertMenuListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuListener> from(
        PlatformType platformAdvertMenuListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuListener>, id<YMKSearchAdvertMenuListener>>::from(
            platformAdvertMenuListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuListener>> {
    static id<YMKSearchAdvertMenuListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::AdvertMenuListener>& nativeAdvertMenuListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
