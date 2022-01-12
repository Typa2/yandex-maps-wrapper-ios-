#import <YandexMapsMobile/YMKDrivingAnnotation.h>
#import <YandexMapsMobile/YMKDrivingDirectionSigns.h>
#import <YandexMapsMobile/YMKDrivingFordCrossing.h>
#import <YandexMapsMobile/YMKDrivingJamSegment.h>
#import <YandexMapsMobile/YMKDrivingLane.h>
#import <YandexMapsMobile/YMKDrivingRestrictedForTrucks.h>
#import <YandexMapsMobile/YMKDrivingRuggedRoad.h>
#import <YandexMapsMobile/YMKDrivingStandingSegment.h>
#import <YandexMapsMobile/YMKDrivingTollRoad.h>
#import <YandexMapsMobile/YMKDrivingVehicleRestrictions.h>
#import <YandexMapsMobile/YMKDrivingWeight.h>

@interface YMKDrivingRawSpeedLimit : NSObject

@property (nonatomic, readonly) NSInteger count;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *speed;


+ (nonnull YMKDrivingRawSpeedLimit *)rawSpeedLimitWithCount:( NSInteger)count
                                                      speed:(nullable NSNumber *)speed;


@end

@interface YMKDrivingRawSpeedLimits : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRawSpeedLimit *> *speedLimits;


+ (nonnull YMKDrivingRawSpeedLimits *)rawSpeedLimitsWithSpeedLimits:(nonnull NSArray<YMKDrivingRawSpeedLimit *> *)speedLimits;


@end

@interface YMKDrivingRawAnnotationScheme : NSObject

@property (nonatomic, readonly) NSInteger count;

@property (nonatomic, readonly) YMKDrivingAnnotationSchemeID schemeId;


+ (nonnull YMKDrivingRawAnnotationScheme *)rawAnnotationSchemeWithCount:( NSInteger)count
                                                               schemeId:( YMKDrivingAnnotationSchemeID)schemeId;


@end

@interface YMKDrivingRawAnnotationSchemes : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRawAnnotationScheme *> *schemes;


+ (nonnull YMKDrivingRawAnnotationSchemes *)rawAnnotationSchemesWithSchemes:(nonnull NSArray<YMKDrivingRawAnnotationScheme *> *)schemes;


@end

@interface YMKDrivingRawLaneSign : NSObject

@property (nonatomic, readonly) NSUInteger position;

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingLane *> *lanes;


+ (nonnull YMKDrivingRawLaneSign *)rawLaneSignWithPosition:( NSUInteger)position
                                                     lanes:(nonnull NSArray<YMKDrivingLane *> *)lanes;


@end

@interface YMKDrivingRawRestrictedEntry : NSObject

@property (nonatomic, readonly) NSUInteger position;


+ (nonnull YMKDrivingRawRestrictedEntry *)rawRestrictedEntryWithPosition:( NSUInteger)position;


@end

@interface YMKDrivingRawTrafficLight : NSObject

@property (nonatomic, readonly) NSUInteger position;


+ (nonnull YMKDrivingRawTrafficLight *)rawTrafficLightWithPosition:( NSUInteger)position;


@end

@interface YMKDrivingRawRestrictedTurn : NSObject

@property (nonatomic, readonly) NSUInteger position;


+ (nonnull YMKDrivingRawRestrictedTurn *)rawRestrictedTurnWithPosition:( NSUInteger)position;


@end

@interface YMKDrivingRawLaneSigns : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRawLaneSign *> *laneSigns;


+ (nonnull YMKDrivingRawLaneSigns *)rawLaneSignsWithLaneSigns:(nonnull NSArray<YMKDrivingRawLaneSign *> *)laneSigns;


@end

@interface YMKDrivingRawDirectionSign : NSObject

@property (nonatomic, readonly) NSUInteger position;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *direction;

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingDirectionSignItem *> *items;


+ (nonnull YMKDrivingRawDirectionSign *)rawDirectionSignWithPosition:( NSUInteger)position
                                                           direction:(nullable NSNumber *)direction
                                                               items:(nonnull NSArray<YMKDrivingDirectionSignItem *> *)items;


@end

@interface YMKDrivingRawDirectionSigns : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRawDirectionSign *> *signs;


+ (nonnull YMKDrivingRawDirectionSigns *)rawDirectionSignsWithSigns:(nonnull NSArray<YMKDrivingRawDirectionSign *> *)signs;


@end

@interface YMKDrivingRawRestrictedEntries : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRawRestrictedEntry *> *restrictedEntries;


+ (nonnull YMKDrivingRawRestrictedEntries *)rawRestrictedEntriesWithRestrictedEntries:(nonnull NSArray<YMKDrivingRawRestrictedEntry *> *)restrictedEntries;


@end

@interface YMKDrivingRawTrafficLights : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRawTrafficLight *> *trafficLights;


+ (nonnull YMKDrivingRawTrafficLights *)rawTrafficLightsWithTrafficLights:(nonnull NSArray<YMKDrivingRawTrafficLight *> *)trafficLights;


@end

@interface YMKDrivingRawRestrictedTurns : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRawRestrictedTurn *> *restrictedTurns;


+ (nonnull YMKDrivingRawRestrictedTurns *)rawRestrictedTurnsWithRestrictedTurns:(nonnull NSArray<YMKDrivingRawRestrictedTurn *> *)restrictedTurns;


