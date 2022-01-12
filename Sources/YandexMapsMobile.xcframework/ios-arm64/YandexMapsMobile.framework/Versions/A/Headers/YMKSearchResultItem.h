#import <YandexMapsMobile/YMKGeoObject.h>
#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKSearchSubtitle.h>

/**
 * Wrapper of the GeoObject in response, which makes it easy to get the
 * certain fields from GeoObject
 */
@interface YMKSearchResultItem : NSObject
/**
 * Id (constructed inside)
 */
@property (nonatomic, readonly, nonnull) NSString *id;
/**
 * Name (from GeoObject)
 */
@property (nonatomic, readonly, nonnull) NSString *name;
/**
 * CategoryClass (optional, first if there are several)
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *categoryClass;
/**
 * Wrapped GeoObject itself
 */
@property (nonatomic, readonly, nonnull) YMKGeoObject *geoObject;
/**
 * Point from the GeoObject
 */
@property (nonatomic, readonly, nonnull) YMKPoint *point;

/**
 * Does the GeoObject contain details for subtitle
 */
- (BOOL)hasDetails;

/**
 * Details for the subtitle
 */
- (nonnull NSArray<YMKSearchSubtitleItem *> *)details;

/**
 * :nodoc:
 * Is it an advertisement GeoObject
 */
- (BOOL)isAdvertisement;

/**
 * :nodoc:
 * Whether to highlight the advertisement result on the map. If it
 * returns false, no highlighting should be applied to the advertisement
 * pin compared to organic results, including but not limited to icon,
 * color, rendering priority, and so on.
 */
- (BOOL)isHighlighted;

/**
 * :nodoc:
 * Is it a related advertisement GeoObject injected from snippet.
 */
- (BOOL)isRelatedAdvertisement;

/**
 * Is it a collection GeoObject
 */
- (BOOL)isCollection;

/**
 * Is the organization closed now
 */
- (BOOL)isClosed;

/**
 * Is the GeoObject found in offline search
 */
- (BOOL)isOffline;

@end
