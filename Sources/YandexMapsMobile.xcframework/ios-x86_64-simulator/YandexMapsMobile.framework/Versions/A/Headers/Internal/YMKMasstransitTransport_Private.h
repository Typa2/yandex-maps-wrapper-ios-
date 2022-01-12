#import <YandexMapsMobile/YMKMasstransitTransport.h>

#import <yandex/maps/mapkit/transport/masstransit/transport.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert, YMKMasstransitAlert, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert from(
        YMKMasstransitAlert* platformAlert);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitAlert*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert from(
        PlatformType platformAlert)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Alert, YMKMasstransitAlert>::from(
            platformAlert);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Alert> {
    static YMKMasstransitAlert* from(
        const ::yandex::maps::mapkit::transport::masstransit::Alert& alert);
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::Closed, YMKMasstransitAlertClosed, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert::Closed from(
        YMKMasstransitAlertClosed* platformClosed);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::Closed, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitAlertClosed*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert::Closed from(
        PlatformType platformClosed)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::Closed, YMKMasstransitAlertClosed>::from(
            platformClosed);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Alert::Closed> {
    static YMKMasstransitAlertClosed* from(
        const ::yandex::maps::mapkit::transport::masstransit::Alert::Closed& closed);
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::ClosedUntil, YMKMasstransitAlertClosedUntil, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert::ClosedUntil from(
        YMKMasstransitAlertClosedUntil* platformClosedUntil);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::ClosedUntil, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitAlertClosedUntil*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert::ClosedUntil from(
        PlatformType platformClosedUntil)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::ClosedUntil, YMKMasstransitAlertClosedUntil>::from(
            platformClosedUntil);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Alert::ClosedUntil> {
    static YMKMasstransitAlertClosedUntil* from(
        const ::yandex::maps::mapkit::transport::masstransit::Alert::ClosedUntil& closedUntil);
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::LastTrip, YMKMasstransitAlertLastTrip, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert::LastTrip from(
        YMKMasstransitAlertLastTrip* platformLastTrip);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::LastTrip, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitAlertLastTrip*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Alert::LastTrip from(
        PlatformType platformLastTrip)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Alert::LastTrip, YMKMasstransitAlertLastTrip>::from(
            platformLastTrip);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Alert::LastTrip> {
    static YMKMasstransitAlertLastTrip* from(
        const ::yandex::maps::mapkit::transport::masstransit::Alert::LastTrip& lastTrip);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex




