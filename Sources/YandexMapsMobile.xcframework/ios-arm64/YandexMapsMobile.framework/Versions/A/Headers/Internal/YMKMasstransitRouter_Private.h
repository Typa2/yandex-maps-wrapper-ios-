#import <YandexMapsMobile/YMKMasstransitRouter.h>

#import <yandex/maps/mapkit/transport/masstransit/masstransit_router.h>
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::MasstransitOptions, YMKMasstransitOptions, void> {
    static ::yandex::maps::mapkit::transport::masstransit::MasstransitOptions from(
        YMKMasstransitOptions* platformMasstransitOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::MasstransitOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitOptions*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::MasstransitOptions from(
        PlatformType platformMasstransitOptions)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::MasstransitOptions, YMKMasstransitOptions>::from(
            platformMasstransitOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::MasstransitOptions> {
    static YMKMasstransitOptions* from(
        const ::yandex::maps::mapkit::transport::masstransit::MasstransitOptions& masstransitOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

@interface YMKMasstransitRouter ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitRouter>)native;

- (::yandex::maps::mapkit::transport::masstransit::MasstransitRouter *)nativeMasstransitRouter;

@end
