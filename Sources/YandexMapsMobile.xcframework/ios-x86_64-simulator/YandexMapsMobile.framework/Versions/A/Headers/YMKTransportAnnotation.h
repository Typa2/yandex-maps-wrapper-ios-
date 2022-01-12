#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKTransportAction.h>

/**
 * :nodoc:
 * The annotation that is displayed on the map.
 */
@interface YMKTransportAnnotation : NSObject

/**
 * Pedestrian action.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *action;

/**
 * Distance before/current action
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKLocalizedValue *distance;

/**
 * Position of action
 */
@property (nonatomic, readonly, nonnull) YMKPolylinePosition *position;

/**
 * Street name to display.
 */
@property (nonatomic, readonly, nonnull) NSString *streetName;


+ (nonnull YMKTransportAnnotation *)annotationWithAction:(nullable NSNumber *)action
                                                distance:(nullable YMKLocalizedValue *)distance
                                                position:(nonnull YMKPolylinePosition *)position
                                              streetName:(nonnull NSString *)streetName;


@end
