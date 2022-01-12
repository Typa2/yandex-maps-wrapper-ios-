#import <YandexMapsMobile/YMKTransportAnnotator.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/transport/navigation/annotator.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace navigation {
namespace ios {

class AnnotatorListenerBinding : public ::yandex::maps::mapkit::transport::navigation::AnnotatorListener {
public:
    explicit AnnotatorListenerBinding(
        id<YMKTransportAnnotatorListener> platformListener);

    virtual void maneuverAnnotated() override;

    id<YMKTransportAnnotatorListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKTransportAnnotatorListener> platformListener_;
};

} // namespace ios
} // namespace navigation
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKTransportAnnotator ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Annotator>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Annotator>)nativeAnnotator;
- (std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Annotator>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::AnnotatorListener>, id<YMKTransportAnnotatorListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::AnnotatorListener> from(
        id<YMKTransportAnnotatorListener> platformAnnotatorListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::AnnotatorListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::AnnotatorListener> from(
        PlatformType platformAnnotatorListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::AnnotatorListener>, id<YMKTransportAnnotatorListener>>::from(
            platformAnnotatorListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::AnnotatorListener>> {
    static id<YMKTransportAnnotatorListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::AnnotatorListener>& nativeAnnotatorListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
