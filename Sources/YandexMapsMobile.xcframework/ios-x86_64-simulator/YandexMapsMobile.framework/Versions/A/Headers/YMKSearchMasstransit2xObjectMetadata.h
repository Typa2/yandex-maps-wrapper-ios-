#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKPoint.h>

@class YMKSearchNearbyStopLine;
@class YMKSearchNearbyStopLineAtStop;
@class YMKSearchNearbyStopStop;
@class YMKSearchNearbyStopStyle;

/**
 * :nodoc:
 * Describes a nearby mass transit stop.
 */
@interface YMKSearchNearbyStop : NSObject

/**
 * Public transport stop.
 */
@property (nonatomic, readonly, nonnull) YMKSearchNearbyStopStop *stop;

/**
 * Nearby stop point.
 */
@property (nonatomic, readonly, nonnull) YMKPoint *point;

/**
 * Localized distance to the nearby stop.
 */
@property (nonatomic, readonly, nonnull) YMKLocalizedValue *distance;

/**
 * A list of public transport lines that go through this nearby stop.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchNearbyStopLineAtStop *> *linesAtStop;


+ (nonnull YMKSearchNearbyStop *)nearbyStopWithStop:(nonnull YMKSearchNearbyStopStop *)stop
                                              point:(nonnull YMKPoint *)point
                                           distance:(nonnull YMKLocalizedValue *)distance
                                        linesAtStop:(nonnull NSArray<YMKSearchNearbyStopLineAtStop *> *)linesAtStop;


@end

/**
 * :nodoc:
 * Defines a visual style, such as color.
 */
@interface YMKSearchNearbyStopStyle : NSObject

/**
 * Element color in #RRGGBB format.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *color;


+ (nonnull YMKSearchNearbyStopStyle *)styleWithColor:(nullable NSNumber *)color;


@end

/**
 * :nodoc:
 * Describes a public transport line.
 */
@interface YMKSearchNearbyStopLine : NSObject

/**
 * Line ID.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * Line name.
 */
@property (nonatomic, readonly, nonnull) NSString *name;

/**
 * Line style, such as color.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchNearbyStopStyle *style;

/**
 * Line vehicle types.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *vehicleTypes;


+ (nonnull YMKSearchNearbyStopLine *)lineWithId:(nonnull NSString *)id
                                           name:(nonnull NSString *)name
                                          style:(nullable YMKSearchNearbyStopStyle *)style
                                   vehicleTypes:(nonnull NSArray<NSString *> *)vehicleTypes;


@end

/**
 * :nodoc:
 * Provides information about a public transport line that goes through
 * the specified mass transit stop.
 */
@interface YMKSearchNearbyStopLineAtStop : NSObject

/**
 * Public transport line.
 */
@property (nonatomic, readonly, nonnull) YMKSearchNearbyStopLine *line;


+ (nonnull YMKSearchNearbyStopLineAtStop *)lineAtStopWithLine:(nonnull YMKSearchNearbyStopLine *)line;


@end

/**
 * :nodoc:
 * Identifies a public transport stop.
 */
@interface YMKSearchNearbyStopStop : NSObject

/**
 * Stop ID.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * Stop name.
 */
@property (nonatomic, readonly, nonnull) NSString *name;


+ (nonnull YMKSearchNearbyStopStop *)stopWithId:(nonnull NSString *)id
                                           name:(nonnull NSString *)name;


@end

/**
 * :nodoc:
 * Snippet data to get nearby mass transit stops info.
 */
@interface YMKSearchMassTransit2xObjectMetadata : NSObject

/**
 * A list of nearby mass transit stops.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchNearbyStop *> *stops;


+ (nonnull YMKSearchMassTransit2xObjectMetadata *)massTransit2xObjectMetadataWithStops:(nonnull NSArray<YMKSearchNearbyStop *> *)stops;


@end
