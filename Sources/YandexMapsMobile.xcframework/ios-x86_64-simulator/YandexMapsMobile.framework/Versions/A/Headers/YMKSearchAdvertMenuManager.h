#import <YandexMapsMobile/YMKPoint.h>

@class YMKSearchAdvertMenuInfo;

/**
 * :nodoc:
 * Listener to be notified when a new menu advertisement is received.
 */
@protocol YMKSearchAdvertMenuListener <NSObject>

/**
 * Gets called upon receiving new menu data.
 */
- (void)onMenuAdvertReceived;

@end

/**
 * :nodoc:
 * Represents an advertised menu item. A tap on the item leads to a
 * corresponding search action.
 */
@interface YMKSearchAdvertMenuItem : NSObject

/**
 * Advertised menu item name.
 */
@property (nonatomic, readonly, nonnull) NSString *title;

/**
 * Search query to execute when a user taps on the menu item.
 */
@property (nonatomic, readonly, nonnull) NSString *searchQuery;

/**
 * Style that is used to create an identifier for an icon (see
 * BitmapDownloader.requestBitmap).
 */
@property (nonatomic, readonly, nonnull) NSString *style;

/**
 * Desired position in search menu.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *position;

/**
 * Identifier for logging.
 */
@property (nonatomic, readonly, nonnull) NSString *logId;


+ (nonnull YMKSearchAdvertMenuItem *)advertMenuItemWithTitle:(nonnull NSString *)title
                                                 searchQuery:(nonnull NSString *)searchQuery
                                                       style:(nonnull NSString *)style
                                                    position:(nullable NSNumber *)position
                                                       logId:(nonnull NSString *)logId;


@end

/**
 * :nodoc:
 * Multiple menu advertisement entries.
 */
@interface YMKSearchAdvertMenuInfo : NSObject

/**
 * Menu items.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchAdvertMenuItem *> *menuItems;


+ (nonnull YMKSearchAdvertMenuInfo *)advertMenuInfoWithMenuItems:(nonnull NSArray<YMKSearchAdvertMenuItem *> *)menuItems;


@end

/**
 * :nodoc:
 * An interface for receiving advertised menu items for the application
 * menu. The application sets the user position and the relevant menu
 * advertisements are provided. Ads are received in the background and
 * the application is notified when new menu advertisements become
 * available.
 */
@interface YMKSearchAdvertMenuManager : NSObject

/**
 * Add a listener to receive menu advertisements. The listener will be
 * notified after calls to setPosition.
 *
 * @param menuListener listener to add
 */
- (void)addListenerWithMenuListener:(nonnull id<YMKSearchAdvertMenuListener>)menuListener;

/**
 * Remove the menu advertisement listener.
 *
 * @param menuListener listener to remove
 */
- (void)removeListenerWithMenuListener:(nonnull id<YMKSearchAdvertMenuListener>)menuListener;

/**
 * Set the current position.
 *
 * @param point new position value
 */
- (void)setPositionWithPoint:(nonnull YMKPoint *)point;
/**
 * Currently available menu advertisements.
 *
 * @return collection of menu advertisment items.
 */
@property (nonatomic, readonly, nonnull) YMKSearchAdvertMenuInfo *advertMenuInfo;

@end
