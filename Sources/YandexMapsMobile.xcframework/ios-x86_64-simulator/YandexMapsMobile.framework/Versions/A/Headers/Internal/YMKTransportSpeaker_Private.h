#import <YandexMapsMobile/YMKTransportSpeaker.h>

#import <yandex/maps/mapkit/transport/navigation/speaker.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace navigation {
namespace ios {

class SpeakerBinding : public ::yandex::maps::mapkit::transport::navigation::Speaker {
public:
    explicit SpeakerBinding(
        id<YMKTransportSpeaker> platformListener);

    virtual void reset() override;

    virtual void say(
        const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::LocalizedPhrase>& phrase) override;

    virtual double duration(
        const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::LocalizedPhrase>& phrase) const override;

    id<YMKTransportSpeaker> platformReference() const { return platformListener_; }

private:
    __weak id<YMKTransportSpeaker> platformListener_;
};

} // namespace ios
} // namespace navigation
} // namespace transport
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Speaker>, id<YMKTransportSpeaker>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Speaker> from(
        id<YMKTransportSpeaker> platformSpeaker);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Speaker>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Speaker> from(
        PlatformType platformSpeaker)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Speaker>, id<YMKTransportSpeaker>>::from(
            platformSpeaker);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Speaker>> {
    static id<YMKTransportSpeaker> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::navigation::Speaker>& nativeSpeaker);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
