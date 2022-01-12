#import <YandexMapsMobile/YMKBicycleRoute.h>

#import <yandex/maps/mapkit/transport/bicycle/route.h>
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
struct ToNative<::yandex::maps::mapkit::transport::bicycle::ConstructionSegment, YMKBicycleConstructionSegment, void> {
    static ::yandex::maps::mapkit::transport::bicycle::ConstructionSegment from(
        YMKBicycleConstructionSegment* platformConstructionSegment);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::bicycle::ConstructionSegment, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKBicycleConstructionSegment*>::value>::type> {
    static ::yandex::maps::mapkit::transport::bicycle::ConstructionSegment from(
        PlatformType platformConstructionSegment)
    {
        return ToNative<::yandex::maps::mapkit::transport::bicycle::ConstructionSegment, YMKBicycleConstructionSegment>::from(
            platformConstructionSegment);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::bicycle::ConstructionSegment> {
    static YMKBicycleConstructionSegment* from(
        const ::yandex::maps::mapkit::transport::bicycle::ConstructionSegment& constructionSegment);
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
struct ToNative<::yandex::maps::mapkit::transport::bicycle::TrafficTypeSegment, YMKBicycleTrafficTypeSegment, void> {
    static ::yandex::maps::mapkit::transport::bicycle::TrafficTypeSegment from(
        YMKBicycleTrafficTypeSegment* platformTrafficTypeSegment);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::bicycle::TrafficTypeSegment, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKBicycleTrafficTypeSegment*>::value>::type> {
    static ::yandex::maps::mapkit::transport::bicycle::TrafficTypeSegment from(
        PlatformType platformTrafficTypeSegment)
    {
        return ToNative<::yandex::maps::mapkit::transport::bicycle::TrafficTypeSegment, YMKBicycleTrafficTypeSegment>::from(
            platformTrafficTypeSegment);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::bicycle::TrafficTypeSegment> {
    static YMKBicycleTrafficTypeSegment* from(
        const ::yandex::maps::mapkit::transport::bicycle::TrafficTypeSegment& trafficTypeSegment);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

@interface YMKBicycleRoute ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::bicycle::Route>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::bicycle::Route>)nativeRoute;
- (std::shared_ptr<::yandex::maps::mapkit::transport::bicycle::Route>)native;

@end
