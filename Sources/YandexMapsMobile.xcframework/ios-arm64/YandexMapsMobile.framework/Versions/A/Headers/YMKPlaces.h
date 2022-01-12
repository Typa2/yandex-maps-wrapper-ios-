#import <YandexMapsMobile/YMKMapWindow.h>
#import <YandexMapsMobile/YMKPanoramaLayer.h>
#import <YandexMapsMobile/YMKPanoramaPlayer.h>
#import <YandexMapsMobile/YMKPhotosPhotosManager.h>
#import <YandexMapsMobile/YMKService.h>

@class YRTView;

@interface YMKPlaces : NSObject

/**
 * Creates a service that allows to find a panorama closest to the
 * chosen point.
 */
- (nonnull YMKPanoramaService *)createPanoramaService;

/**
 * Creates a layer representing where panoramas are available.
 */
- (nonnull YMKPanoramaLayer *)createPanoramaLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow;

/**
 * Creates an internal "window" object needed to show the panorama
 * viewer.
 *
 * Do not call this method - it is for internal use only. To open the
 * panorama viewer, please use the corresponding panorama "view" object.
 */
- (nonnull YMKPanoramaPlayer *)createPanoramaPlayerWithPlatformView:(nonnull YRTView *)platformView;

/**
 * :nodoc:
 * Creates a manager that retrieves photos for specified businesses.
 */
- (nonnull YMKPhotosManager *)createPhotosManager;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
