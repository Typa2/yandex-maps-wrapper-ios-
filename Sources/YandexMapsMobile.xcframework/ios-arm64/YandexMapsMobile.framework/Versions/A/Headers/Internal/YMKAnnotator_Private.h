#import <YandexMapsMobile/YMKAnnotator.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/navigation/annotator.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation {
namespace ios {

class AnnotatorListenerBinding : public ::yandex::maps::mapkit::directions::navigation::AnnotatorListener {
public:
    explicit AnnotatorListenerBinding(
        id<YMKAnnotatorListener> platformListener);

    virtual void annotationsUpdated() override;

    virtual void maneuverAnnotated() override;

    virtual void fasterAlternativeAnnotated() override;

    virtual void speedLimitUpdated() override;

    virtual void speedLimitExceededUpdated() override;

    virtual void speedLimitExceeded() override;

    id<YMKAnnotatorListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKAnnotatorListener> platformListener_;
};

} // namespace ios
} // namespace navigation
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKAnnotator ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Annotator>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Annotator>)nativeAnnotator;
- (std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Annotator>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::AnnotatorListener>, id<YMKAnnotatorListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation::AnnotatorListener> from(
        id<YMKAnnotatorListener> platformAnnotatorListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::AnnotatorListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation::AnnotatorListener> from(
        PlatformType platformAnnotatorListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::AnnotatorListener>, id<YMKAnnotatorListener>>::from(
            platformAnnotatorListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::AnnotatorListener>> {
    static id<YMKAnnotatorListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::AnnotatorListener>& nativeAnnotatorListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
