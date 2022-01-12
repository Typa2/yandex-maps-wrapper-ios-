#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * Additional data for POI (point of interest) objects
 */
@interface YMKSearchPOIObjectMetadata : NSObject

/**
 * dummy field to make code generation work
 */
@property (nonatomic, readonly) NSInteger reserved;


+ (nonnull YMKSearchPOIObjectMetadata *)pOIObjectMetadataWithReserved:( NSInteger)reserved;


@end
