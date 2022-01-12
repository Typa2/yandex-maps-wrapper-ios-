#import <YandexMapsMobile/YMKDrivingAnnotation.h>
#import <YandexMapsMobile/YMKDrivingDirectionSigns.h>
#import <YandexMapsMobile/YMKDrivingLane.h>
#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKNavigationUpcomingEvent.h>

/**
 * :nodoc:
 */
@interface YMKAnnotationWithDistance : NSObject

@property (nonatomic, readonly, nonnull) YMKDrivingAnnotation *annotation;

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *distance;

@property (nonatomic, readonly, nonnull) YMKPolylinePosition *position;


+ (nonnull YMKAnnotationWithDistance *)annotationWithDistanceWithAnnotation:(nonnull YMKDrivingAnnotation *)annotation
                                                                   distance:(nonnull YMKLocalizedValue *)distance
                                                                   position:(nonnull YMKPolylinePosition *)position;


@end

@interface YMKAnnotation : NSObject

@property (nonatomic, readonly, nullable) NSArray<YMKAnnotationWithDistance *> *annotations;

@property (nonatomic, readonly, nullable) NSString *nextRoadName;

@property (nonatomic, readonly, nullable) NSArray<YMKNavigationUpcomingEvent *> *upcomingEvents;

@property (nonatomic, readonly, nullable) YMKDrivingLaneSign *laneSign;

@property (nonatomic, readonly, nullable) YMKDrivingDirectionSign *directionSign;

+ (nonnull YMKAnnotation *)annotationWithAnnotations:(nonnull NSArray<YMKAnnotationWithDistance *> *)annotations;

+ (nonnull YMKAnnotation *)annotationWithNextRoadName:(nonnull NSString *)nextRoadName;

+ (nonnull YMKAnnotation *)annotationWithUpcomingEvents:(nonnull NSArray<YMKNavigationUpcomingEvent *> *)upcomingEvents;

+ (nonnull YMKAnnotation *)annotationWithLaneSign:(nonnull YMKDrivingLaneSign *)laneSign;

+ (nonnull YMKAnnotation *)annotationWithDirectionSign:(nonnull YMKDrivingDirectionSign *)directionSign;

@end

