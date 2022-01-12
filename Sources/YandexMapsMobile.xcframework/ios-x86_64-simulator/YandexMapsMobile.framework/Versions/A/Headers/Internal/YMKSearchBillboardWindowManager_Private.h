#import <YandexMapsMobile/YMKSearchBillboardWindowManager.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/search/billboard_window_manager.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

class BillboardListenerBinding : public ::yandex::maps::mapkit::search::BillboardListener {
public:
    explicit BillboardListenerBinding(
        id<YMKSearchBillboardListener> platformListener);

    virtual void onBillboardReceived() override;

    id<YMKSearchBillboardListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKSearchBillboardListener> platformListener_;
};

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchBillboardWindowManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::BillboardWindowManager>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::BillboardWindowManager>)nativeBillboardWindowManager;
- (std::shared_ptr<::yandex::maps::mapkit::search::BillboardWindowManager>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::BillboardListener>, id<YMKSearchBillboardListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::BillboardListener> from(
        id<YMKSearchBillboardListener> platformBillboardListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::BillboardListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::BillboardListener> from(
        PlatformType platformBillboardListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::BillboardListener>, id<YMKSearchBillboardListener>>::from(
            platformBillboardListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::BillboardListener>> {
    static id<YMKSearchBillboardListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::BillboardListener>& nativeBillboardListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
