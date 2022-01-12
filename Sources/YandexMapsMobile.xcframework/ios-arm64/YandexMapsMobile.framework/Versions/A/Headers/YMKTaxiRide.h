#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKTaxiMoney.h>

/**
 * :nodoc:
 */
@interface YMKTaxiRideOption : NSObject

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *waitingTime;

@property (nonatomic, readonly, nonnull) YMKTaxiMoney *cost;

@property (nonatomic, readonly) BOOL isMinPrice;


+ (nonnull YMKTaxiRideOption *)rideOptionWithWaitingTime:(nonnull YMKLocalizedValue *)waitingTime
                                                    cost:(nonnull YMKTaxiMoney *)cost
                                              isMinPrice:( BOOL)isMinPrice;


@end

/**
 * :nodoc:
 */
@interface YMKTaxiRideInfo : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKTaxiRideOption *> *rideOptions;


+ (nonnull YMKTaxiRideInfo *)rideInfoWithRideOptions:(nonnull NSArray<YMKTaxiRideOption *> *)rideOptions;


@end
