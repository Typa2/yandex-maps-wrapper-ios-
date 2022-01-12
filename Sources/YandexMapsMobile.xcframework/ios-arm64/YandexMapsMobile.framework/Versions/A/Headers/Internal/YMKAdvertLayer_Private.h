#import <YandexMapsMobile/YMKAdvertLayer.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/search/advert_layer/advert_layer.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace advert_layer {
namespace ios {

class AdvertLayerListenerBinding : public ::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener {
public:
    explicit AdvertLayerListenerBinding(
        id<YMKAdvertLayerListener> platformListener);

    virtual void onAdvertPinShown(
        const std::shared_ptr<::yandex::maps::mapkit::GeoObject>& geoObject) override;

    virtual void onAdvertPinHidden(
        const std::shared_ptr<::yandex::maps::mapkit::GeoObject>& geoObject) override;

    virtual void onAdvertPinTapped(
        const std::shared_ptr<::yandex::maps::mapkit::GeoObject>& geoObject) override;

    id<YMKAdvertLayerListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKAdvertLayerListener> platformListener_;
};

} // namespace ios
} // namespace advert_layer
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKAdvertLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayer>)nativeAdvertLayer;
- (std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayer>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener>, id<YMKAdvertLayerListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener> from(
        id<YMKAdvertLayerListener> platformAdvertLayerListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener> from(
        PlatformType platformAdvertLayerListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener>, id<YMKAdvertLayerListener>>::from(
            platformAdvertLayerListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener>> {
    static id<YMKAdvertLayerListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AdvertLayerListener>& nativeAdvertLayerListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
