#import <YandexMapsMobile/YMKGeoObject.h>

/**
 * :nodoc:
 * Event logger.
 */
@interface YMKBillboardLogger : NSObject

/**
 *
 * @param geoObject GeoObject with billboard metadata
 */
- (void)logRouteViaWithGeoObject:(nonnull YMKGeoObject *)geoObject;

/**
 *
 * @param type Event type. Value from
 * BillboardObjectMetadata.actions.type
 * @param geoObject GeoObject with billboard metadata
 */
- (void)logAdvertActionWithType:(nonnull NSString *)type
                      geoObject:(nonnull YMKGeoObject *)geoObject;

- (void)logBannerShowWithGeoObject:(nonnull YMKGeoObject *)geoObject;

- (void)logBannerClickWithGeoObject:(nonnull YMKGeoObject *)geoObject;

@end
