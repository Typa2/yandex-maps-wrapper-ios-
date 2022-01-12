#import <YandexMapsMobile/YMKGeometry.h>

@interface YMKDrivingRuggedRoad : NSObject

@property (nonatomic, readonly, nonnull) YMKSubpolyline *position;


+ (nonnull YMKDrivingRuggedRoad *)ruggedRoadWithPosition:(nonnull YMKSubpolyline *)position;


@end
