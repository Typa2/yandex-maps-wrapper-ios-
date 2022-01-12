#import <YandexMapsMobile/YMKTaxiTaxiManager.h>

#import <yandex/maps/mapkit/transport/taxi/taxi_manager.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace taxi {
namespace ios {

RideInfoSession::OnRideInfoReceived onRideInfoReceived(
    YMKTaxiRideInfoSessionResponseHandler handler);
RideInfoSession::OnRideInfoError onRideInfoError(
    YMKTaxiRideInfoSessionResponseHandler handler);

} // namespace ios
} // namespace taxi
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKTaxiRideInfoSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::taxi::RideInfoSession>)native;

- (::yandex::maps::mapkit::transport::taxi::RideInfoSession *)nativeRideInfoSession;

@end

@interface YMKTaxiManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::taxi::TaxiManager>)native;

- (::yandex::maps::mapkit::transport::taxi::TaxiManager *)nativeTaxiManager;

@end
