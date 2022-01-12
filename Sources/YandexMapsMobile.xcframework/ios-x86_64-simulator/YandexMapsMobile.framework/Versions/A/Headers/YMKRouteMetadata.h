#import <YandexMapsMobile/YMKBicycleFlags.h>
#import <YandexMapsMobile/YMKBicycleIntermediatePoints.h>
#import <YandexMapsMobile/YMKBicycleLeg.h>
#import <YandexMapsMobile/YMKBicycleRestrictedEntry.h>
#import <YandexMapsMobile/YMKBicycleRoute.h>
#import <YandexMapsMobile/YMKBicycleSection.h>
#import <YandexMapsMobile/YMKBicycleTrafficType.h>
#import <YandexMapsMobile/YMKBicycleWeight.h>

/**
 * :nodoc:
 */
@interface YMKRouteMetadata : NSObject

/**
 * Quantitative characteristics of the route.
 */
@property (nonatomic, readonly, nonnull) YMKBicycleWeight *weight;

/**
 * Sections of the route.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleSection *> *sections;

/**
 * Legs of the route.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleLeg *> *legs;

/**
 * Specific properties of the route.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKBicycleFlags *flags;

/**
 * @brief List of traffic types along the path. Traffic type for an edge
 * refers to who is allowed to travel along the edge (pedestrians,
 * bicycles, or cars). See YMKBicycleTrafficTypeID for the complete list
 * of types
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleTrafficTypeSegment *> *trafficTypes;

/**
 * List of constructions along the bicycle path.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleConstructionSegment *> *constructions;

/**
 * List of specific points (like gates) with their positions along the
 * path.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleRestrictedEntry *> *restrictedEntries;

/**
 * List of route waypoints. See YMKBicycleWayPoint for details
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleWayPoint *> *wayPoints;


+ (nonnull YMKRouteMetadata *)routeMetadataWithWeight:(nonnull YMKBicycleWeight *)weight
                                             sections:(nonnull NSArray<YMKBicycleSection *> *)sections
                                                 legs:(nonnull NSArray<YMKBicycleLeg *> *)legs
                                                flags:(nullable YMKBicycleFlags *)flags
                                         trafficTypes:(nonnull NSArray<YMKBicycleTrafficTypeSegment *> *)trafficTypes
                                        constructions:(nonnull NSArray<YMKBicycleConstructionSegment *> *)constructions
                                    restrictedEntries:(nonnull NSArray<YMKBicycleRestrictedEntry *> *)restrictedEntries
                                            wayPoints:(nonnull NSArray<YMKBicycleWayPoint *> *)wayPoints;


@end
