#import <YandexMapsMobile/YMKGeometry.h>

@interface YMKDrivingStandingSegment : NSObject

@property (nonatomic, readonly, nonnull) YMKSubpolyline *position;


+ (nonnull YMKDrivingStandingSegment *)standingSegmentWithPosition:(nonnull YMKSubpolyline *)position;


@end
