#import <YandexMapsMobile/YMKAssetsProvider.h>

#import <yandex/maps/mapkit/search/search_layer/assets_provider.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace search_layer {
namespace ios {

class AssetsProviderBinding : public ::yandex::maps::mapkit::search::search_layer::AssetsProvider {
public:
    explicit AssetsProviderBinding(
        id<YMKAssetsProvider> platformListener);

    virtual std::unique_ptr<::yandex::maps::runtime::image::ImageProvider> image(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>& searchResult,
        int placemarkIconType) override;

    virtual ::yandex::maps::mapkit::search::search_layer::Size size(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>& searchResult,
        int placemarkIconType) override;

    virtual ::yandex::maps::mapkit::map::IconStyle iconStyle(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>& searchResult,
        int placemarkIconType) override;

    virtual bool canProvideLabels(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>& searchResult) override;

    id<YMKAssetsProvider> platformReference() const { return platformListener_; }

private:
    __weak id<YMKAssetsProvider> platformListener_;
};

} // namespace ios
} // namespace search_layer
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
struct ToNative<::yandex::maps::mapkit::search::search_layer::Size, YMKSize, void> {
    static ::yandex::maps::mapkit::search::search_layer::Size from(
        YMKSize* platformSize);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::search_layer::Size, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSize*>::value>::type> {
    static ::yandex::maps::mapkit::search::search_layer::Size from(
        PlatformType platformSize)
    {
        return ToNative<::yandex::maps::mapkit::search::search_layer::Size, YMKSize>::from(
            platformSize);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::search_layer::Size> {
    static YMKSize* from(
        const ::yandex::maps::mapkit::search::search_layer::Size& size);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::AssetsProvider>, id<YMKAssetsProvider>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::search_layer::AssetsProvider> from(
        id<YMKAssetsProvider> platformAssetsProvider);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::AssetsProvider>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::search_layer::AssetsProvider> from(
        PlatformType platformAssetsProvider)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::AssetsProvider>, id<YMKAssetsProvider>>::from(
            platformAssetsProvider);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::AssetsProvider>> {
    static id<YMKAssetsProvider> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::AssetsProvider>& nativeAssetsProvider);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
