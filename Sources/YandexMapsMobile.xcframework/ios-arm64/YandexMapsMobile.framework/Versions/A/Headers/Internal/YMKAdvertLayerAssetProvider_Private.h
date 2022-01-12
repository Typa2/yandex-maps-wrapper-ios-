#import <YandexMapsMobile/YMKAdvertLayerAssetProvider.h>

#import <yandex/maps/mapkit/search/advert_layer/asset_provider.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace advert_layer {
namespace ios {

class AssetProviderBinding : public ::yandex::maps::mapkit::search::advert_layer::AssetProvider {
public:
    explicit AssetProviderBinding(
        id<YMKAdvertLayerAssetProvider> platformListener);

    virtual std::unique_ptr<::yandex::maps::runtime::image::ImageProvider> advertLabelImage(
        const std::shared_ptr<::yandex::maps::mapkit::GeoObject>& geoObject,
        bool nightMode,
        ::yandex::maps::mapkit::search::advert_layer::LabelPlacement placement) override;

    id<YMKAdvertLayerAssetProvider> platformReference() const { return platformListener_; }

private:
    __weak id<YMKAdvertLayerAssetProvider> platformListener_;
};

} // namespace ios
} // namespace advert_layer
} // namespace search
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AssetProvider>, id<YMKAdvertLayerAssetProvider>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AssetProvider> from(
        id<YMKAdvertLayerAssetProvider> platformAssetProvider);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AssetProvider>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AssetProvider> from(
        PlatformType platformAssetProvider)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AssetProvider>, id<YMKAdvertLayerAssetProvider>>::from(
            platformAssetProvider);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AssetProvider>> {
    static id<YMKAdvertLayerAssetProvider> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::advert_layer::AssetProvider>& nativeAssetProvider);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
