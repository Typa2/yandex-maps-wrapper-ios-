#import <UIKit/UIKit.h>

@class YMKSearchImageSession;

/**
 * :nodoc:
 * Receive resulting image using this listener.
 */
typedef void(^YMKSearchImageListener)(
    UIImage * _Nullable image,
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
@interface YMKSearchImageSession : NSObject

/**
 * Cancel current request.
 */
- (void)cancel;

/**
 * Retry last request. If there is an active request, it is cancelled.
 *
 * @param imageListener new listener to be notified
 */
- (void)retryWithImageListener:(nonnull YMKSearchImageListener)imageListener;

@end

/**
 * :nodoc:
 * Allows to download advert images.
 */
@interface YMKSearchImageDownloader : NSObject

/**
 * Requests an image to display.
 *
 * @param id image identifier.
 * @param imageListener Receive resulting image using this listener.
 *
 * @return Session handle that should be stored until image is received.
 */
- (nonnull YMKSearchImageSession *)requestImageWithId:(nonnull NSString *)id
                                        imageListener:(nonnull YMKSearchImageListener)imageListener;

@end
