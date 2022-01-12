#import <YandexMapsMobile/YMKConstruction.h>
#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKMasstransitCommon.h>
#import <YandexMapsMobile/YMKMasstransitTransport.h>
#import <YandexMapsMobile/YMKMasstransitTravelEstimation.h>
#import <YandexMapsMobile/YMKMasstransitWayPoint.h>
#import <YandexMapsMobile/YMKMasstransitWeight.h>
#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKRestrictedEntry.h>
#import <YandexMapsMobile/YMKUriObjectMetadata.h>

@class YMKMasstransitConstructionSegment;
@class YMKMasstransitJams;
@class YMKMasstransitRoute;
@class YMKMasstransitRouteMetadata;
@class YMKMasstransitRouter;
@class YMKMasstransitSection;
@class YMKMasstransitSectionMetadata;
@class YMKMasstransitSectionMetadataSectionData;

/**
 * A listener to monitor changes to traffic jams on the route.
 */
@protocol YMKMasstransitRouteJamsListener <NSObject>

/**
 * Triggered when traffic jams are updated.
 */
- (void)onJamsUpdatedWithRoute:(nonnull YMKMasstransitRoute *)route;

/**
 * Triggered when traffic jams are outdated.
 */
- (void)onJamsOutdatedWithRoute:(nonnull YMKMasstransitRoute *)route;

@end

/**
 * Represents a 'wait until suitable tranport arrives' section of a
 * route.
 */
@interface YMKMasstransitWait : NSObject

/**
 * Dummy object.
 */
@property (nonatomic, readonly) NSUInteger dummy;


+ (nonnull YMKMasstransitWait *)waitWithDummy:( NSUInteger)dummy;


@end

/**
 * Describes part of pedestrian path with the same construction.
 */
@interface YMKMasstransitConstructionSegment : NSObject

@property (nonatomic, readonly) YMKPedestrianConstructionID construction;

@property (nonatomic, readonly, nonnull) YMKSubpolyline *subpolyline;


+ (nonnull YMKMasstransitConstructionSegment *)constructionSegmentWithConstruction:( YMKPedestrianConstructionID)construction
                                                                       subpolyline:(nonnull YMKSubpolyline *)subpolyline;


@end

/**
 * Represents a pedestrian section of a route.
 */
@interface YMKMasstransitWalk : NSObject

/**
 * Compressed information about pedestrian constructions along the
 * pedestrian path. YMKMasstransitConstructionSegment::subpolyline
 * fields of all segments cover the entire geometry of corresponding
 * section".
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitConstructionSegment *> *constructions;

/**
 * @brief List of pedestrian restricted entries with their coordinates
 * along the pedestrian path.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKRestrictedEntry *> *restrictedEntries;

/**
 * List of via points on the path. A via point is described by the index
 * of the point in the route geometry polyline.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> *viaPoints;


+ (nonnull YMKMasstransitWalk *)walkWithConstructions:(nonnull NSArray<YMKMasstransitConstructionSegment *> *)constructions
                                    restrictedEntries:(nonnull NSArray<YMKRestrictedEntry *> *)restrictedEntries
                                            viaPoints:(nonnull NSArray<NSNumber *> *)viaPoints;


@end

/**
 * Represents a transfer to another mass transit line. For example,
 * transfer from one underground line to another.
 */
@interface YMKMasstransitTransfer : NSObject

/**
 * Compressed information about pedestrian constructions along the
 * transfer path. YMKMasstransitConstructionSegment::subpolyline fields
 * of all segments cover the entire geometry of corresponding section".
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitConstructionSegment *> *constructions;


+ (nonnull YMKMasstransitTransfer *)transferWithConstructions:(nonnull NSArray<YMKMasstransitConstructionSegment *> *)constructions;


@end

/**
 * General information about a section of a route. The
 * YMKMasstransitSectionMetadata::data field describes the type of
 * section: wait, walk, transfer, or transport, and related data.
 * Related data can be set for walk and transfer sections. This data is
 * a vector of construction types of corresponding geometry segments.
 */
@interface YMKMasstransitSectionMetadata : NSObject

/**
 * Contains the route traveling time, distance of the walking part, and
 * the number of transfers.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitWeight *weight;

/**
 * @brief Contains information that is specific to a section type: wait,
 * walk, transfer, or ride transport.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitSectionMetadataSectionData *data;

/**
 * Arrival and departure time estimations. This field is set only for
 * time-dependent routes.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitTravelEstimation *estimation;

/**
 * Part of the route polyline for the route leg. A leg is a part of the
 * route between two consecutive waypoints.
 */
@property (nonatomic, readonly) NSUInteger legIndex;


+ (nonnull YMKMasstransitSectionMetadata *)sectionMetadataWithWeight:(nonnull YMKMasstransitWeight *)weight
                                                                data:(nonnull YMKMasstransitSectionMetadataSectionData *)data
                                                          estimation:(nullable YMKMasstransitTravelEstimation *)estimation
                                                            legIndex:( NSUInteger)legIndex;


@end

@interface YMKMasstransitSectionMetadataSectionData : NSObject

@property (nonatomic, readonly, nullable) YMKMasstransitWait *wait;

@property (nonatomic, readonly, nullable) YMKMasstransitWalk *walk;

@property (nonatomic, readonly, nullable) YMKMasstransitTransfer *transfer;

@property (nonatomic, readonly, nullable) NSArray<YMKMasstransitTransport *> *transports;

+ (nonnull YMKMasstransitSectionMetadataSectionData *)sectionDataWithWait:(nonnull YMKMasstransitWait *)wait;

