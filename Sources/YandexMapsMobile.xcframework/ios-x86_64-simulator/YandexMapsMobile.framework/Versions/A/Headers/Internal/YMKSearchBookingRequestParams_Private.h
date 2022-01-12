#import <YandexMapsMobile/YMKSearchBookingRequestParams.h>

#import <yandex/maps/mapkit/search/booking_request_params.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::BookingRequestParams, YMKSearchBookingRequestParams, void> {
    static ::yandex::maps::mapkit::search::BookingRequestParams from(
        YMKSearchBookingRequestParams* platformBookingRequestParams);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::BookingRequestParams, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchBookingRequestParams*>::value>::type> {
    static ::yandex::maps::mapkit::search::BookingRequestParams from(
        PlatformType platformBookingRequestParams)
    {
        return ToNative<::yandex::maps::mapkit::search::BookingRequestParams, YMKSearchBookingRequestParams>::from(
            platformBookingRequestParams);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::BookingRequestParams> {
    static YMKSearchBookingRequestParams* from(
        const ::yandex::maps::mapkit::search::BookingRequestParams& bookingRequestParams);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
