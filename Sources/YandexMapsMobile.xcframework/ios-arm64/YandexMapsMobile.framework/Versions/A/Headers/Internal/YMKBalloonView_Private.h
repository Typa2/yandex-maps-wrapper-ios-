#import <YandexMapsMobile/YMKBalloonView.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/navigation_layer/balloon_view.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation_layer {
namespace ios {

class BalloonImageProviderBinding : public ::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider {
public:
    explicit BalloonImageProviderBinding(
        id<YMKBalloonImageProvider> platformListener);

    virtual std::shared_ptr<::yandex::maps::runtime::bindings::Vector<::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry>> geometriesForBalloon(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::Balloon>& balloon) override;

    virtual std::unique_ptr<::yandex::maps::runtime::image::ImageProvider> createImage(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::Balloon>& balloon,
        const ::yandex::maps::mapkit::directions::navigation_layer::BalloonAnchor& anchor) override;

    id<YMKBalloonImageProvider> platformReference() const { return platformListener_; }

private:
    __weak id<YMKBalloonImageProvider> platformListener_;
};

} // namespace ios
} // namespace navigation_layer
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex





namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry, YMKBalloonGeometry, void> {
    static ::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry from(
        YMKBalloonGeometry* platformBalloonGeometry);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKBalloonGeometry*>::value>::type> {
    static ::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry from(
        PlatformType platformBalloonGeometry)
    {
        return ToNative<::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry, YMKBalloonGeometry>::from(
            platformBalloonGeometry);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry> {
    static YMKBalloonGeometry* from(
        const ::yandex::maps::mapkit::directions::navigation_layer::BalloonGeometry& balloonGeometry);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

@interface YMKBalloonView ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonView>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonView>)nativeBalloonView;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonView>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider>, id<YMKBalloonImageProvider>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider> from(
        id<YMKBalloonImageProvider> platformBalloonImageProvider);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider> from(
        PlatformType platformBalloonImageProvider)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider>, id<YMKBalloonImageProvider>>::from(
            platformBalloonImageProvider);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider>> {
    static id<YMKBalloonImageProvider> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::BalloonImageProvider>& nativeBalloonImageProvider);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
