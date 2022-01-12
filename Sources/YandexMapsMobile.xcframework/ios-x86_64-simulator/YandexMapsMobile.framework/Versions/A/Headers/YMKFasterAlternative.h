#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKLocalizedValue.h>

/**
 * :nodoc:
 */
@interface YMKFasterAlternative : NSObject
@property (nonatomic, readonly, nonnull) YMKLocalizedValue *timeDifference;
@property (nonatomic, readonly, readonly, nonnull) YMKDrivingRoute *route;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
