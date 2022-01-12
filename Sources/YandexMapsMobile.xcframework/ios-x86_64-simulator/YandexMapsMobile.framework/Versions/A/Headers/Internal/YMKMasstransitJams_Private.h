#import <YandexMapsMobile/YMKMasstransitJams.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/transport/masstransit/jams.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace masstransit {
namespace ios {

class JamsListenerBinding : public ::yandex::maps::mapkit::transport::masstransit::JamsListener {
public:
    explicit JamsListenerBinding(
        id<YMKMasstransitJamsListener> platformListener);

    virtual void onJamsUpdated() override;

    virtual void onJamsOutdated() override;

    id<YMKMasstransitJamsListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKMasstransitJamsListener> platformListener_;
};

} // namespace ios
} // namespace masstransit
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKMasstransitJams ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Jams>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Jams>)nativeJams;
- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Jams>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::JamsListener>, id<YMKMasstransitJamsListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::JamsListener> from(
        id<YMKMasstransitJamsListener> platformJamsListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::JamsListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::JamsListener> from(
        PlatformType platformJamsListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::JamsListener>, id<YMKMasstransitJamsListener>>::from(
            platformJamsListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::JamsListener>> {
    static id<YMKMasstransitJamsListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::JamsListener>& nativeJamsListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
