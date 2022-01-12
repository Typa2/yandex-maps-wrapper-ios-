#import <YandexMapsMobile/YMKMasstransitSession.h>

#import <yandex/maps/mapkit/transport/masstransit/session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace masstransit {
namespace ios {

Session::OnMasstransitRoutes onMasstransitRoutes(
    YMKMasstransitSessionRouteHandler handler);
Session::OnMasstransitRoutesError onMasstransitRoutesError(
    YMKMasstransitSessionRouteHandler handler);

SummarySession::OnMasstransitSummaries onMasstransitSummaries(
    YMKMasstransitSummarySessionSummaryHandler handler);
SummarySession::OnMasstransitSummariesError onMasstransitSummariesError(
    YMKMasstransitSummarySessionSummaryHandler handler);

VehicleSession::OnVehicleResponse onVehicleResponse(
    YMKMasstransitVehicleSessionVehicleHandler handler);
VehicleSession::OnVehicleError onVehicleError(
    YMKMasstransitVehicleSessionVehicleHandler handler);

ThreadSession::OnThreadResponse onThreadResponse(
    YMKMasstransitThreadSessionThreadHandler handler);
ThreadSession::OnThreadError onThreadError(
    YMKMasstransitThreadSessionThreadHandler handler);

LineSession::OnLineResponse onLineResponse(
    YMKMasstransitLineSessionLineHandler handler);
LineSession::OnLineError onLineError(
    YMKMasstransitLineSessionLineHandler handler);

} // namespace ios
} // namespace masstransit
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKMasstransitSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::Session>)native;

- (::yandex::maps::mapkit::transport::masstransit::Session *)nativeSession;

@end

@interface YMKMasstransitSummarySession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::SummarySession>)native;

- (::yandex::maps::mapkit::transport::masstransit::SummarySession *)nativeSummarySession;

@end

@interface YMKMasstransitVehicleSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::VehicleSession>)native;

- (::yandex::maps::mapkit::transport::masstransit::VehicleSession *)nativeVehicleSession;

@end

@interface YMKMasstransitThreadSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::ThreadSession>)native;

- (::yandex::maps::mapkit::transport::masstransit::ThreadSession *)nativeThreadSession;

@end

@interface YMKMasstransitLineSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::LineSession>)native;

- (::yandex::maps::mapkit::transport::masstransit::LineSession *)nativeLineSession;

@end