@end

@interface YMKDrivingRawJams : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingJamSegment *> *segments;


+ (nonnull YMKDrivingRawJams *)rawJamsWithSegments:(nonnull NSArray<YMKDrivingJamSegment *> *)segments;


@end

@interface YMKDrivingRawTollRoads : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingTollRoad *> *tollRoads;


+ (nonnull YMKDrivingRawTollRoads *)rawTollRoadsWithTollRoads:(nonnull NSArray<YMKDrivingTollRoad *> *)tollRoads;


@end

@interface YMKDrivingRawRuggedRoads : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRuggedRoad *> *ruggedRoads;


+ (nonnull YMKDrivingRawRuggedRoads *)rawRuggedRoadsWithRuggedRoads:(nonnull NSArray<YMKDrivingRuggedRoad *> *)ruggedRoads;


@end

@interface YMKDrivingRawFordCrossings : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingFordCrossing *> *fordCrossings;


+ (nonnull YMKDrivingRawFordCrossings *)rawFordCrossingsWithFordCrossings:(nonnull NSArray<YMKDrivingFordCrossing *> *)fordCrossings;


@end

@interface YMKDrivingRawStandingSegments : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingStandingSegment *> *standingSegments;


+ (nonnull YMKDrivingRawStandingSegments *)rawStandingSegmentsWithStandingSegments:(nonnull NSArray<YMKDrivingStandingSegment *> *)standingSegments;


@end

@interface YMKDrivingRawRestrictedForTrucksRoads : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRestrictedForTrucksRoad *> *restrictedForTrucksRoads;


+ (nonnull YMKDrivingRawRestrictedForTrucksRoads *)rawRestrictedForTrucksRoadsWithRestrictedForTrucksRoads:(nonnull NSArray<YMKDrivingRestrictedForTrucksRoad *> *)restrictedForTrucksRoads;


@end

@interface YMKDrivingRawVehicleRestrictions : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingRoadVehicleRestriction *> *roadRestrictions;

@property (nonatomic, readonly, nonnull) NSArray<YMKDrivingManoeuvreVehicleRestriction *> *manoeuvreRestrictions;


+ (nonnull YMKDrivingRawVehicleRestrictions *)rawVehicleRestrictionsWithRoadRestrictions:(nonnull NSArray<YMKDrivingRoadVehicleRestriction *> *)roadRestrictions
                                                                   manoeuvreRestrictions:(nonnull NSArray<YMKDrivingManoeuvreVehicleRestriction *> *)manoeuvreRestrictions;


@end

@interface YMKDrivingRawSectionMetadata : NSObject

@property (nonatomic, readonly) NSUInteger legIndex;

@property (nonatomic, readonly, nonnull) YMKDrivingWeight *weight;

@property (nonatomic, readonly, nonnull) YMKDrivingAnnotation *annotation;

@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> *viaPointPositions;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawSpeedLimits *speedLimits;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawAnnotationSchemes *annotationSchemes;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawLaneSigns *laneSigns;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawDirectionSigns *directionSigns;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawRestrictedEntries *restrictedEntries;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawTrafficLights *trafficLights;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawJams *jams;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawTollRoads *tollRoads;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawRuggedRoads *ruggedRoads;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawRestrictedTurns *restrictedTurns;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawStandingSegments *standingSegments;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawRestrictedForTrucksRoads *restrictedForTrucksRoads;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawVehicleRestrictions *vehicleRestrictions;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingRawFordCrossings *fordCrossings;


+ (nonnull YMKDrivingRawSectionMetadata *)rawSectionMetadataWithLegIndex:( NSUInteger)legIndex
                                                                  weight:(nonnull YMKDrivingWeight *)weight
                                                              annotation:(nonnull YMKDrivingAnnotation *)annotation
                                                       viaPointPositions:(nonnull NSArray<NSNumber *> *)viaPointPositions
                                                             speedLimits:(nullable YMKDrivingRawSpeedLimits *)speedLimits
                                                       annotationSchemes:(nullable YMKDrivingRawAnnotationSchemes *)annotationSchemes
                                                               laneSigns:(nullable YMKDrivingRawLaneSigns *)laneSigns
                                                          directionSigns:(nullable YMKDrivingRawDirectionSigns *)directionSigns
                                                       restrictedEntries:(nullable YMKDrivingRawRestrictedEntries *)restrictedEntries
                                                           trafficLights:(nullable YMKDrivingRawTrafficLights *)trafficLights
                                                                    jams:(nullable YMKDrivingRawJams *)jams
                                                               tollRoads:(nullable YMKDrivingRawTollRoads *)tollRoads
                                                             ruggedRoads:(nullable YMKDrivingRawRuggedRoads *)ruggedRoads
                                                         restrictedTurns:(nullable YMKDrivingRawRestrictedTurns *)restrictedTurns
                                                        standingSegments:(nullable YMKDrivingRawStandingSegments *)standingSegments
                                                restrictedForTrucksRoads:(nullable YMKDrivingRawRestrictedForTrucksRoads *)restrictedForTrucksRoads
                                                     vehicleRestrictions:(nullable YMKDrivingRawVehicleRestrictions *)vehicleRestrictions
                                                           fordCrossings:(nullable YMKDrivingRawFordCrossings *)fordCrossings;


@end
