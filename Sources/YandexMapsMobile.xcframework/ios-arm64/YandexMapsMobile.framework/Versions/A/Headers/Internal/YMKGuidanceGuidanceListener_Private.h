#import <YandexMapsMobile/YMKGuidanceGuidanceListener.h>

#import <yandex/maps/mapkit/directions/guidance/guidance_listener.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace guidance {
namespace ios {

class GuidanceListenerBinding : public ::yandex::maps::mapkit::directions::guidance::GuidanceListener {
public:
    explicit GuidanceListenerBinding(
        id<YMKGuidanceGuidanceHandler> platformListener);

    virtual void onLocationUpdated() override;

    virtual void onRoutePositionUpdated() override;

    virtual void onAnnotationsUpdated() override;

    virtual void onRoadNameUpdated() override;

    virtual void onFinishedRoute() override;

    virtual void onLostRoute() override;

    virtual void onReturnedToRoute() override;

    virtual void onRouteUpdated() override;

    virtual void onAlternativesUpdated() override;

    virtual void onAlternativesTimeDifferenceUpdated() override;

    virtual void onSpeedLimitUpdated() override;

    virtual void onSpeedLimitExceededUpdated() override;

    virtual void onSpeedLimitExceeded() override;

    virtual void onLaneSignUpdated() override;

    virtual void onUpcomingEventsUpdated() override;

    virtual void onFasterAlternativeUpdated() override;

    virtual void onParkingRoutesUpdated() override;

    virtual void onLastViaPositionChanged() override;

    virtual void onManeuverAnnotated() override;

    virtual void onFasterAlternativeAnnotated() override;

    virtual void onStandingStatusUpdated() override;

    virtual void onFreeDriveRouteUpdated() override;

    virtual void onReachedWayPoint() override;

    virtual void onDirectionSignUpdated() override;

    id<YMKGuidanceGuidanceHandler> platformReference() const { return platformListener_; }

private:
    __weak id<YMKGuidanceGuidanceHandler> platformListener_;
};

} // namespace ios
} // namespace guidance
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::GuidanceListener>, id<YMKGuidanceGuidanceHandler>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::guidance::GuidanceListener> from(
        id<YMKGuidanceGuidanceHandler> platformGuidanceListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::GuidanceListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::guidance::GuidanceListener> from(
        PlatformType platformGuidanceListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::GuidanceListener>, id<YMKGuidanceGuidanceHandler>>::from(
            platformGuidanceListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::guidance::GuidanceListener>> {
    static id<YMKGuidanceGuidanceHandler> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::GuidanceListener>& nativeGuidanceListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
