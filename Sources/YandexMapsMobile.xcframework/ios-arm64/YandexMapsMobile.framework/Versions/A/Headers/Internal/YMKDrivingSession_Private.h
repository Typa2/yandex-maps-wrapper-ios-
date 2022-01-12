#import <YandexMapsMobile/YMKDrivingSession.h>

#import <yandex/maps/mapkit/directions/driving/session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace directions {
namespace driving {
namespace ios {

Session::OnDrivingRoutes onDrivingRoutes(
    YMKDrivingSessionRouteHandler handler);
Session::OnDrivingRoutesError onDrivingRoutesError(
    YMKDrivingSessionRouteHandler handler);

SummarySession::OnDrivingSummaries onDrivingSummaries(
    YMKDrivingSummarySessionSummaryHandler handler);
SummarySession::OnDrivingSummariesError onDrivingSummariesError(
    YMKDrivingSummarySessionSummaryHandler handler);

} // namespace ios
} // namespace driving
} // namespace directions
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKDrivingSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::directions::driving::Session>)native;

- (::yandex::maps::mapkit::directions::driving::Session *)nativeSession;

@end

@interface YMKDrivingSummarySession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::directions::driving::SummarySession>)native;

- (::yandex::maps::mapkit::directions::driving::SummarySession *)nativeSummarySession;

@end
