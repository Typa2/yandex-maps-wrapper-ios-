#import <YandexMapsMobile/YMKCamera.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/navigation_layer/camera.h>
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

class CameraListenerBinding : public ::yandex::maps::mapkit::directions::navigation_layer::CameraListener {
public:
    explicit CameraListenerBinding(
        id<YMKCameraListener> platformListener);

    virtual void onCameraModeChanged() override;

    id<YMKCameraListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKCameraListener> platformListener_;
};

} // namespace ios
} // namespace navigation_layer
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKCamera ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::Camera>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::Camera>)nativeCamera;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::Camera>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::CameraListener>, id<YMKCameraListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::CameraListener> from(
        id<YMKCameraListener> platformCameraListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::CameraListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::CameraListener> from(
        PlatformType platformCameraListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::CameraListener>, id<YMKCameraListener>>::from(
            platformCameraListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::CameraListener>> {
    static id<YMKCameraListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::CameraListener>& nativeCameraListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
