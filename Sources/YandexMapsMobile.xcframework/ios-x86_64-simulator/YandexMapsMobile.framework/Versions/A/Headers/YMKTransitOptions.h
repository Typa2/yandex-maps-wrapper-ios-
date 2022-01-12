#import <YandexMapsMobile/YMKOptions.h>

/**
 * Types which are allowed to be used in filters.
 */
typedef NS_OPTIONS(NSUInteger, YMKFilterVehicleTypes) {
    YMKFilterVehicleTypesNone = 0,
    YMKFilterVehicleTypesBus = 1 << 0,
    YMKFilterVehicleTypesMinibus = 1 << 1,
    YMKFilterVehicleTypesRailway = 1 << 2,
    YMKFilterVehicleTypesSuburban = 1 << 3,
    YMKFilterVehicleTypesTramway = 1 << 4,
    YMKFilterVehicleTypesTrolleybus = 1 << 5,
    YMKFilterVehicleTypesUnderground = 1 << 6
};

/**
 * User-defined options, like time options and filter options.
 */
@interface YMKTransitOptions : NSObject

/**
 * Transport types that the router will avoid. The value should be one
 * of YMKFilterVehicleTypes, or their bitwise 'OR' combination.
 */
@property (nonatomic, assign) YMKFilterVehicleTypes avoid;

/**
 * Desired departure/arrival time settings. Empty YMKTimeOptions for
 * requests that are not time-dependent.
 */
@property (nonatomic, strong, nonnull) YMKTimeOptions *timeOptions;

+ (nonnull YMKTransitOptions *)transitOptionsWithAvoid:( YMKFilterVehicleTypes)avoid
                                           timeOptions:(nonnull YMKTimeOptions *)timeOptions;


@end
