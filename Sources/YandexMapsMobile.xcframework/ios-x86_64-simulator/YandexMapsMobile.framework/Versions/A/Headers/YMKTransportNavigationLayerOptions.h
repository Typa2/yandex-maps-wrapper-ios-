#import <YandexMapsMobile/YMKTransportAnnotator.h>
#import <YandexMapsMobile/YMKTransportCamera.h>
#import <YandexMapsMobile/YMKTransportNavigation.h>

/// :nodoc:
/**
 * :nodoc:
 */
@interface YMKTransportNavigationLayerOptions : NSObject

@property (nonatomic, strong, nonnull) YMKTransportAnnotator *annotator;

@property (nonatomic, strong, nonnull) YMKTransportNavigation *navigation;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, strong, nullable) YMKTransportCamera *camera;

+ (nonnull YMKTransportNavigationLayerOptions *)navigationLayerOptionsWithAnnotator:(nonnull YMKTransportAnnotator *)annotator
                                                                         navigation:(nonnull YMKTransportNavigation *)navigation
                                                                             camera:(nullable YMKTransportCamera *)camera;


@end
