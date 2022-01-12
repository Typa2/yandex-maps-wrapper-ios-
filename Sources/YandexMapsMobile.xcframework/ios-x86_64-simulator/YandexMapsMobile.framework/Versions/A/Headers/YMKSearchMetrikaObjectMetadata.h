#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * Goal names.
 */
@interface YMKSearchGoals : NSObject

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *call;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *route;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *cta;


+ (nonnull YMKSearchGoals *)goalsWithCall:(nullable NSString *)call
                                    route:(nullable NSString *)route
                                      cta:(nullable NSString *)cta;


@end

/**
 * :nodoc:
 * Yandex.Metrika counters for organisation.
 */
@interface YMKSearchMetrikaObjectMetadata : NSObject

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *counter;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchGoals *goals;


+ (nonnull YMKSearchMetrikaObjectMetadata *)metrikaObjectMetadataWithCounter:(nullable NSString *)counter
                                                                       goals:(nullable YMKSearchGoals *)goals;


@end
