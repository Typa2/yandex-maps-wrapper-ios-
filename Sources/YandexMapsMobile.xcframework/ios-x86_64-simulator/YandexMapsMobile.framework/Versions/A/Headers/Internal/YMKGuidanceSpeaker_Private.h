#import <YandexMapsMobile/YMKGuidanceSpeaker.h>

#import <yandex/maps/mapkit/directions/guidance/speaker.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace guidance {
namespace ios {

class LocalizedSpeakerBinding : public ::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker {
public:
    explicit LocalizedSpeakerBinding(
        id<YMKGuidanceLocalizedSpeaker> platformListener);

    virtual void reset() override;

    virtual void say(
        std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedPhrase>& phrase) override;

    virtual double duration(
        std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedPhrase>& phrase) const override;

    id<YMKGuidanceLocalizedSpeaker> platformReference() const { return platformListener_; }

private:
    __weak id<YMKGuidanceLocalizedSpeaker> platformListener_;
};

} // namespace ios
} // namespace guidance
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKGuidanceLocalizedPhrase ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedPhrase>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedPhrase>)nativeLocalizedPhrase;
- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedPhrase>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker>, id<YMKGuidanceLocalizedSpeaker>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker> from(
        id<YMKGuidanceLocalizedSpeaker> platformLocalizedSpeaker);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker> from(
        PlatformType platformLocalizedSpeaker)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker>, id<YMKGuidanceLocalizedSpeaker>>::from(
            platformLocalizedSpeaker);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker>> {
    static id<YMKGuidanceLocalizedSpeaker> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::LocalizedSpeaker>& nativeLocalizedSpeaker);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
