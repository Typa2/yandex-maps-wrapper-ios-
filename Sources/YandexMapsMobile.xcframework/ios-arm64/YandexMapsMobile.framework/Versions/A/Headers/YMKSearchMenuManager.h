#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKSearchCommon.h>

@class YMKSearchMenuInfo;

/**
 * :nodoc:
 * Listener to be notified when a new menu is received.
 */
@protocol YMKSearchMenuListener <NSObject>

/**
 * Gets called upon receiving new menu data.
 */
- (void)onMenuReceived;

@end

/**
 * :nodoc:
 * Represents an menu item. A tap on the item leads to a corresponding
 * search action.
 */
@interface YMKSearchMenuItem : NSObject

/**
 * Menu item title.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * Menu item subtitle.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *subtitle;

/**
 * Search query to execute when user clicks on the menu item.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *searchQuery;

/**
 * Types of the menu item (special, advert). Types are empty for normal
 * menu item.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *types;

/**
 * Identifier for logging.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *logId;

/**
 * Menu item icons.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchImage *> *images;

/**
 * Additional menu item properties.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchKeyValuePair *> *properties;


+ (nonnull YMKSearchMenuItem *)menuItemWithTitle:(nullable NSString *)title
                                        subtitle:(nullable NSString *)subtitle
                                     searchQuery:(nullable NSString *)searchQuery
                                           types:(nonnull NSArray<NSString *> *)types
                                           logId:(nullable NSString *)logId
                                          images:(nonnull NSArray<YMKSearchImage *> *)images
                                      properties:(nonnull NSArray<YMKSearchKeyValuePair *> *)properties;


@end

/**
 * :nodoc:
 * Multiple menu entries.
 */
@interface YMKSearchMenuInfo : NSObject

/**
 * Menu items.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchMenuItem *> *menuItems;


+ (nonnull YMKSearchMenuInfo *)menuInfoWithMenuItems:(nonnull NSArray<YMKSearchMenuItem *> *)menuItems;


@end

/**
 * :nodoc:
 * An interface for receiving menu items for the application menu. The
 * application sets the user position and the relevant menu are
 * provided. Menu data are received in the background, and the
 * application is notified when new menu become available. Last used
 * menu data are stored to disk, and first notification is sent with
 * stored data.
 */
@interface YMKSearchMenuManager : NSObject

/**
 * Adds a listener to receive menu.
 *
 * @param menuListener Listener to add.
 */
- (void)addListenerWithMenuListener:(nonnull id<YMKSearchMenuListener>)menuListener;

/**
 * Removes the listener for menu.
 *
 * @param menuListener Listener to remove.
 */
- (void)removeListenerWithMenuListener:(nonnull id<YMKSearchMenuListener>)menuListener;

/**
 * Sets the current position.
 *
 * @param point New position value.
 */
- (void)setPositionWithPoint:(nonnull YMKPoint *)point;
/**
 * Currently available menu.
 *
 * @return collection of menu items.
 */
@property (nonatomic, readonly, nonnull) YMKSearchMenuInfo *menuInfo;

@end
