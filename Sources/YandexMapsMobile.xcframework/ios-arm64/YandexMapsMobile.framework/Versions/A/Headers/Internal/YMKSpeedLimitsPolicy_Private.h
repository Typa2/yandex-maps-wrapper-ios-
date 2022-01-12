#import <YandexMapsMobile/YMKSpeedLimitsPolicy.h>

#import <yandex/maps/mapkit/directions/navigation/speed_limits_policy.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

#import <memory>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::navigation::SpeedLimits, YMKNavigationSpeedLimits, void> {
    static ::yandex::maps::mapkit::directions::navigation::SpeedLimits from(
        YMKNavigationSpeedLimits* platformSpeedLimits);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::navigation::SpeedLimits, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKNavigationSpeedLimits*>::value>::type> {
    static ::yandex::maps::mapkit::directions::navigation::SpeedLimits from(
        PlatformType platformSpeedLimits)
    {
        return ToNative<::yandex::maps::mapkit::directions::navigation::SpeedLimits, YMKNavigationSpeedLimits>::from(
            platformSpeedLimits);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::navigation::SpeedLimits> {
    static YMKNavigationSpeedLimits* from(
        const ::yandex::maps::mapkit::directions::navigation::SpeedLimits& speedLimits);
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
struct ToNative<::yandex::maps::mapkit::directions::navigation::SpeedLimitsRules, YMKNavigationSpeedLimitsRules, void> {
    static ::yandex::maps::mapkit::directions::navigation::SpeedLimitsRules from(
        YMKNavigationSpeedLimitsRules* platformSpeedLimitsRules);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::navigation::SpeedLimitsRules, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKNavigationSpeedLimitsRules*>::value>::type> {
    static ::yandex::maps::mapkit::directions::navigation::SpeedLimitsRules from(
        PlatformType platformSpeedLimitsRules)
    {
        return ToNative<::yandex::maps::mapkit::directions::navigation::SpeedLimitsRules, YMKNavigationSpeedLimitsRules>::from(
            platformSpeedLimitsRules);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::navigation::SpeedLimitsRules> {
    static YMKNavigationSpeedLimitsRules* from(
        const ::yandex::maps::mapkit::directions::navigation::SpeedLimitsRules& speedLimitsRules);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

@interface YMKSpeedLimitsPolicy ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::SpeedLimitsPolicy>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation::SpeedLimitsPolicy>)nativeSpeedLimitsPolicy;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation::SpeedLimitsPolicy>)native;

@end
