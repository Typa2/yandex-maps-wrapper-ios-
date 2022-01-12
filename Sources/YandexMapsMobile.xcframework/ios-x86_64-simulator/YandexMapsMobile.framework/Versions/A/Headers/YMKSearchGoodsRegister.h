#import <YandexMapsMobile/YMKSearchGoods.h>

/**
 * :nodoc:
 * Named category of goods.
 */
@interface YMKSearchGoodsCategory : NSObject

/**
 * Category name.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *name;

/**
 * Several goods objects in a category.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchGoods *> *goods;


+ (nonnull YMKSearchGoodsCategory *)goodsCategoryWithName:(nullable NSString *)name
                                                    goods:(nonnull NSArray<YMKSearchGoods *> *)goods;


@end

/**
 * :nodoc:
 * Full goods register.
 */
@interface YMKSearchGoodsRegister : NSObject

/**
 * Goods grouped by named categories.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchGoodsCategory *> *categories;

/**
 * Unspecified additional info, e.g. goods kind ('menu', 'drugs', etc).
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;


+ (nonnull YMKSearchGoodsRegister *)goodsRegisterWithCategories:(nonnull NSArray<YMKSearchGoodsCategory *> *)categories
                                                           tags:(nonnull NSArray<NSString *> *)tags;


@end
