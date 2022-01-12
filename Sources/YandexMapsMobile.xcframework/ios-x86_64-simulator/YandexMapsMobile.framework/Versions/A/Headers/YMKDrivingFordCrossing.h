#import <YandexMapsMobile/YMKGeometry.h>

@interface YMKDrivingFordCrossing : NSObject

@property (nonatomic, readonly, nonnull) YMKSubpolyline *position;


+ (nonnull YMKDrivingFordCrossing *)fordCrossingWithPosition:(nonnull YMKSubpolyline *)position;


@end
