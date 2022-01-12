#import <YandexMapsMobile/YMKRequestPointView.h>

#import <yandex/maps/mapkit/directions/navigation_layer/request_point_view.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation_layer {
namespace ios {

class RequestPointViewListenerBinding : public ::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener {
public:
    explicit RequestPointViewListenerBinding(
        id<YMKRequestPointViewListener> platformListener);

    virtual void onRequstPointViewsChanged() override;

    virtual void onRequestPointViewTap(
        ::yandex::maps::mapkit::directions::navigation_layer::RequestPointView* requestPointView) override;

    id<YMKRequestPointViewListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKRequestPointViewListener> platformListener_;
};

} // namespace ios
} // namespace navigation_layer
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKRequestPointView ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointView>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointView>)nativeRequestPointView;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointView>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener>, id<YMKRequestPointViewListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener> from(
        id<YMKRequestPointViewListener> platformRequestPointViewListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener> from(
        PlatformType platformRequestPointViewListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener>, id<YMKRequestPointViewListener>>::from(
            platformRequestPointViewListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener>> {
    static id<YMKRequestPointViewListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RequestPointViewListener>& nativeRequestPointViewListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
