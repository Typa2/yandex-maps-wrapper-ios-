#import <YandexMapsMobile/YMKSearchAvailability.h>

#import <yandex/maps/mapkit/search/availability.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::TimeRange, YMKSearchTimeRange, void> {
    static ::yandex::maps::mapkit::search::TimeRange from(
        YMKSearchTimeRange* platformTimeRange);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::TimeRange, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchTimeRange*>::value>::type> {
    static ::yandex::maps::mapkit::search::TimeRange from(
        PlatformType platformTimeRange)
    {
        return ToNative<::yandex::maps::mapkit::search::TimeRange, YMKSearchTimeRange>::from(
            platformTimeRange);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::TimeRange> {
    static YMKSearchTimeRange* from(
        const ::yandex::maps::mapkit::search::TimeRange& timeRange);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


