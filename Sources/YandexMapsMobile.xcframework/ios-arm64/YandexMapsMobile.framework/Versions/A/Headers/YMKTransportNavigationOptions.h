#import <YandexMapsMobile/YMKLocationLocationManager.h>
#import <YandexMapsMobile/YMKTransportAnnotationLang.h>

/// :nodoc:
/**
 * :nodoc:
 */
@interface YMKTransportNavigationOptions : NSObject

@property (nonatomic, assign) NSInteger maxRoutes;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *language;

@property (nonatomic, strong, nonnull) YMKLocationManager *locationManager;

+ (nonnull YMKTransportNavigationOptions *)navigationOptionsWithMaxRoutes:( NSInteger)maxRoutes
                                                                 language:(nullable NSNumber *)language
                                                          locationManager:(nonnull YMKLocationManager *)locationManager;


@end
