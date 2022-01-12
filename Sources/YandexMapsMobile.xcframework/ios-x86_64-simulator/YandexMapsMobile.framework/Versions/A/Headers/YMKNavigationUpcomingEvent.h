#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKSpeedLimitStatus.h>

/**
 * :nodoc:
 */
@interface YMKNavigationUpcomingEvent : NSObject

@property (nonatomic, readonly, nonnull) YMKDrivingEvent *event;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *speedLimitStatus;


+ (nonnull YMKNavigationUpcomingEvent *)upcomingEventWithEvent:(nonnull YMKDrivingEvent *)event
                                              speedLimitStatus:(nullable NSNumber *)speedLimitStatus;


@end
