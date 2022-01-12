#import <YandexMapsMobile/YMKSearchCollectionCommon.h>

/**
 * :nodoc:
 * Collection metadata when collection is an entry of the SERP.
 */
@interface YMKSearchCollectionObjectMetadata : NSObject

/**
 * Collection details.
 */
@property (nonatomic, readonly, nonnull) YMKSearchCollection *collection;


+ (nonnull YMKSearchCollectionObjectMetadata *)collectionObjectMetadataWithCollection:(nonnull YMKSearchCollection *)collection;


@end
