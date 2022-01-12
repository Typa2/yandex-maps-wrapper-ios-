#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * Additional data for masstransit objects
 */
@interface YMKSearchMassTransitObjectMetadata : NSObject

/**
 * dummy field to make code generation work
 */
@property (nonatomic, readonly) NSInteger reserved;


+ (nonnull YMKSearchMassTransitObjectMetadata *)massTransitObjectMetadataWithReserved:( NSInteger)reserved;


@end
