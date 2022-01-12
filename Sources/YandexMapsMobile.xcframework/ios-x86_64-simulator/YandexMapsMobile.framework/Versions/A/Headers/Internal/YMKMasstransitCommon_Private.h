#import <YandexMapsMobile/YMKMasstransitCommon.h>

#import <yandex/maps/mapkit/transport/masstransit/common.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>





namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Line::Style, YMKMasstransitLineStyle, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Line::Style from(
        YMKMasstransitLineStyle* platformStyle);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Line::Style, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitLineStyle*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Line::Style from(
        PlatformType platformStyle)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Line::Style, YMKMasstransitLineStyle>::from(
            platformStyle);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Line::Style> {
    static YMKMasstransitLineStyle* from(
        const ::yandex::maps::mapkit::transport::masstransit::Line::Style& style);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


