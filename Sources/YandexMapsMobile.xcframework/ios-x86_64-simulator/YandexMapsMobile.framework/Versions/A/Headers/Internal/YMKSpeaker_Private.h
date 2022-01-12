#import <YandexMapsMobile/YMKSpeaker.h>

#import <yandex/maps/mapkit/directions/navigation/speaker.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation {
namespace ios {

class SpeakerBinding : public ::yandex::maps::mapkit::directions::navigation::Speaker {
public:
    explicit SpeakerBinding(
        id<YMKSpeaker> platformListener);

    virtual void reset() override;

    virtual void say(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::LocalizedPhrase>& phrase) override;

    virtual double duration(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::LocalizedPhrase>& phrase) const override;

    id<YMKSpeaker> platformReference() const { return platformListener_; }

private:
    __weak id<YMKSpeaker> platformListener_;
};

} // namespace ios
} // namespace navigation
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Speaker>, id<YMKSpeaker>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Speaker> from(
        id<YMKSpeaker> platformSpeaker);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Speaker>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Speaker> from(
        PlatformType platformSpeaker)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Speaker>, id<YMKSpeaker>>::from(
            platformSpeaker);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Speaker>> {
    static id<YMKSpeaker> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation::Speaker>& nativeSpeaker);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
