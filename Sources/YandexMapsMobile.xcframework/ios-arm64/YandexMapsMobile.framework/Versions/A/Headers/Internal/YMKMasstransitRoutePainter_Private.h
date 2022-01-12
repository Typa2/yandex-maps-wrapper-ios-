#import <YandexMapsMobile/YMKMasstransitRoutePainter.h>

#import <yandex/maps/mapkit/transport/masstransit/route_painter.h>
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::JamTypeColor, YMKMasstransitJamTypeColor, void> {
    static ::yandex::maps::mapkit::transport::masstransit::JamTypeColor from(
        YMKMasstransitJamTypeColor* platformJamTypeColor);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::JamTypeColor, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitJamTypeColor*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::JamTypeColor from(
        PlatformType platformJamTypeColor)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::JamTypeColor, YMKMasstransitJamTypeColor>::from(
            platformJamTypeColor);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::JamTypeColor> {
    static YMKMasstransitJamTypeColor* from(
        const ::yandex::maps::mapkit::transport::masstransit::JamTypeColor& jamTypeColor);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex





@interface YMKMasstransitRoutePainter ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::RoutePainter>)native;

- (::yandex::maps::mapkit::transport::masstransit::RoutePainter *)nativeRoutePainter;

@end
