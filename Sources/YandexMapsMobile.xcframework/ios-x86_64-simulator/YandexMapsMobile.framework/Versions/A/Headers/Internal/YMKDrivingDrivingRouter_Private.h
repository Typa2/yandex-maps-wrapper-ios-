#import <YandexMapsMobile/YMKDrivingDrivingRouter.h>

#import <yandex/maps/mapkit/directions/driving/driving_router.h>
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
struct ToNative<::yandex::maps::mapkit::directions::driving::DrivingOptions, YMKDrivingDrivingOptions, void> {
    static ::yandex::maps::mapkit::directions::driving::DrivingOptions from(
        YMKDrivingDrivingOptions* platformDrivingOptions);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::DrivingOptions, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingDrivingOptions*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::DrivingOptions from(
        PlatformType platformDrivingOptions)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::DrivingOptions, YMKDrivingDrivingOptions>::from(
            platformDrivingOptions);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::DrivingOptions> {
    static YMKDrivingDrivingOptions* from(
        const ::yandex::maps::mapkit::directions::driving::DrivingOptions& drivingOptions);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

@interface YMKDrivingRouteSerializer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::directions::driving::RouteSerializer>)native;

- (::yandex::maps::mapkit::directions::driving::RouteSerializer *)nativeRouteSerializer;

@end

@interface YMKDrivingRouter ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::directions::driving::DrivingRouter>)native;

- (::yandex::maps::mapkit::directions::driving::DrivingRouter *)nativeDrivingRouter;

@end
