#import <YandexMapsMobile/YMKGeometry.h>

@interface YMKDrivingTollRoad : NSObject

@property (nonatomic, readonly, nonnull) YMKSubpolyline *position;


+ (nonnull YMKDrivingTollRoad *)tollRoadWithPosition:(nonnull YMKSubpolyline *)position;


@end
