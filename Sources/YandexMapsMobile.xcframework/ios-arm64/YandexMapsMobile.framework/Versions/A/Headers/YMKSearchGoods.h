#import <YandexMapsMobile/YMKTaxiMoney.h>

/**
 * :nodoc:
 * Typed link to photo.
 */
@interface YMKSearchPhotoLink : NSObject

/**
 * Photo type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Photo uri.
 */
@property (nonatomic, readonly, nonnull) NSString *uri;


+ (nonnull YMKSearchPhotoLink *)photoLinkWithType:(nonnull NSString *)type
                                              uri:(nonnull NSString *)uri;


@end

/**
 * :nodoc:
 * Additional data for Goods objects.
 */
@interface YMKSearchGoods : NSObject

/**
 * Goods name. For example 'Борщ'.
 */
@property (nonatomic, readonly, nonnull) NSString *name;

/**
 * Goods textual description.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *description;

/**
 * Price per unit.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTaxiMoney *price;

/**
 * Price unit. For example it could be 250g, 500ml, 1 pc, etc.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *unit;

/**
 * Goods visual description.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchPhotoLink *> *links;

/**
 * Unspecified additional info. For example goods kind ('menu', 'drugs',
 * etc).
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;


+ (nonnull YMKSearchGoods *)goodsWithName:(nonnull NSString *)name
                              description:(nullable NSString *)description
                                    price:(nullable YMKTaxiMoney *)price
                                     unit:(nullable NSString *)unit
                                    links:(nonnull NSArray<YMKSearchPhotoLink *> *)links
                                     tags:(nonnull NSArray<NSString *> *)tags;


@end
