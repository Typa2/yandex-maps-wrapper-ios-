#import <YandexMapsMobile/YMKSearchGoods.h>

/**
 * :nodoc:
 * Snippet with some goods selection (i.e. the best available goods).
 */
@interface YMKSearchGoods1xObjectMetadata : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKSearchGoods *> *goods;


+ (nonnull YMKSearchGoods1xObjectMetadata *)goods1xObjectMetadataWithGoods:(nonnull NSArray<YMKSearchGoods *> *)goods;


@end
