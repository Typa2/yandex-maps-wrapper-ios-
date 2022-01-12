#import <YandexMapsMobile/YMKVehicleTapListener.h>

#import <yandex/maps/mapkit/transport/masstransit/vehicle_tap_listener.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace masstransit {
namespace ios {

class MasstransitVehicleTapListenerBinding : public ::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener {
public:
    explicit MasstransitVehicleTapListenerBinding(
        id<YMKMasstransitVehicleTapListener> platformListener);

    virtual bool onVehicleTap(
        ::yandex::maps::mapkit::transport::masstransit::VehicleData* vehicle) override;

    id<YMKMasstransitVehicleTapListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKMasstransitVehicleTapListener> platformListener_;
};

} // namespace ios
} // namespace masstransit
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener>, id<YMKMasstransitVehicleTapListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener> from(
        id<YMKMasstransitVehicleTapListener> platformMasstransitVehicleTapListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener> from(
        PlatformType platformMasstransitVehicleTapListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener>, id<YMKMasstransitVehicleTapListener>>::from(
            platformMasstransitVehicleTapListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener>> {
    static id<YMKMasstransitVehicleTapListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::MasstransitVehicleTapListener>& nativeMasstransitVehicleTapListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
