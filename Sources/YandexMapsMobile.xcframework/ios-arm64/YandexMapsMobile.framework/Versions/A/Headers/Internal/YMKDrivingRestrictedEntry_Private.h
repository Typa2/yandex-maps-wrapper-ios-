#import <YandexMapsMobile/YMKDrivingRestrictedEntry.h>

#import <yandex/maps/mapkit/directions/driving/restricted_entry.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::driving::RestrictedEntry, YMKDrivingRestrictedEntry, void> {
    static ::yandex::maps::mapkit::directions::driving::RestrictedEntry from(
        YMKDrivingRestrictedEntry* platformRestrictedEntry);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::RestrictedEntry, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingRestrictedEntry*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::RestrictedEntry from(
        PlatformType platformRestrictedEntry)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::RestrictedEntry, YMKDrivingRestrictedEntry>::from(
            platformRestrictedEntry);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::RestrictedEntry> {
    static YMKDrivingRestrictedEntry* from(
        const ::yandex::maps::mapkit::directions::driving::RestrictedEntry& restrictedEntry);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
