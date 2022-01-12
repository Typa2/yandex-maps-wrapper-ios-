#import <YandexMapsMobile/YMKBitmapSession.h>

#import <yandex/maps/mapkit/search/bitmap_session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

BitmapSession::OnBitmapReceived onBitmapReceived(
    YMKBitmapSessionBitmapListener handler);
BitmapSession::OnBitmapError onBitmapError(
    YMKBitmapSessionBitmapListener handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKBitmapSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::BitmapSession>)native;

- (::yandex::maps::mapkit::search::BitmapSession *)nativeBitmapSession;

@end
