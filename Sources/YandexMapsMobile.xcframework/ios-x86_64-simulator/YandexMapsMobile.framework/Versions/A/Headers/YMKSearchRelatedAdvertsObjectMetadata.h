#import <YandexMapsMobile/YMKSearchRelatedPlaces.h>

/**
 * :nodoc:
 * Snippet data to get related adverts info.
 */
@interface YMKSearchRelatedAdvertsObjectMetadata : NSObject

/**
 * List of related advertized places.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchPlaceInfo *> *placesOnMap;

@property (nonatomic, readonly, nonnull) NSArray<YMKSearchPlaceInfo *> *placesOnCard;


+ (nonnull YMKSearchRelatedAdvertsObjectMetadata *)relatedAdvertsObjectMetadataWithPlacesOnMap:(nonnull NSArray<YMKSearchPlaceInfo *> *)placesOnMap
                                                                                  placesOnCard:(nonnull NSArray<YMKSearchPlaceInfo *> *)placesOnCard;


@end
