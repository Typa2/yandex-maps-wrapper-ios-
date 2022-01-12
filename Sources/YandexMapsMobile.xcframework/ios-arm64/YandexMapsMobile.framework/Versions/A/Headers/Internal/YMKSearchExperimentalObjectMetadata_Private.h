#import <YandexMapsMobile/YMKSearchExperimentalObjectMetadata.h>

#import <yandex/maps/mapkit/search/experimental_object_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::ExperimentalStorage::Item, YMKSearchExperimentalStorageItem, void> {
    static ::yandex::maps::mapkit::search::ExperimentalStorage::Item from(
        YMKSearchExperimentalStorageItem* platformItem);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::ExperimentalStorage::Item, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchExperimentalStorageItem*>::value>::type> {
    static ::yandex::maps::mapkit::search::ExperimentalStorage::Item from(
        PlatformType platformItem)
    {
        return ToNative<::yandex::maps::mapkit::search::ExperimentalStorage::Item, YMKSearchExperimentalStorageItem>::from(
            platformItem);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::ExperimentalStorage::Item> {
    static YMKSearchExperimentalStorageItem* from(
        const ::yandex::maps::mapkit::search::ExperimentalStorage::Item& item);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


