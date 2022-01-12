#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YRTErrors.h>

@class YMKTaxiRideInfo;
@class YMKTaxiRideInfoSession;

/**
 * :nodoc:
 */
typedef void(^YMKTaxiRideInfoSessionResponseHandler)(
    YMKTaxiRideInfo * _Nullable rideInfo,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Session for requesting taxi ride info
 */
@interface YMKTaxiRideInfoSession : NSObject

/**
 * Error can be one of the following: YRTNotFoundError,
 * {@runtime.network.NetworkError}, YRTRemoteError
 */
- (void)retryWithResponseHandler:(nonnull YMKTaxiRideInfoSessionResponseHandler)responseHandler;

- (void)cancel;

@end

/**
 * :nodoc:
 */
@interface YMKTaxiManager : NSObject

/**
 * Begin async ride info request
 *
 * @param startPoint to request information
 * @param endPoint to request information
 * @param rideInfoListener listener for result or error
 */
- (nonnull YMKTaxiRideInfoSession *)requestRideInfoWithStartPoint:(nonnull YMKPoint *)startPoint
                                                         endPoint:(nonnull YMKPoint *)endPoint
                                                  responseHandler:(nonnull YMKTaxiRideInfoSessionResponseHandler)responseHandler;

@end
