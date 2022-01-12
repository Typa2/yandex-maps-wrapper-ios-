#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * General snippet.
 */
@interface YMKSearchObjectMetadata : NSObject

/**
 * Server-generated log identifier.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *logId;

/**
 * Server-generated request identifier.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *reqId;


+ (nonnull YMKSearchObjectMetadata *)searchObjectMetadataWithLogId:(nullable NSString *)logId
                                                             reqId:(nullable NSString *)reqId;


@end
