#import <Foundation/Foundation.h>

@class YMKMasstransitLine;
@class YMKMasstransitLineStyle;

/**
 * Describes a public transport stop.
 */
@interface YMKMasstransitStop : NSObject

/**
 * Stop ID.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * Stop name.
 */
@property (nonatomic, readonly, nonnull) NSString *name;


+ (nonnull YMKMasstransitStop *)stopWithId:(nonnull NSString *)id
                                      name:(nonnull NSString *)name;


@end

/**
 * Describes a public transport line.
 */
@interface YMKMasstransitLine : NSObject

/**
 * Line ID.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * Line name.
 */
@property (nonatomic, readonly, nonnull) NSString *name;

/**
 * List of line types. Starts from the most detailed, ends with the most
 * general.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *vehicleTypes;

/**
 * Line style; see YMKMasstransitLineStyle.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitLineStyle *style;

/**
 * True if the line operates only at night.
 */
@property (nonatomic, readonly) BOOL isNight;

/**
 * URI for a line.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *uri;


+ (nonnull YMKMasstransitLine *)lineWithId:(nonnull NSString *)id
                                      name:(nonnull NSString *)name
                              vehicleTypes:(nonnull NSArray<NSString *> *)vehicleTypes
                                     style:(nullable YMKMasstransitLineStyle *)style
                                   isNight:( BOOL)isNight
                                       uri:(nullable NSString *)uri;


@end

/**
 * Describes the style of line.
 */
@interface YMKMasstransitLineStyle : NSObject

/**
 * Line color in #RRGGBB format.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *color;


+ (nonnull YMKMasstransitLineStyle *)styleWithColor:(nullable NSNumber *)color;


@end

/**
 * Describes a public transport thread. A thread is one of the
 * YMKMasstransitLine variants. For example, one line can have two
 * threads: direct and return.
 */
@interface YMKMasstransitThread : NSObject

/**
 * Thread ID.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * List of important stops on the thread, such as the first and last
 * stops.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitStop *> *essentialStops;


+ (nonnull YMKMasstransitThread *)threadWithId:(nonnull NSString *)id
                                essentialStops:(nonnull NSArray<YMKMasstransitStop *> *)essentialStops;


@end
