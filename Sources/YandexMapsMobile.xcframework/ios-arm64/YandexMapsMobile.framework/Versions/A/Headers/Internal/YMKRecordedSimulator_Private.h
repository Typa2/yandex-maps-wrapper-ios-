#import <YandexMapsMobile/YMKRecordedSimulator.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/guidance/recorded_simulator.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace guidance {
namespace ios {

class RecordedSimulatorListenerBinding : public ::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener {
public:
    explicit RecordedSimulatorListenerBinding(
        id<YMKRecordedSimulatorListener> platformListener);

    virtual void onLocationUpdated() override;

    virtual void onRouteUpdated() override;

    virtual void onProblemMark() override;

    virtual void onFinish() override;

    id<YMKRecordedSimulatorListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKRecordedSimulatorListener> platformListener_;
};

} // namespace ios
} // namespace guidance
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKRecordedSimulator ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulator>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulator>)nativeRecordedSimulator;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener>, id<YMKRecordedSimulatorListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener> from(
        id<YMKRecordedSimulatorListener> platformRecordedSimulatorListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener> from(
        PlatformType platformRecordedSimulatorListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener>, id<YMKRecordedSimulatorListener>>::from(
            platformRecordedSimulatorListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener>> {
    static id<YMKRecordedSimulatorListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::RecordedSimulatorListener>& nativeRecordedSimulatorListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
