#import <YandexMapsMobile/YMKAdvertLayer.h>
#import <YandexMapsMobile/YMKAdvertLayerAssetProvider.h>
#import <YandexMapsMobile/YMKConflictResolutionMode.h>
#import <YandexMapsMobile/YMKMapWindow.h>
#import <YandexMapsMobile/YMKSearchLayer.h>
#import <YandexMapsMobile/YMKSearchSearchManager.h>
#import <YandexMapsMobile/YMKSearchStorageCaching.h>

@class YMKBillboardLogger;
@class YMKSearchAdvertMenuManager;
@class YMKSearchBillboardRouteManager;
@class YMKSearchBillboardWindowManager;
@class YMKSearchBitmapDownloader;
@class YMKSearchImageDownloader;
@class YMKSearchLogger;
@class YMKSearchMenuManager;
@class YMKSearchViaBannerManager;
@class YMKSearchZeroSpeedBannerManager;

@interface YMKSearch : NSObject

/**
 * Gets the search_layer object.
 */
- (nonnull YMKSearchLayer *)createSearchLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow;

/**
 * :nodoc:
 * Creates search layer with custom layer id. This function allows
 * creation of multiple search layers. Different layer ids should be
 * provided for each instance.
 *
 * @param mapWindow Map window to attach search layer to.
 * @param layerId Unique layer identifier.
 * @param mode Mode to resolve conflicts between different layers.
 */
- (nonnull YMKSearchLayer *)createCustomSearchLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow
                                                         layerId:(nonnull NSString *)layerId
                                                            mode:(YMKConflictResolutionMode)mode;

/**
 * :nodoc:
 * Gets the advert_layer object.
 *
 * Remark:
 * @param assetProvider has optional type, it may be uninitialized.
 */
- (nonnull YMKAdvertLayer *)createAdvertLayerWithAdvertPageId:(nonnull NSString *)advertPageId
                                                    mapWindow:(nonnull YMKMapWindow *)mapWindow
                                                assetProvider:(nullable id<YMKAdvertLayerAssetProvider>)assetProvider;

/**
 * Creates a manager that allows to search for various geographical
 * objects using a variety of parameters.
 */
- (nonnull YMKSearchManager *)createSearchManagerWithSearchManagerType:(YMKSearchSearchManagerType)searchManagerType;

/**
 * :nodoc:
 * Creates a manager that provides advertized menu items (obsolete).
 */
- (nonnull YMKSearchAdvertMenuManager *)createAdvertMenuManagerWithAdvertPageId:(nonnull NSString *)advertPageId;

/**
 * :nodoc:
 * Creates a manager that provides menu items.
 */
- (nonnull YMKSearchMenuManager *)createMenuManagerWithMenuPageId:(nonnull NSString *)menuPageId;

/**
 * :nodoc:
 * Creates a route advertising manager that allows to get ads for places
 * of interest and billboards along the route.
 */
- (nonnull YMKSearchBillboardRouteManager *)createBillboardRouteManagerWithAdvertPageId:(nonnull NSString *)advertPageId;

/**
 * :nodoc:
 * Creates a billboard manager that allows to get billboards inside the
 * search window.
 */
- (nonnull YMKSearchBillboardWindowManager *)createBillboardWindowManagerWithAdvertPageId:(nonnull NSString *)advertPageId;

/**
 * :nodoc:
 * Creates a manager for getting zero speed banners.
 */
- (nonnull YMKSearchZeroSpeedBannerManager *)createZeroSpeedBannerManagerWithAdvertPageId:(nonnull NSString *)advertPageId;

/**
 * :nodoc:
 * Creates a manager for getting via point banners for routes.
 */
- (nonnull YMKSearchViaBannerManager *)createViaBannerManagerWithAdvertPageId:(nonnull NSString *)advertPageId;

/**
 * :nodoc:
 * Creates a manager for getting ad icons (obsolete).
 *
 * @param storageCaching Enables or disables internal caching of
 * downloaded bitmaps to disk.
 */
- (nonnull YMKSearchBitmapDownloader *)createBitmapDownloaderWithStorageCaching:(YMKSearchStorageCaching)storageCaching;

/**
 * :nodoc:
 * Creates a manager for getting images.
 *
 * @param storageCaching Enables or disables internal caching of
 * downloaded bitmaps to disk.
 */
- (nonnull YMKSearchImageDownloader *)createImageDownloaderWithStorageCaching:(YMKSearchStorageCaching)storageCaching;

/**
 * :nodoc:
 * Returns a singleton billboard logger.
 */
- (nonnull YMKBillboardLogger *)billboardLogger;

/**
 * :nodoc:
 * Returns a singleton search logger.
 */
- (nonnull YMKSearchLogger *)searchLogger;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
