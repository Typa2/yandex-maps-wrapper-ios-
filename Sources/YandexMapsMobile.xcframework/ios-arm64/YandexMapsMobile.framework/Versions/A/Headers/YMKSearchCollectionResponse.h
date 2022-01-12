#import <YandexMapsMobile/YMKSearchCollectionCommon.h>
#import <YandexMapsMobile/YMKSearchCommon.h>

/**
 * :nodoc:
 * Single link provided by the collection author.
 */
@interface YMKSearchPartnerLink : NSObject

/**
 * Title to show for the link.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * Image to show for the link.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchImage *image;

/**
 * Actual link.
 */
@property (nonatomic, readonly, nonnull) NSString *uri;


+ (nonnull YMKSearchPartnerLink *)partnerLinkWithTitle:(nullable NSString *)title
                                                 image:(nullable YMKSearchImage *)image
                                                   uri:(nonnull NSString *)uri;


@end

/**
 * :nodoc:
 * Group of links provided by the collection author.
 */
@interface YMKSearchPartnerLinks : NSObject

/**
 * Title for the provided links as a whole.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * List of provided links.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchPartnerLink *> *links;


+ (nonnull YMKSearchPartnerLinks *)partnerLinksWithTitle:(nullable NSString *)title
                                                   links:(nonnull NSArray<YMKSearchPartnerLink *> *)links;


@end

/**
 * :nodoc:
 * Collections related to the main collection in response.
 */
@interface YMKSearchRelatedCollections : NSObject

/**
 * List of related collections.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchCollection *> *collections;


+ (nonnull YMKSearchRelatedCollections *)relatedCollectionsWithCollections:(nonnull NSArray<YMKSearchCollection *> *)collections;


@end

/**
 * :nodoc:
 * Metadata for the collection response when collection is searched by
 * URI.
 */
@interface YMKSearchCollectionResultMetadata : NSObject

/**
 * Collection info.
 */
@property (nonatomic, readonly, nonnull) YMKSearchCollection *collection;

/**
 * Collections related to the main collection in response.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchRelatedCollections *relatedCollections;

/**
 * Group of links provided by the collection author.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchPartnerLinks *partnerLinks;


+ (nonnull YMKSearchCollectionResultMetadata *)collectionResultMetadataWithCollection:(nonnull YMKSearchCollection *)collection
                                                                   relatedCollections:(nullable YMKSearchRelatedCollections *)relatedCollections
                                                                         partnerLinks:(nullable YMKSearchPartnerLinks *)partnerLinks;


@end

/**
 * :nodoc:
 * Link used in the collection entry.
 */
@interface YMKSearchCollectionEntryLink : NSObject

/**
 * Title to show for the link.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * List of machine readable link tags.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;

/**
 * Actual link.
 */
@property (nonatomic, readonly, nonnull) NSString *uri;


+ (nonnull YMKSearchCollectionEntryLink *)collectionEntryLinkWithTitle:(nullable NSString *)title
                                                                  tags:(nonnull NSArray<NSString *> *)tags
                                                                   uri:(nonnull NSString *)uri;


@end

/**
 * :nodoc:
 * Feature used in the collection entry.
 */
@interface YMKSearchCollectionEntryFeature : NSObject

/**
 * Machine readable feature type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Feature name. E.g. "Когда".
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *name;

/**
 * Feature value. E.g. "1-2 августа".
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *value;


+ (nonnull YMKSearchCollectionEntryFeature *)collectionEntryFeatureWithType:(nonnull NSString *)type
                                                                       name:(nullable NSString *)name
                                                                      value:(nullable NSString *)value;


@end

/**
 * :nodoc:
 * Metadata for single entry in the collection.
 */
@interface YMKSearchCollectionEntryMetadata : NSObject

/**
 * Entry title.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * Short annotation for the entry.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *annotation;

/**
 * Full description for the entry.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *description;

/**
 * List of images for the entry.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchImage *> *images;

/**
 * List of links for the entry.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchCollectionEntryLink *> *links;

/**
 * List of entry features.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchCollectionEntryFeature *> *features;

/**
 * List of machine readable entry tags.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;


+ (nonnull YMKSearchCollectionEntryMetadata *)collectionEntryMetadataWithTitle:(nullable NSString *)title
                                                                    annotation:(nullable NSString *)annotation
                                                                   description:(nullable NSString *)description
                                                                        images:(nonnull NSArray<YMKSearchImage *> *)images
                                                                         links:(nonnull NSArray<YMKSearchCollectionEntryLink *> *)links
                                                                      features:(nonnull NSArray<YMKSearchCollectionEntryFeature *> *)features
                                                                          tags:(nonnull NSArray<NSString *> *)tags;


@end
