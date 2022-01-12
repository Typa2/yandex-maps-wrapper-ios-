#import <YandexMapsMobile/YMKBitmapSession.h>

/**
 * :nodoc:
 * Allows to download advert bitmap images. Obsolete. Use
 * ImageDownloader instead.
 */
@interface YMKSearchBitmapDownloader : NSObject

/**
 * Requests an image to display.
 *
 * @param id Image identifier.
 * @param scale Scale of resulting image.
 * @param bitmapListener Receive resulting image using this listener.
 *
 * @return Session handle that should be stored until image is received.
 */
- (nonnull YMKBitmapSession *)requestBitmapWithId:(nonnull NSString *)id
                                            scale:(float)scale
                                   bitmapListener:(nonnull YMKBitmapSessionBitmapListener)bitmapListener;

@end
