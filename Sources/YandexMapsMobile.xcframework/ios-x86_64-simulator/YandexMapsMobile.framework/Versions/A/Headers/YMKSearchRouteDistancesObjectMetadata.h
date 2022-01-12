#import <YandexMapsMobile/YMKLocalizedValue.h>

/**
 * :nodoc:
 * Describes information about route via masstransit.
 */
@interface YMKSearchTransitInfo : NSObject

/**
 * Route  duration.
 */
@property (nonatomic, readonly, nonnull) YMKLocalizedValue *duration;

/**
 * Number of transfers for the route. This includes both transfers
 * inside single type of transit (i.e. change from one underground line
 * to another) and transfers between different transit types (i.e.
 * transfer from bus to underground).
 */
@property (nonatomic, readonly) NSInteger transferCount;


+ (nonnull YMKSearchTransitInfo *)transitInfoWithDuration:(nonnull YMKLocalizedValue *)duration
                                            transferCount:( NSInteger)transferCount;


@end

/**
 * :nodoc:
 * Describes information about route via driving or walking.
 */
@interface YMKSearchTravelInfo : NSObject

/**
 * Route duration.
 */
@property (nonatomic, readonly, nonnull) YMKLocalizedValue *duration;

/**
 * Route distance.
 */
@property (nonatomic, readonly, nonnull) YMKLocalizedValue *distance;


+ (nonnull YMKSearchTravelInfo *)travelInfoWithDuration:(nonnull YMKLocalizedValue *)duration
                                               distance:(nonnull YMKLocalizedValue *)distance;


@end

/**
 * :nodoc:
 * Describes relative distance info.
 */
@interface YMKSearchRelativeDistance : NSObject

/**
 * Travel info for driving route.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchTravelInfo *driving;

/**
 * Travel info for walking route.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchTravelInfo *walking;


+ (nonnull YMKSearchRelativeDistance *)relativeDistanceWithDriving:(nullable YMKSearchTravelInfo *)driving
                                                           walking:(nullable YMKSearchTravelInfo *)walking;


@end

/**
 * :nodoc:
 * Describes absolute distance info.
 */
@interface YMKSearchAbsoluteDistance : NSObject

/**
 * Travel info for driving route.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchTravelInfo *driving;

/**
 * Travel info for walking route.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchTravelInfo *walking;

/**
 * Travel info for masstransit route.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchTransitInfo *transit;


+ (nonnull YMKSearchAbsoluteDistance *)absoluteDistanceWithDriving:(nullable YMKSearchTravelInfo *)driving
                                                           walking:(nullable YMKSearchTravelInfo *)walking
                                                           transit:(nullable YMKSearchTransitInfo *)transit;


@end

/**
 * :nodoc:
 * Snippet data to get route distance info.
 */
@interface YMKSearchRouteDistancesObjectMetadata : NSObject

/**
 * Absolute distance info.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchAbsoluteDistance *absolute;

/**
 * Relative distance info.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchRelativeDistance *relative;


+ (nonnull YMKSearchRouteDistancesObjectMetadata *)routeDistancesObjectMetadataWithAbsolute:(nullable YMKSearchAbsoluteDistance *)absolute
                                                                                   relative:(nullable YMKSearchRelativeDistance *)relative;


@end
