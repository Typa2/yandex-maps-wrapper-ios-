#import <YandexMapsMobile/YMKSearchCollectionCommon.h>

/**
 * :nodoc:
 * Snippet with collections geo object belongs to.
 */
@interface YMKSearchDiscovery2xObjectMetadata : NSObject

/**
 * List of collections geo object belongs to.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchCollection *> *collections;


+ (nonnull YMKSearchDiscovery2xObjectMetadata *)discovery2xObjectMetadataWithCollections:(nonnull NSArray<YMKSearchCollection *> *)collections;


@end
