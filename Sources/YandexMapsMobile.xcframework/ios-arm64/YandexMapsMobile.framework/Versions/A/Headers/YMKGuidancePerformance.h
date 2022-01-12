#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKGuidancePerformanceMonitorMetricTag) {
    YMKGuidancePerformanceMonitorMetricTagEmitFrameDuration,
    YMKGuidancePerformanceMonitorMetricTagLocationProcessingTime
};

/**
 * :nodoc:
 */
@interface YMKGuidancePerformanceMonitor : NSObject

/**
 * Accepts percents as float in [0, 1] Returns quantilies in the same
 * order
 */
- (nonnull NSArray<NSNumber *> *)quantilesWithPercents:(nonnull NSArray<NSNumber *> *)percents;

/**
 * Starts aggregating values. If monitor was previously stopped, it
 * clears previously collected values
 */
- (void)start;

/**
 * Stops adding values
 */
- (void)stop;

/**
 * Returns tag for which values are collected
 */
- (YMKGuidancePerformanceMonitorMetricTag)tag;

@end
