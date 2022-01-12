#import <YandexMapsMobile/YMKSearchCommon.h>

#import <yandex/maps/mapkit/search/common.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::KeyValuePair, YMKSearchKeyValuePair, void> {
    static ::yandex::maps::mapkit::search::KeyValuePair from(
        YMKSearchKeyValuePair* platformKeyValuePair);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::KeyValuePair, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchKeyValuePair*>::value>::type> {
    static ::yandex::maps::mapkit::search::KeyValuePair from(
        PlatformType platformKeyValuePair)
    {
        return ToNative<::yandex::maps::mapkit::search::KeyValuePair, YMKSearchKeyValuePair>::from(
            platformKeyValuePair);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::KeyValuePair> {
    static YMKSearchKeyValuePair* from(
        const ::yandex::maps::mapkit::search::KeyValuePair& keyValuePair);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex




