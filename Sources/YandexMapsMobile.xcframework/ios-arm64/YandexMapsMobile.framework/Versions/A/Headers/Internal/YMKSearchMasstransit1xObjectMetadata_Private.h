#import <YandexMapsMobile/YMKSearchMasstransit1xObjectMetadata.h>

#import <yandex/maps/mapkit/search/masstransit_1x_object_metadata.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Line, YMKSearchLine, void> {
    static ::yandex::maps::mapkit::search::Line from(
        YMKSearchLine* platformLine);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Line, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchLine*>::value>::type> {
    static ::yandex::maps::mapkit::search::Line from(
        PlatformType platformLine)
    {
        return ToNative<::yandex::maps::mapkit::search::Line, YMKSearchLine>::from(
            platformLine);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Line> {
    static YMKSearchLine* from(
        const ::yandex::maps::mapkit::search::Line& line);
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
struct ToNative<::yandex::maps::mapkit::search::Stop, YMKSearchStop, void> {
    static ::yandex::maps::mapkit::search::Stop from(
        YMKSearchStop* platformStop);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Stop, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchStop*>::value>::type> {
    static ::yandex::maps::mapkit::search::Stop from(
        PlatformType platformStop)
    {
        return ToNative<::yandex::maps::mapkit::search::Stop, YMKSearchStop>::from(
            platformStop);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Stop> {
    static YMKSearchStop* from(
        const ::yandex::maps::mapkit::search::Stop& stop);
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
struct ToNative<::yandex::maps::mapkit::search::Stop::Style, YMKSearchStopStyle, void> {
    static ::yandex::maps::mapkit::search::Stop::Style from(
        YMKSearchStopStyle* platformStyle);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Stop::Style, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchStopStyle*>::value>::type> {
    static ::yandex::maps::mapkit::search::Stop::Style from(
        PlatformType platformStyle)
    {
        return ToNative<::yandex::maps::mapkit::search::Stop::Style, YMKSearchStopStyle>::from(
            platformStyle);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Stop::Style> {
    static YMKSearchStopStyle* from(
        const ::yandex::maps::mapkit::search::Stop::Style& style);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


