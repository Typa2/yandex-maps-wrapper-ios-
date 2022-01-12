#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/directions/driving/route.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace driving {
namespace ios {

class ConditionsListenerBinding : public ::yandex::maps::mapkit::directions::driving::ConditionsListener {
public:
    explicit ConditionsListenerBinding(
        id<YMKDrivingConditionsListener> platformListener);

    virtual void onConditionsUpdated() override;

    virtual void onConditionsOutdated() override;

    id<YMKDrivingConditionsListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKDrivingConditionsListener> platformListener_;
};

} // namespace ios
} // namespace driving
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
struct ToNative<::yandex::maps::mapkit::directions::driving::Summary, YMKDrivingSummary, void> {
    static ::yandex::maps::mapkit::directions::driving::Summary from(
        YMKDrivingSummary* platformSummary);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::directions::driving::Summary, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKDrivingSummary*>::value>::type> {
    static ::yandex::maps::mapkit::directions::driving::Summary from(
        PlatformType platformSummary)
    {
        return ToNative<::yandex::maps::mapkit::directions::driving::Summary, YMKDrivingSummary>::from(
            platformSummary);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::directions::driving::Summary> {
    static YMKDrivingSummary* from(
        const ::yandex::maps::mapkit::directions::driving::Summary& summary);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex













@interface YMKDrivingRoute ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::driving::Route>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::driving::Route>)nativeRoute;
- (std::shared_ptr<::yandex::maps::mapkit::directions::driving::Route>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::driving::ConditionsListener>, id<YMKDrivingConditionsListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::driving::ConditionsListener> from(
        id<YMKDrivingConditionsListener> platformConditionsListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::driving::ConditionsListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::driving::ConditionsListener> from(
        PlatformType platformConditionsListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::driving::ConditionsListener>, id<YMKDrivingConditionsListener>>::from(
            platformConditionsListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::driving::ConditionsListener>> {
    static id<YMKDrivingConditionsListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::driving::ConditionsListener>& nativeConditionsListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
