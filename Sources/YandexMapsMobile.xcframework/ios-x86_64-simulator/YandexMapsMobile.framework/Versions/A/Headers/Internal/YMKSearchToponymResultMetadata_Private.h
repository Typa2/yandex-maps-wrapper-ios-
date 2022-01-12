#import <YandexMapsMobile/YMKSearchToponymResultMetadata.h>

#import <yandex/maps/mapkit/search/toponym_result_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::ToponymResultMetadata::ResponseInfo, YMKSearchToponymResultMetadataResponseInfo, void> {
    static ::yandex::maps::mapkit::search::ToponymResultMetadata::ResponseInfo from(
        YMKSearchToponymResultMetadataResponseInfo* platformResponseInfo);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::ToponymResultMetadata::ResponseInfo, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchToponymResultMetadataResponseInfo*>::value>::type> {
    static ::yandex::maps::mapkit::search::ToponymResultMetadata::ResponseInfo from(
        PlatformType platformResponseInfo)
    {
        return ToNative<::yandex::maps::mapkit::search::ToponymResultMetadata::ResponseInfo, YMKSearchToponymResultMetadataResponseInfo>::from(
            platformResponseInfo);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::ToponymResultMetadata::ResponseInfo> {
    static YMKSearchToponymResultMetadataResponseInfo* from(
        const ::yandex::maps::mapkit::search::ToponymResultMetadata::ResponseInfo& responseInfo);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
