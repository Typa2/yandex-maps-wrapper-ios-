#import <YandexMapsMobile/YMKGeoObject.h>
#import <YandexMapsMobile/YMKGeometry.h>

@class YMKSearchViaBannerSession;

typedef void(^YMKSearchViaBannerSessionResponseHandler)(
    YMKGeoObject * _Nullable banner);

/**
 * :nodoc:
 * Session for requesting via banner for route.
 */
@interface YMKSearchViaBannerSession : NSObject

- (void)cancel;

@end

/**
 * :nodoc:
 * Allows to get via-point advertisement for the route.
 */
@interface YMKSearchViaBannerManager : NSObject

/**
 * Begins asynchronous request for via banner.
 *
 * @param route Route to request via banner advertisement for.
 * @param bannerListener Listener for result.
 */
- (nonnull YMKSearchViaBannerSession *)requestViaBannerWithRoute:(nonnull YMKPolyline *)route
                                                 responseHandler:(nonnull YMKSearchViaBannerSessionResponseHandler)responseHandler;

@end
