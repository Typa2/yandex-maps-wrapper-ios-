#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * Additional data for masstransit objects.
 */
@interface YMKSearchTransitObjectMetadata : NSObject

/**
 * Transit route ID.
 */
@property (nonatomic, readonly, nonnull) NSString *routeId;

/**
 * List of vehicle types.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *types;


+ (nonnull YMKSearchTransitObjectMetadata *)transitObjectMetadataWithRouteId:(nonnull NSString *)routeId
                                                                       types:(nonnull NSArray<NSString *> *)types;


@end
