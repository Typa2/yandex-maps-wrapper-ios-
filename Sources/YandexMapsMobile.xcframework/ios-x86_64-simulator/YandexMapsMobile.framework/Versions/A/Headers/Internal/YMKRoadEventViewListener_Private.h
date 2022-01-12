#import <YandexMapsMobile/YMKRoadEventViewListener.h>

#import <yandex/maps/mapkit/directions/navigation_layer/road_event_view_listener.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace navigation_layer {
namespace ios {

class RoadEventViewListenerBinding : public ::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener {
public:
    explicit RoadEventViewListenerBinding(
        id<YMKRoadEventViewListener> platformListener);

    virtual void onRoadEventViewsChanged(
        ::yandex::maps::mapkit::directions::navigation_layer::RouteView* route) override;

    virtual void onRoadEventViewTap(
        ::yandex::maps::mapkit::directions::navigation_layer::RoadEventView* event) override;

    id<YMKRoadEventViewListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKRoadEventViewListener> platformListener_;
};

} // namespace ios
} // namespace navigation_layer
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener>, id<YMKRoadEventViewListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener> from(
        id<YMKRoadEventViewListener> platformRoadEventViewListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener> from(
        PlatformType platformRoadEventViewListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener>, id<YMKRoadEventViewListener>>::from(
            platformRoadEventViewListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener>> {
    static id<YMKRoadEventViewListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::directions::navigation_layer::RoadEventViewListener>& nativeRoadEventViewListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
