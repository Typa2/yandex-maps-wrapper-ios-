#import <Foundation/Foundation.h>

@class YMKSearchBookingResponse;

/**
 * :nodoc:
 */
typedef void(^YMKSearchBookingSearchSessionBookingSearchHandler)(
    YMKSearchBookingResponse * _Nullable bookingResponse,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Interface to handle booking offers search request. Allows request
 * cancellation and retry.
 */
@interface YMKSearchBookingSearchSession : NSObject

/**
 * Cancels the current request.
 */
- (void)cancel;

/**
 * Retries the last request. If there is an active request, it is
 * cancelled.
 *
 * @param bookingSearchListener Listener to handle search result.
 */
- (void)retryWithBookingSearchHandler:(nonnull YMKSearchBookingSearchSessionBookingSearchHandler)bookingSearchHandler;

@end
