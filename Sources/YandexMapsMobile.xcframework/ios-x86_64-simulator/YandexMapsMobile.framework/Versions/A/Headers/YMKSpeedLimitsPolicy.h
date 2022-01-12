#import <YandexMapsMobile/YMKLocalizedValue.h>

@class YMKNavigationSpeedLimits;
@class YMKNavigationSpeedLimitsRules;

/**
 * :nodoc:
 */
@interface YMKNavigationSpeedLimits : NSObject

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *urban;

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *rural;

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *expressway;


+ (nonnull YMKNavigationSpeedLimits *)navigationSpeedLimitsWithUrban:(nonnull YMKLocalizedValue *)urban
                                                               rural:(nonnull YMKLocalizedValue *)rural
                                                          expressway:(nonnull YMKLocalizedValue *)expressway;


@end

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKNavigationSpeedLimitsRulesType) {
    YMKNavigationSpeedLimitsRulesTypeAbsolute,
    YMKNavigationSpeedLimitsRulesTypeRelative
};

/**
 * :nodoc:
 */
@interface YMKNavigationSpeedLimitsRules : NSObject

@property (nonatomic, readonly) YMKNavigationSpeedLimitsRulesType urban;

@property (nonatomic, readonly) YMKNavigationSpeedLimitsRulesType rural;

@property (nonatomic, readonly) YMKNavigationSpeedLimitsRulesType expressway;


+ (nonnull YMKNavigationSpeedLimitsRules *)navigationSpeedLimitsRulesWithUrban:( YMKNavigationSpeedLimitsRulesType)urban
                                                                         rural:( YMKNavigationSpeedLimitsRulesType)rural
                                                                    expressway:( YMKNavigationSpeedLimitsRulesType)expressway;


@end

/**
 * :nodoc:
 */
@interface YMKSpeedLimitsPolicy : NSObject
/**
 * E.g. for Russia 60/90/110 km/h
 */
@property (nonatomic, readonly, nonnull) YMKNavigationSpeedLimits *legalSpeedLimits;

/**
 * E.g. ratio = 0.8 and current speed limit is 60 km/h - for Russia:
 * enforcement tolerance is 20 km/h for all speed limits => we should
 * start warning the user when current speed > 60 + 20 * 0.8 = 76 km/h -
 * for Turkey: enforcement tolerance is 10 percent over the speed limit
 * => we should start warning the user when current speed > 60 + 60 *
 * 0.1 * 0.8 = 64.8 km/h
 */
- (nonnull YMKNavigationSpeedLimits *)customSpeedLimitsWithToleranceRatio:(double)toleranceRatio;
@property (nonatomic, readonly, nonnull) YMKNavigationSpeedLimitsRules *speedLimitsRules;

@end
