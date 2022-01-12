#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKGeometry.h>

@interface YMKDrivingInternalRouteUtils : NSObject

+ (NSArray *)getRequestPointsAfterPosition:(YMKPolylinePosition *)position
                                     route:(YMKDrivingRoute *)route;

+ (YMKDrivingRoute *)dropRouteViaPointsWithRoute:(YMKDrivingRoute *)route;

+ (NSArray *)filterRoutesBySharingWithRoutes:(NSArray *)routes
                                   fromIndex:(NSUInteger)fromIndex;

@end

