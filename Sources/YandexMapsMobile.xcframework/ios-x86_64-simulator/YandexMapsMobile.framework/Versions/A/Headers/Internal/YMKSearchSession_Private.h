#import <YandexMapsMobile/YMKSearchSession.h>

#import <yandex/maps/mapkit/search/session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

Session::OnSearchResponse onSearchResponse(
    YMKSearchSessionResponseHandler handler);
Session::OnSearchError onSearchError(
    YMKSearchSessionResponseHandler handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::Session>)native;

- (::yandex::maps::mapkit::search::Session *)nativeSession;

@end
