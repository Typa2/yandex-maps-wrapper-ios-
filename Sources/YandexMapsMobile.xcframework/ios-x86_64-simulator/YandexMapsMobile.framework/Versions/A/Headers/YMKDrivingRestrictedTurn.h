#import <YandexMapsMobile/YMKGeometry.h>

@interface YMKDrivingRestrictedTurn : NSObject

@property (nonatomic, readonly, nonnull) YMKPolylinePosition *position;


+ (nonnull YMKDrivingRestrictedTurn *)restrictedTurnWithPosition:(nonnull YMKPolylinePosition *)position;


@end
