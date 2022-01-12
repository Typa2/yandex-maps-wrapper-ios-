#import <YandexMapsMobile/YMKGeometry.h>

@interface YMKDrivingRestrictedForTrucksRoad : NSObject

@property (nonatomic, readonly, nonnull) YMKSubpolyline *position;


+ (nonnull YMKDrivingRestrictedForTrucksRoad *)restrictedForTrucksRoadWithPosition:(nonnull YMKSubpolyline *)position;


@end
