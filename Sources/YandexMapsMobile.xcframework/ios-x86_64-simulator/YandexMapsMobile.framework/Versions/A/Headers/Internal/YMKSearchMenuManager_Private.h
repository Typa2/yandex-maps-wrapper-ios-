#import <YandexMapsMobile/YMKSearchMenuManager.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/search/menu_manager.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

class MenuListenerBinding : public ::yandex::maps::mapkit::search::MenuListener {
public:
    explicit MenuListenerBinding(
        id<YMKSearchMenuListener> platformListener);

    virtual void onMenuReceived() override;

    id<YMKSearchMenuListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKSearchMenuListener> platformListener_;
};

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex





@interface YMKSearchMenuManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::MenuManager>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::MenuManager>)nativeMenuManager;
- (std::shared_ptr<::yandex::maps::mapkit::search::MenuManager>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::MenuListener>, id<YMKSearchMenuListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::MenuListener> from(
        id<YMKSearchMenuListener> platformMenuListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::MenuListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::MenuListener> from(
        PlatformType platformMenuListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::MenuListener>, id<YMKSearchMenuListener>>::from(
            platformMenuListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::MenuListener>> {
    static id<YMKSearchMenuListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::MenuListener>& nativeMenuListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
