#import <YandexMapsMobile/YMKDrivingAnnotationLang.h>
#import <YandexMapsMobile/YMKLocationLocationManager.h>

/// :nodoc:
/**
 * :nodoc:
 */
@interface YMKNavigationOptions : NSObject

/**
 * The 'avoidTolls' option instructs the router to return routes that
 * avoid tolls, when possible.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *avoidTolls;

/**
 * Set the annotation language.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *annotationLanguage;

/**
 * Guide will use the given Location manager as source. You can pass
 * only instance of location manager or location simulator.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, strong, nullable) YMKLocationManager *locationManager;

/**
 * Enables/Disables alternatives suggestion while guiding. Enabled by
 * default.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *enableAlternatives;

+ (nonnull YMKNavigationOptions *)navigationOptionsWithAvoidTolls:(nullable NSNumber *)avoidTolls
                                               annotationLanguage:(nullable NSNumber *)annotationLanguage
                                                  locationManager:(nullable YMKLocationManager *)locationManager
                                               enableAlternatives:(nullable NSNumber *)enableAlternatives;


@end
