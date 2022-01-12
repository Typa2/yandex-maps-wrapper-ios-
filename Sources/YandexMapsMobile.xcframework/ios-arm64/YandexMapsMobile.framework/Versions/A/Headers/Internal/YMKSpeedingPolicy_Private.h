#import <YandexMapsMobile/YMKSpeedingPolicy.h>

#import <yandex/maps/mapkit/directions/guidance/speeding_policy.h>
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
struct ToNative<::yandex::maps::mapkit::directions::guidance::SpeedLimits, YMKSpeedLimits, void> {
    static ::yandex::maps::mapkit::directions::guidance::SpeedLimits from(
        YMKSpeedLimits* platformSpeedLimits);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::guidance::SpeedLimits, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSpeedLimits*>::value>::type> {
    static ::yandex::maps::mapkit::directions::guidance::SpeedLimits from(
        PlatformType platformSpeedLimits)
    {
        return ToNative<::yandex::maps::mapkit::directions::guidance::SpeedLimits, YMKSpeedLimits>::from(
            platformSpeedLimits);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::guidance::SpeedLimits> {
    static YMKSpeedLimits* from(
        const ::yandex::maps::mapkit::directions::guidance::SpeedLimits& speedLimits);
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
struct ToNative<::yandex::maps::mapkit::directions::guidance::SpeedLimitsRules, YMKSpeedLimitsRules, void> {
    static ::yandex::maps::mapkit::directions::guidance::SpeedLimitsRules from(
        YMKSpeedLimitsRules* platformSpeedLimitsRules);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::guidance::SpeedLimitsRules, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSpeedLimitsRules*>::value>::type> {
    static ::yandex::maps::mapkit::directions::guidance::SpeedLimitsRules from(
        PlatformType platformSpeedLimitsRules)
    {
        return ToNative<::yandex::maps::mapkit::directions::guidance::SpeedLimitsRules, YMKSpeedLimitsRules>::from(
            platformSpeedLimitsRules);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::guidance::SpeedLimitsRules> {
    static YMKSpeedLimitsRules* from(
        const ::yandex::maps::mapkit::directions::guidance::SpeedLimitsRules& speedLimitsRules);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

@interface YMKSpeedingPolicy ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::SpeedingPolicy>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::SpeedingPolicy>)nativeSpeedingPolicy;
- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::SpeedingPolicy>)native;

@end


