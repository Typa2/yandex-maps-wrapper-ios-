#import <YandexMapsMobile/YMKLocation.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKGuidanceLocationClass) {
    YMKGuidanceLocationClassFine,
    YMKGuidanceLocationClassExtrapolated,
    /**
     * We haven't received a precise location for a long time.
     */
    YMKGuidanceLocationClassCoarse
};

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKGuidanceNeedCameraJump) {
    YMKGuidanceNeedCameraJumpYes,
    YMKGuidanceNeedCameraJumpNo
};

/**
 * :nodoc:
 */
@interface YMKGuidanceClassifiedLocation : NSObject

@property (nonatomic, readonly, nonnull) YMKLocation *location;

@property (nonatomic, readonly) YMKGuidanceLocationClass locationClass;

@property (nonatomic, readonly) YMKGuidanceNeedCameraJump needCameraJump;


+ (nonnull YMKGuidanceClassifiedLocation *)classifiedLocationWithLocation:(nonnull YMKLocation *)location
                                                            locationClass:( YMKGuidanceLocationClass)locationClass
                                                           needCameraJump:( YMKGuidanceNeedCameraJump)needCameraJump;


@end
