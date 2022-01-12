#import <YandexMapsMobile/YMKSearchMasstransit2xObjectMetadata.h>

#import <yandex/maps/mapkit/search/masstransit_2x_object_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::NearbyStop::Style, YMKSearchNearbyStopStyle, void> {
    static ::yandex::maps::mapkit::search::NearbyStop::Style from(
        YMKSearchNearbyStopStyle* platformStyle);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::NearbyStop::Style, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchNearbyStopStyle*>::value>::type> {
    static ::yandex::maps::mapkit::search::NearbyStop::Style from(
        PlatformType platformStyle)
    {
        return ToNative<::yandex::maps::mapkit::search::NearbyStop::Style, YMKSearchNearbyStopStyle>::from(
            platformStyle);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::NearbyStop::Style> {
    static YMKSearchNearbyStopStyle* from(
        const ::yandex::maps::mapkit::search::NearbyStop::Style& style);
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
struct ToNative<::yandex::maps::mapkit::search::NearbyStop::Stop, YMKSearchNearbyStopStop, void> {
    static ::yandex::maps::mapkit::search::NearbyStop::Stop from(
        YMKSearchNearbyStopStop* platformStop);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::NearbyStop::Stop, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchNearbyStopStop*>::value>::type> {
    static ::yandex::maps::mapkit::search::NearbyStop::Stop from(
        PlatformType platformStop)
    {
        return ToNative<::yandex::maps::mapkit::search::NearbyStop::Stop, YMKSearchNearbyStopStop>::from(
            platformStop);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::NearbyStop::Stop> {
    static YMKSearchNearbyStopStop* from(
        const ::yandex::maps::mapkit::search::NearbyStop::Stop& stop);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


