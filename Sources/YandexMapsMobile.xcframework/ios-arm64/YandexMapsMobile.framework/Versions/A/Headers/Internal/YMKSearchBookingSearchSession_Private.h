#import <YandexMapsMobile/YMKSearchBookingSearchSession.h>

#import <yandex/maps/mapkit/search/booking_search_session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

BookingSearchSession::OnBookingSearchResponse onBookingSearchResponse(
    YMKSearchBookingSearchSessionBookingSearchHandler handler);
BookingSearchSession::OnBookingSearchError onBookingSearchError(
    YMKSearchBookingSearchSessionBookingSearchHandler handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchBookingSearchSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::BookingSearchSession>)native;

- (::yandex::maps::mapkit::search::BookingSearchSession *)nativeBookingSearchSession;

@end
