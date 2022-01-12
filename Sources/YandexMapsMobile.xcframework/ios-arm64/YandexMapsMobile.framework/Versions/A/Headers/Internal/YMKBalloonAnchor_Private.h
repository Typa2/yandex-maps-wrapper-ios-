#import <YandexMapsMobile/YMKBalloonAnchor.h>

#import <yandex/maps/mapkit/directions/navigation_layer/balloon_anchor.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor, YMKBalloonAnchor, void> {
    static ::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor from(
        YMKBalloonAnchor* platformBalloonAnchor);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKBalloonAnchor*>::value>::type> {
    static ::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor from(
        PlatformType platformBalloonAnchor)
    {
        return ToNative<::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor, YMKBalloonAnchor>::from(
            platformBalloonAnchor);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor> {
    static YMKBalloonAnchor* from(
        const ::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor& balloonAnchor);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
