#import <YandexMapsMobile/YMKSearchBusinessImagesObjectMetadata.h>

#import <yandex/maps/mapkit/search/business_images_object_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::BusinessImagesObjectMetadata::Logo, YMKSearchBusinessImagesObjectMetadataLogo, void> {
    static ::yandex::maps::mapkit::search::BusinessImagesObjectMetadata::Logo from(
        YMKSearchBusinessImagesObjectMetadataLogo* platformLogo);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::BusinessImagesObjectMetadata::Logo, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchBusinessImagesObjectMetadataLogo*>::value>::type> {
    static ::yandex::maps::mapkit::search::BusinessImagesObjectMetadata::Logo from(
        PlatformType platformLogo)
    {
        return ToNative<::yandex::maps::mapkit::search::BusinessImagesObjectMetadata::Logo, YMKSearchBusinessImagesObjectMetadataLogo>::from(
            platformLogo);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::BusinessImagesObjectMetadata::Logo> {
    static YMKSearchBusinessImagesObjectMetadataLogo* from(
        const ::yandex::maps::mapkit::search::BusinessImagesObjectMetadata::Logo& logo);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
