#import <YandexMapsMobile/YMKSearchGoodsRegisterSession.h>

#import <yandex/maps/mapkit/search/goods_register_session.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace ios {

GoodsRegisterSession::OnGoodsRegisterResponse onGoodsRegisterResponse(
    YMKSearchGoodsRegisterSessionGoodsRegisterHandler handler);
GoodsRegisterSession::OnGoodsRegisterError onGoodsRegisterError(
    YMKSearchGoodsRegisterSessionGoodsRegisterHandler handler);

} // namespace ios
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchGoodsRegisterSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::search::GoodsRegisterSession>)native;

- (::yandex::maps::mapkit::search::GoodsRegisterSession *)nativeGoodsRegisterSession;

@end
