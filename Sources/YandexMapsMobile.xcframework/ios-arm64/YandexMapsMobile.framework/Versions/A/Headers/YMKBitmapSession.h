#import <UIKit/UIKit.h>

typedef void(^YMKBitmapSessionBitmapListener)(
    UIImage * _Nullable bitmap,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Session for receiving search-related bitmaps (e.g. advertisement
 * images).
 *
 * - Should be stored until listener is notified. - Can be used to
 * cancel active request. - Can be used to retry last request (usually
 * if it failed).
 */
@interface YMKBitmapSession : NSObject

/**
 * Cancel current request.
 */
- (void)cancel;

/**
 * Retry last request. If there is an active request, it is cancelled.
 *
 * @param bitmapListener new listener to be notified
 */
- (void)retryWithBitmapListener:(nonnull YMKBitmapSessionBitmapListener)bitmapListener;

@end
