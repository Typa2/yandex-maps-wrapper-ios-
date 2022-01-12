#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKPoint.h>

@class YMKSearchStopStyle;

@interface YMKSearchLine : NSObject

/**
 * Name of the line that the nearest stop is on.
 */
@property (nonatomic, readonly, nonnull) NSString *name;


+ (nonnull YMKSearchLine *)lineWithName:(nonnull NSString *)name;


@end

/**
 * :nodoc:
 * Describes a mass transit stop.
 */
@interface YMKSearchStop : NSObject

/**
 * Mass transit stop name.
 */
@property (nonatomic, readonly, nonnull) NSString *name;

/**
 * Localized distance to the stop.
 */
@property (nonatomic, readonly, nonnull) YMKLocalizedValue *distance;

/**
 * Nearest stop style, such as color.
 */
@property (nonatomic, readonly, nonnull) YMKSearchStopStyle *style;

/**
 * Mass transit stop point.
 */
@property (nonatomic, readonly, nonnull) YMKPoint *point;

/**
 * Nearest stop ID.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *stopId;

/**
 * Line that the nearest stop is on.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchLine *line;


+ (nonnull YMKSearchStop *)stopWithName:(nonnull NSString *)name
                               distance:(nonnull YMKLocalizedValue *)distance
                                  style:(nonnull YMKSearchStopStyle *)style
                                  point:(nonnull YMKPoint *)point
                                 stopId:(nullable NSString *)stopId
                                   line:(nullable YMKSearchLine *)line;


@end

/**
 * :nodoc:
 * Mass transit stop style.
 */
@interface YMKSearchStopStyle : NSObject

/**
 * Mass transit stop color.
 */
@property (nonatomic, readonly) NSInteger color;


+ (nonnull YMKSearchStopStyle *)styleWithColor:( NSInteger)color;


@end

/**
 * :nodoc:
 * Snippet data to get mass transit stop info.
 */
@interface YMKSearchMassTransit1xObjectMetadata : NSObject

/**
 * List of neareast mass transit stops.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchStop *> *stops;


+ (nonnull YMKSearchMassTransit1xObjectMetadata *)massTransit1xObjectMetadataWithStops:(nonnull NSArray<YMKSearchStop *> *)stops;


@end
