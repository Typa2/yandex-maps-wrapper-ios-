#import <YandexMapsMobile/YMKSearchBusinessObjectMetadata.h>

#import <yandex/maps/mapkit/search/business_object_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Properties::Item, YMKSearchPropertiesItem, void> {
    static ::yandex::maps::mapkit::search::Properties::Item from(
        YMKSearchPropertiesItem* platformItem);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Properties::Item, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchPropertiesItem*>::value>::type> {
    static ::yandex::maps::mapkit::search::Properties::Item from(
        PlatformType platformItem)
    {
        return ToNative<::yandex::maps::mapkit::search::Properties::Item, YMKSearchPropertiesItem>::from(
            platformItem);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Properties::Item> {
    static YMKSearchPropertiesItem* from(
        const ::yandex::maps::mapkit::search::Properties::Item& item);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


