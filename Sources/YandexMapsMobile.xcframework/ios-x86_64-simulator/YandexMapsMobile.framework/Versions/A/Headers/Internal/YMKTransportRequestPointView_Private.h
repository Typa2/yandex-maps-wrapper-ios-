#import <YandexMapsMobile/YMKTransportRequestPointView.h>

#import <yandex/maps/mapkit/transport/navigation/layer/request_point_view.h>
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

class RequestPointViewListenerBinding : public ::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener {
public:
    explicit RequestPointViewListenerBinding(
        id<YMKTransportRequestPointViewListener> platformListener);

    virtual void onRequestPointAdded(
        ::yandex::maps::mapkit::transport::navigation::layer::RequestPointView* requestPoint) override;

    id<YMKTransportRequestPointViewListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKTransportRequestPointViewListener> platformListener_;
};

} // namespace ios
} // namespace layer
} // namespace navigation
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKTransportRequestPointView ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointView>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointView>)nativeRequestPointView;
- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointView>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener>, id<YMKTransportRequestPointViewListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener> from(
        id<YMKTransportRequestPointViewListener> platformRequestPointViewListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener> from(
        PlatformType platformRequestPointViewListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener>, id<YMKTransportRequestPointViewListener>>::from(
            platformRequestPointViewListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener>> {
    static id<YMKTransportRequestPointViewListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::layer::RequestPointViewListener>& nativeRequestPointViewListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
