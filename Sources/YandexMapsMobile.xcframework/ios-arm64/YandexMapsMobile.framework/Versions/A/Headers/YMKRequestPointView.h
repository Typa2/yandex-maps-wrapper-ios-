#import <YandexMapsMobile/YMKPlacemark.h>
#import <YandexMapsMobile/YMKRequestPoint.h>

@class YMKRequestPointView;

/**
 * :nodoc:
 */
@protocol YMKRequestPointViewListener <NSObject>

- (void)onRequstPointViewsChanged;

- (void)onRequestPointViewTapWithRequestPointView:(nonnull YMKRequestPointView *)requestPointView;

@end

/**
 * :nodoc:
 */
@interface YMKRequestPointView : NSObject
@property (nonatomic, readonly, nonnull) YMKRequestPoint *requestPoint;
/**
 * Request point representation on the map.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKPlacemarkMapObject *appearance;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
