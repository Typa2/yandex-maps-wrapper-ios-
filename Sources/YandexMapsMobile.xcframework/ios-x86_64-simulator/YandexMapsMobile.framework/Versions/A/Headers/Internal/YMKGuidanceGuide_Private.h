#import <YandexMapsMobile/YMKGuidanceGuide.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/guidance/guide.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>





namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::guidance::ViewArea, YMKGuidanceViewArea, void> {
    static ::yandex::maps::mapkit::directions::guidance::ViewArea from(
        YMKGuidanceViewArea* platformViewArea);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::guidance::ViewArea, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKGuidanceViewArea*>::value>::type> {
    static ::yandex::maps::mapkit::directions::guidance::ViewArea from(
        PlatformType platformViewArea)
    {
        return ToNative<::yandex::maps::mapkit::directions::guidance::ViewArea, YMKGuidanceViewArea>::from(
            platformViewArea);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::guidance::ViewArea> {
    static YMKGuidanceViewArea* from(
        const ::yandex::maps::mapkit::directions::guidance::ViewArea& viewArea);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

@interface YMKGuidanceGuide ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::Guide>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::Guide>)nativeGuide;
- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::Guide>)native;

@end
