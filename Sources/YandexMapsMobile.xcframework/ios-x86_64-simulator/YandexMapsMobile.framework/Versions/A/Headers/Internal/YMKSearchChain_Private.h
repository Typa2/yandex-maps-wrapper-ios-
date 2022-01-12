#import <YandexMapsMobile/YMKSearchChain.h>

#import <yandex/maps/mapkit/search/chain.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Chain, YMKSearchChain, void> {
    static ::yandex::maps::mapkit::search::Chain from(
        YMKSearchChain* platformChain);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Chain, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchChain*>::value>::type> {
    static ::yandex::maps::mapkit::search::Chain from(
        PlatformType platformChain)
    {
        return ToNative<::yandex::maps::mapkit::search::Chain, YMKSearchChain>::from(
            platformChain);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Chain> {
    static YMKSearchChain* from(
        const ::yandex::maps::mapkit::search::Chain& chain);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
