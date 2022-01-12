#import <YandexMapsMobile/YMKMasstransitSchedule.h>

#import <yandex/maps/mapkit/transport/masstransit/schedule.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Estimation, YMKMasstransitEstimation, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Estimation from(
        YMKMasstransitEstimation* platformEstimation);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Estimation, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitEstimation*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Estimation from(
        PlatformType platformEstimation)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Estimation, YMKMasstransitEstimation>::from(
            platformEstimation);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Estimation> {
    static YMKMasstransitEstimation* from(
        const ::yandex::maps::mapkit::transport::masstransit::Estimation& estimation);
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Scheduled, YMKMasstransitScheduled, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Scheduled from(
        YMKMasstransitScheduled* platformScheduled);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Scheduled, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitScheduled*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Scheduled from(
        PlatformType platformScheduled)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Scheduled, YMKMasstransitScheduled>::from(
            platformScheduled);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Scheduled> {
    static YMKMasstransitScheduled* from(
        const ::yandex::maps::mapkit::transport::masstransit::Scheduled& scheduled);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex








