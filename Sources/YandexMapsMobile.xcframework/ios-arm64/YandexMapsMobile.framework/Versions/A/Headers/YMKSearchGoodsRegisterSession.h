#import <Foundation/Foundation.h>

@class YMKSearchGoodsRegister;

/**
 * :nodoc:
 */
typedef void(^YMKSearchGoodsRegisterSessionGoodsRegisterHandler)(
    YMKSearchGoodsRegister * _Nullable goodsRegister,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Interface to handle goods register request. Allows request
 * cancellation and retry.
 */
@interface YMKSearchGoodsRegisterSession : NSObject

/**
 * Cancels the current request.
 */
- (void)cancel;

/**
 * Retries the last request. If there is an active request, it is
 * cancelled.
 *
 * @param goodsRegisterListener Listener to handle goods register search
 * result.
 */
- (void)retryWithGoodsRegisterHandler:(nonnull YMKSearchGoodsRegisterSessionGoodsRegisterHandler)goodsRegisterHandler;

@end
