#import <UIKit/UIKit.h>

@class YMKPhotosFeed;
@class YMKPhotosImageSession;
@class YMKPhotosSession;

/**
 * :nodoc:
 */
typedef void(^YMKPhotosSessionDataHandler)(
    YMKPhotosFeed * _Nullable feed,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Provides a photo feed of a particular business by page.
 */
@interface YMKPhotosSession : NSObject

/**
 * Checks if there is a following page. The first page is always
 * present. Returns true if there is a pending fetchNextPage operation.
 */
- (BOOL)hasNextPage;

/**
 * Requests the next feed page. If the previous hasNextPage() call
 * returned false, behavior is undefined. If there is a fetch operation
 * already pending, the call is ignored.
 */
- (void)fetchNextPageWithDataHandler:(nonnull YMKPhotosSessionDataHandler)dataHandler;

/**
 * Cancels the pending operation, if there is one. If the fetch
 * operation is cancelled before any user notification is sent, the next
 * fetchNextPage() call will request the same page.
 */
- (void)cancel;

@end

/**
 * :nodoc:
 */
typedef void(^YMKPhotosImageSessionHandler)(
    UIImage * _Nullable bitmap,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Provides images.
 */
@interface YMKPhotosImageSession : NSObject

/**
 * Cancels the pending image request, if there is one.
 */
- (void)cancel;

/**
 * Re-fetches the image with the same parameters, but a different
 * listener.
 */
- (void)retryWithHandler:(nonnull YMKPhotosImageSessionHandler)handler;

@end

/**
 * :nodoc:
 * Presents photos requesting an API.
 */
@interface YMKPhotosManager : NSObject

/**
 * Returns PhotoSession, which represents a photo feed of the given
 * business.
 */
- (nonnull YMKPhotosSession *)photosWithBusinessId:(nonnull NSString *)businessId;

/**
 * Returns PhotoSession, which represents a photo feed of the given
 * business. The feed only contains photos with the given tags.
 */
- (nonnull YMKPhotosSession *)photosWithBusinessId:(nonnull NSString *)businessId
                                              tags:(nonnull NSArray<NSString *> *)tags;

/**
 * Requests the image with a particular ID and size.
 */
- (nonnull YMKPhotosImageSession *)imageWithId:(nonnull NSString *)id
                                          size:(nonnull NSString *)size
                                       handler:(nonnull YMKPhotosImageSessionHandler)handler;

/**
 * Removes all cached images.
 */
- (void)clear;

@end
