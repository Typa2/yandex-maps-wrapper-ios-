#import <YandexMapsMobile/YMKLocalizedValue.h>

@class YMKSpeedLimits;
@class YMKSpeedLimitsRules;
@class YMKSpeedingPolicy;

/**
 * :nodoc:
 */
@interface YMKSpeedLimits : NSObject

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *urban;

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *rural;

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *expressway;


+ (nonnull YMKSpeedLimits *)speedLimitsWithUrban:(nonnull YMKLocalizedValue *)urban
                                           rural:(nonnull YMKLocalizedValue *)rural
                                      expressway:(nonnull YMKLocalizedValue *)expressway;


@end

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKSpeedLimitsRulesType) {
    YMKSpeedLimitsRulesTypeAbsolute,
    YMKSpeedLimitsRulesTypeRelative
};

/**
 * :nodoc:
 */
@interface YMKSpeedLimitsRules : NSObject

@property (nonatomic, readonly) YMKSpeedLimitsRulesType urban;

@property (nonatomic, readonly) YMKSpeedLimitsRulesType rural;

@property (nonatomic, readonly) YMKSpeedLimitsRulesType expressway;


+ (nonnull YMKSpeedLimitsRules *)speedLimitsRulesWithUrban:( YMKSpeedLimitsRulesType)urban
                                                     rural:( YMKSpeedLimitsRulesType)rural
                                                expressway:( YMKSpeedLimitsRulesType)expressway;


@end

/**
 * :nodoc:
 */
@interface YMKSpeedingPolicy : NSObject
/**
 * E.g. for Russia 60/90/110 km/h
 */
@property (nonatomic, readonly, nonnull) YMKSpeedLimits *legalSpeedLimits;

/**
 * E.g. ratio = 0.8 and current speed limit is 60 km/h - for Russia:
 * enforcement tolerance is 20 km/h for all speed limits => we should
 * start warning the user when current speed > 60 + 20 * 0.8 = 76 km/h -
 * for Turkey: enforcement tolerance is 10 percent over the speed limit
 * => we should start warning the user when current speed > 60 + 60 *
 * 0.1 * 0.8 = 64.8 km/h
 */
- (nonnull YMKSpeedLimits *)customSpeedLimitsWithToleranceRatio:(double)toleranceRatio;
@property (nonatomic, readonly, nonnull) YMKSpeedLimitsRules *speedLimitsRules;
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *region;

@end

/// :nodoc:
@interface YMKSpeedingPolicyFactory : NSObject

/**
 * :nodoc:
 *
 *
 * Remark:
 * @param region has optional type, it may be uninitialized.
 */
+ (nonnull YMKSpeedingPolicy *)createSpeedingPolicyWithRegion:(nullable NSNumber *)region;

@end

