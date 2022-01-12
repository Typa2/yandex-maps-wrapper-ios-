#import <YandexMapsMobile/YMKSearchCommon.h>

/**
 * :nodoc:
 * Visible piece of advertising art.
 */
@interface YMKSearchCreative : NSObject

/**
 * Creative ID.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * Creative type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Additional creative properties.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchKeyValuePair *> *properties;


+ (nonnull YMKSearchCreative *)creativeWithId:(nonnull NSString *)id
                                         type:(nonnull NSString *)type
                                   properties:(nonnull NSArray<YMKSearchKeyValuePair *> *)properties;


@end

/**
 * :nodoc:
 * Disclaimer text.
 */
@interface YMKSearchDisclaimer : NSObject

/**
 * Disclaimer text.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *text;


+ (nonnull YMKSearchDisclaimer *)disclaimerWithText:(nullable NSString *)text;


@end

/**
 * :nodoc:
* CTA https://en.wikipedia.org/wiki/Call_to_action_(marketing)
 */
@interface YMKSearchBillboardAction : NSObject

/**
 * Action type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Additional action properties.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchKeyValuePair *> *properties;


+ (nonnull YMKSearchBillboardAction *)billboardActionWithType:(nonnull NSString *)type
                                                   properties:(nonnull NSArray<YMKSearchKeyValuePair *> *)properties;


@end

/**
 * :nodoc:
 * Contains information about a billboard.
 */
@interface YMKSearchBillboardObjectMetadata : NSObject

/**
 * Billboard ID.
 */
@property (nonatomic, readonly, nonnull) NSString *placeId;

/**
 * Title.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * Address.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *address;

/**
 * Billboard actions.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchBillboardAction *> *actions;

/**
 * Billboard creatives.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchCreative *> *creatives;

/**
 * Billboard disclaimers.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchDisclaimer *> *disclaimers;

/**
 * Additional billboard properties.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchKeyValuePair *> *properties;

/**
 * Opaque string for logging.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *logId;


+ (nonnull YMKSearchBillboardObjectMetadata *)billboardObjectMetadataWithPlaceId:(nonnull NSString *)placeId
                                                                           title:(nullable NSString *)title
                                                                         address:(nullable NSString *)address
                                                                         actions:(nonnull NSArray<YMKSearchBillboardAction *> *)actions
                                                                       creatives:(nonnull NSArray<YMKSearchCreative *> *)creatives
                                                                     disclaimers:(nonnull NSArray<YMKSearchDisclaimer *> *)disclaimers
                                                                      properties:(nonnull NSArray<YMKSearchKeyValuePair *> *)properties
                                                                           logId:(nullable NSString *)logId;


@end
