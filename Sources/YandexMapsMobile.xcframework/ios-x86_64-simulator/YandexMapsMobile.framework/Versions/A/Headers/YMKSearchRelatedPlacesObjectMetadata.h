#import <YandexMapsMobile/YMKSearchRelatedPlaces.h>

/**
 * Snippet data to get related places info.
 */
@interface YMKSearchRelatedPlacesObjectMetadata : NSObject

/**
 * List of similar places.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchPlaceInfo *> *similarPlaces;

/**
 * List of nearby companies.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchPlaceInfo *> *companiesNearby;


+ (nonnull YMKSearchRelatedPlacesObjectMetadata *)relatedPlacesObjectMetadataWithSimilarPlaces:(nonnull NSArray<YMKSearchPlaceInfo *> *)similarPlaces
                                                                               companiesNearby:(nonnull NSArray<YMKSearchPlaceInfo *> *)companiesNearby;


@end
