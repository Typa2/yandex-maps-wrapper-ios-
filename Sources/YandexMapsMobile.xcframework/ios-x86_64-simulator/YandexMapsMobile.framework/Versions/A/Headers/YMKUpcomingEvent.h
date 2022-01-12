#import <YandexMapsMobile/YMKDrivingRoute.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKSpeedStatus) {
    /**
     * Speed limit is not exceeded
     */
    YMKSpeedStatusBelowLimit,
    /**
     * Speed limit exceeded
     */
    YMKSpeedStatusStrictLimitExceeded,
    /**
     * Speed limit exceeded by tolerance
     */
    YMKSpeedStatusTolerantLimitExceeded
};

/**
 * :nodoc:
 */
@interface YMKUpcomingEvent : NSObject

@property (nonatomic, readonly, nonnull) YMKDrivingEvent *event;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *speedStatus;

@property (nonatomic, readonly) BOOL annotatingNow;


+ (nonnull YMKUpcomingEvent *)upcomingEventWithEvent:(nonnull YMKDrivingEvent *)event
                                         speedStatus:(nullable NSNumber *)speedStatus
                                       annotatingNow:( BOOL)annotatingNow;


@end
