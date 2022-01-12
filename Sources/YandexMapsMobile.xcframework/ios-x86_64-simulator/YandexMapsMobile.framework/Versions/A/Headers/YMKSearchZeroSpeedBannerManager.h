#import <YandexMapsMobile/YMKGeoObject.h>
#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKPoint.h>

@class YMKSearchBillboardObjectMetadata;
@class YMKSearchZeroSpeedBannerSession;

typedef void(^YMKSearchZeroSpeedBannerSessionResponseHandler)(
    YMKGeoObject * _Nullable banner);

/**
 * :nodoc:
 * Session to be notified when a zero speed banner is received or no
 * banner is available.
 */
@interface YMKSearchZeroSpeedBannerSession : NSObject

- (void)cancel;

@end

/**
 * :nodoc:
 * Allows to get a zero speed banner based on position.
 */
@interface YMKSearchZeroSpeedBannerManager : NSObject

/**
 * Initiates request with current position and route (if any) to receive
 * a zero speed banner. After receiving a banner or no banner is
 * available. session callback will be called.
 *
 * @param point geoposition of user; may be off the route
 * @param route Set the route geometry to use in targeting. Route is not
 * mandatory to receive banners and should be set if exists.
 * @param bannerListener Listener for result.
 *
 * Remark:
 * @param route has optional type, it may be uninitialized.
 */
- (nonnull YMKSearchZeroSpeedBannerSession *)requestZeroSpeedBannerWithPoint:(nonnull YMKPoint *)point
                                                                       route:(nullable YMKPolyline *)route
                                                             responseHandler:(nonnull YMKSearchZeroSpeedBannerSessionResponseHandler)responseHandler;

@end
