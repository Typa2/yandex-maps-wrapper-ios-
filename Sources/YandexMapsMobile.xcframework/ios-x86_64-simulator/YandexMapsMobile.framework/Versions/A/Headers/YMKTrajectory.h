#import <Foundation/Foundation.h>

/**
 * This struct is here to automatically generate protobuf parsing
 * functions It is not to be used in platform code
 */
@interface YMKTrajectorySegmentMetadata : NSObject

@property (nonatomic, readonly) long long time;

@property (nonatomic, readonly) NSUInteger duration;


+ (nonnull YMKTrajectorySegmentMetadata *)trajectorySegmentMetadataWithTime:( long long)time
                                                                   duration:( NSUInteger)duration;


@end
