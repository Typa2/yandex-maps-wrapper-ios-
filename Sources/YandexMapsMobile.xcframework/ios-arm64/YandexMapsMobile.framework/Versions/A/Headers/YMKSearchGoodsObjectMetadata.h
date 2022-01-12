#import <YandexMapsMobile/YMKSearchGoods.h>

/**
 * :nodoc:
 * Goods metadata (several goods that match the user query).
 */
@interface YMKSearchGoodsObjectMetadata : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKSearchGoods *> *goods;


+ (nonnull YMKSearchGoodsObjectMetadata *)goodsObjectMetadataWithGoods:(nonnull NSArray<YMKSearchGoods *> *)goods;


@end
