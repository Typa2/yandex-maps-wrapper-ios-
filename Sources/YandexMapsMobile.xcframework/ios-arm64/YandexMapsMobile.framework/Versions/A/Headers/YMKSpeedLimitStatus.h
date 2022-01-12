#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKSpeedLimitStatus) {
    /**
     * Speed limit is not exceeded
     */
    YMKSpeedLimitStatusBelowLimit,
    /**
     * Speed limit exceeded
     */
    YMKSpeedLimitStatusStrictLimitExceeded,
    /**
     * Speed limit exceeded by tolerance
     */
    YMKSpeedLimitStatusTolerantLimitExceeded
};
