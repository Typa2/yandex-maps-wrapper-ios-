#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKGuidanceAnnotatedEventTag) {
    /**
     * Temporary issues
     */
    YMKGuidanceAnnotatedEventTagReconstruction,
    YMKGuidanceAnnotatedEventTagAccident,
    /**
     * Potentially dangerous zones
     */
    YMKGuidanceAnnotatedEventTagDanger,
    YMKGuidanceAnnotatedEventTagSchool,
    YMKGuidanceAnnotatedEventTagOvertakingDanger,
    YMKGuidanceAnnotatedEventTagPedestrianDanger,
    YMKGuidanceAnnotatedEventTagCrossRoadDanger,
    /**
     * Traffic code control tags
     */
    YMKGuidanceAnnotatedEventTagLaneControl,
    YMKGuidanceAnnotatedEventTagRoadMarkingControl,
    YMKGuidanceAnnotatedEventTagCrossRoadControl,
    YMKGuidanceAnnotatedEventTagMobileControl,
    YMKGuidanceAnnotatedEventTagSpeedControl
};
