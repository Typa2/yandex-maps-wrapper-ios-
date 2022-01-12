#import <YandexMapsMobile/YMKGeoObject.h>
#import <YandexMapsMobile/YMKGeometry.h>

/**
 * :nodoc:
 * Listener to be notified when new billboards are received.
 */
@protocol YMKSearchBillboardListener <NSObject>

/**
 * Method to be called on the listener to notify of a new ad.
 */
- (void)onBillboardReceived;

@end

/**
 * :nodoc:
 * Allows to get billboards to show inside the visible region.
 */
@interface YMKSearchBillboardWindowManager : NSObject

/**
 * Sets the listener to receive billboards. The listener may be notified
 * after calls to `setSearchArea` if the area overlapping rate is low.
 *
 * @param billboardListener listener to add
 */
- (void)addListenerWithBillboardListener:(nonnull id<YMKSearchBillboardListener>)billboardListener;

/**
 * Removes a billboard listener.
 *
 * @param billboardListener listener to remove
 */
- (void)removeListenerWithBillboardListener:(nonnull id<YMKSearchBillboardListener>)billboardListener;

/**
 * Sets the area to search for billboards.
 *
 * @param area Search area. May not be null.
 */
- (void)setSearchAreaWithArea:(nonnull YMKBoundingBox *)area;

/**
 * Resets the search area. No further notifications will be issued to
 * listeners until the new area is provided.
 */
- (void)resetSearchArea;
/**
 * Current billboards.
 *
 * @return collection of billbaord `GeoObjects`
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKGeoObject *> *advertObjects;

@end
