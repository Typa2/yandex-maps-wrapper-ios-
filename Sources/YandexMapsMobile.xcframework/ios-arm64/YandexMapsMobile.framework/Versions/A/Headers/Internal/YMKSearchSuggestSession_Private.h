#import <YandexMapsMobile/YMKSearchSuggestSession.h>

#import <yandex/maps/mapkit/search/suggest_session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

SuggestSession::OnResponse onResponse(
    YMKSearchSuggestSessionResponseHandler handler);
SuggestSession::OnError onError(
    YMKSearchSuggestSessionResponseHandler handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchSuggestSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::SuggestSession>)native;

- (::yandex::maps::mapkit::search::SuggestSession *)nativeSuggestSession;

@end