+ (nonnull YMKMasstransitSectionMetadataSectionData *)sectionDataWithWalk:(nonnull YMKMasstransitWalk *)walk;

+ (nonnull YMKMasstransitSectionMetadataSectionData *)sectionDataWithTransfer:(nonnull YMKMasstransitTransfer *)transfer;

+ (nonnull YMKMasstransitSectionMetadataSectionData *)sectionDataWithTransports:(nonnull NSArray<YMKMasstransitTransport *> *)transports;

@end


/**
 * The metadata about the mass transit stop.
 */
@interface YMKMasstransitRouteStopMetadata : NSObject

/**
 * Route stop information.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitStop *stop;


+ (nonnull YMKMasstransitRouteStopMetadata *)routeStopMetadataWithStop:(nonnull YMKMasstransitStop *)stop;


@end

/**
 * Route settings that were used by the mass transit router for a
 * specific route.
 */
@interface YMKMasstransitRouteSettings : NSObject

/**
 * Transport types that the router avoided.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *avoidTypes;

/**
 * Transport types that were allowed even if they are in the list of
 * avoided types.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *acceptTypes;


+ (nonnull YMKMasstransitRouteSettings *)routeSettingsWithAvoidTypes:(nonnull NSArray<NSString *> *)avoidTypes
                                                         acceptTypes:(nonnull NSArray<NSString *> *)acceptTypes;


@end

/**
 * Contains information associated with a route constructed by the mass
 * transit router.
 */
@interface YMKMasstransitRouteMetadata : NSObject

/**
 * Contains the route time, distance of the walking part, and the number
 * of transfers.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitWeight *weight;

/**
 * Route settings that were used by the mass transit router.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitRouteSettings *settings;

/**
 * Arrival and departure time estimations for time-dependent routes.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitTravelEstimation *estimation;

/**
 * List of route waypoints. See YMKMasstransitWayPoint for details
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitWayPoint *> *wayPoints;


+ (nonnull YMKMasstransitRouteMetadata *)routeMetadataWithWeight:(nonnull YMKMasstransitWeight *)weight
                                                        settings:(nullable YMKMasstransitRouteSettings *)settings
                                                      estimation:(nullable YMKMasstransitTravelEstimation *)estimation
                                                       wayPoints:(nonnull NSArray<YMKMasstransitWayPoint *> *)wayPoints;


@end

/**
 * Describes a YMKMasstransitStop on a YMKMasstransitRoute.
 */
@interface YMKMasstransitRouteStop : NSObject

/**
 * Stop on a route.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitStop *stop;

/**
 * Coordinates of the stop.
 */
@property (nonatomic, readonly, nonnull) YMKPoint *position;


+ (nonnull YMKMasstransitRouteStop *)routeStopWithStop:(nonnull YMKMasstransitStop *)stop
                                              position:(nonnull YMKPoint *)position;


@end

/**
 * Contains information about an individual section of a mass transit
 * YMKMasstransitRoute. The only fields that are always set are
 * YMKMasstransitSection::metadata.YMKMasstransitSectionMetadata::weight,
 * YMKMasstransitSection::geometry and
 * YMKMasstransitSection::metadata.YMKMasstransitSectionMetadata::data.
 */
@interface YMKMasstransitSection : NSObject

/**
 * General information about a section of a route.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitSectionMetadata *metadata;

/**
 * Geometry of the section as a fragment of a YMKMasstransitRoute
 * polyline.
 */
@property (nonatomic, readonly, nonnull) YMKSubpolyline *geometry;

/**
 * Vector of stops along the route. The first stop in the vector is the
 * stop for boarding the transport, and the last stop in the vector is
 * the stop for exiting the transport.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitRouteStop *> *stops;

/**
 * Vector of polylines each connecting two consecutive stops. This
 * vector is only filled for mass transit ride sections, so this
 * geometry represents a part of the mass transit thread geometry
 * between two stops.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSubpolyline *> *rideLegs;


+ (nonnull YMKMasstransitSection *)sectionWithMetadata:(nonnull YMKMasstransitSectionMetadata *)metadata
                                              geometry:(nonnull YMKSubpolyline *)geometry
                                                 stops:(nonnull NSArray<YMKMasstransitRouteStop *> *)stops
                                              rideLegs:(nonnull NSArray<YMKSubpolyline *> *)rideLegs;


@end

/**
 * Contains information about a route constructed by the mass transit
 * router.
 */
@interface YMKMasstransitRoute : NSObject
/**
 * General route information.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitRouteMetadata *metadata;
/**
 * List of route waypoints. See YMKMasstransitWayPoint for details
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitWayPoint *> *wayPoints;
/**
 * Vector of sections of the route.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitSection *> *sections;
/**
 * Polyline of the entire route.
 */
@property (nonatomic, readonly, nonnull) YMKPolyline *geometry;
/**
 * @brief Route URI, which can be used with YMKMasstransitRouter to
 * fetch additional information about the route or can be bookmarked for
 * future reference.
 */
@property (nonatomic, readonly, nonnull) YMKUriObjectMetadata *uriMetadata;
/**
 * Info about traffic on the route.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, readonly, nullable) YMKMasstransitJams *jams;

/**
 * Adds a listener for changes to traffic on the route.
 */
- (void)addJamsListenerWithJamsListener:(nonnull id<YMKMasstransitRouteJamsListener>)jamsListener;

/**
 * Removes the listener for changes to traffic on the route.
 */
- (void)removeJamsListenerWithJamsListener:(nonnull id<YMKMasstransitRouteJamsListener>)jamsListener;

@end
