#import <YandexMapsMobile/YMKBicycleConstruction.h>
#import <YandexMapsMobile/YMKBicycleTrafficType.h>
#import <YandexMapsMobile/YMKGeometry.h>

@class YMKBicycleConstructionSegment;
@class YMKBicycleFlags;
@class YMKBicycleLeg;
@class YMKBicycleRestrictedEntry;
@class YMKBicycleSection;
@class YMKBicycleTrafficTypeSegment;
@class YMKBicycleViaPoint;
@class YMKBicycleWayPoint;
@class YMKBicycleWeight;

/**
 * Describes part of bicycle path with the same construction.
 */
@interface YMKBicycleConstructionSegment : NSObject

@property (nonatomic, readonly) YMKBicycleConstructionID construction;

@property (nonatomic, readonly, nonnull) YMKSubpolyline *subpolyline;


+ (nonnull YMKBicycleConstructionSegment *)constructionSegmentWithConstruction:( YMKBicycleConstructionID)construction
                                                                   subpolyline:(nonnull YMKSubpolyline *)subpolyline;


@end

/**
 * Describes part of bicycle path with the same traffic type.
 */
@interface YMKBicycleTrafficTypeSegment : NSObject

@property (nonatomic, readonly) YMKBicycleTrafficTypeID trafficType;

@property (nonatomic, readonly, nonnull) YMKSubpolyline *subpolyline;


+ (nonnull YMKBicycleTrafficTypeSegment *)trafficTypeSegmentWithTrafficType:( YMKBicycleTrafficTypeID)trafficType
                                                                subpolyline:(nonnull YMKSubpolyline *)subpolyline;


@end

/**
 * Bicycle route.
 */
@interface YMKBicycleRoute : NSObject
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
 * Polyline with geometry of the route.
 */
@property (nonatomic, readonly, nonnull) YMKPolyline *geometry;
/**
 * Specific properties of the route.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKBicycleFlags *flags;
/**
 * List of specific constructions along the bicycle path, such as stairs
 * or crossings. See YMKBicycleConstructionID for a complete list of
 * constructions. YMKBicycleConstructionSegment::subpolyline fields of
 * all segments cover the entire {link Route#geometry()}.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleConstructionSegment *> *constructions;
/**
 * List of traffic types (YMKBicycleTrafficTypeID) along the path.
 * Traffic type for an edge means who the road is designed for,  such as
 * pedestrians or cyclists. See YMKBicycleTrafficTypeID for a complete
 * list of types. Fields YMKBicycleTrafficTypeSegment::subpolyline of
 * all segments cover whole {link Route#geometry()}
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleTrafficTypeSegment *> *trafficTypes;
/**
 * List of restricted entries with their positions along the path.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleRestrictedEntry *> *restrictedEntries;
/**
 * List of via points on the path. See YMKBicycleViaPoint for details
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleViaPoint *> *viaPoints;
/**
 * List of waypoints on the route. See YMKBicycleWayPoint for details.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKBicycleWayPoint *> *wayPoints;

@end
