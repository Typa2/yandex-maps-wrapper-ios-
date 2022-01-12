#import <YandexMapsMobile/YMKBicycleSession.h>

#import <yandex/maps/mapkit/transport/bicycle/session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace bicycle {
namespace ios {

Session::OnBicycleRoutes onBicycleRoutes(
    YMKBicycleSessionRouteListener handler);
Session::OnBicycleRoutesError onBicycleRoutesError(
    YMKBicycleSessionRouteListener handler);

SummarySession::OnBicycleSummaries onBicycleSummaries(
    YMKBicycleSummarySessionSummaryHandler handler);
SummarySession::OnBicycleSummariesError onBicycleSummariesError(
    YMKBicycleSummarySessionSummaryHandler handler);

} // namespace ios
} // namespace bicycle
} // namespace transport
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKBicycleSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::bicycle::Session>)native;

- (::yandex::maps::mapkit::transport::bicycle::Session *)nativeSession;

@end

@interface YMKBicycleSummarySession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::bicycle::SummarySession>)native;

- (::yandex::maps::mapkit::transport::bicycle::SummarySession *)nativeSummarySession;

@end
