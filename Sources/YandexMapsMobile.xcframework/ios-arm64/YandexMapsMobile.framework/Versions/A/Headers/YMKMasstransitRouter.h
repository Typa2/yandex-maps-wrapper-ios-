#import <YandexMapsMobile/YMKMasstransitSession.h>
#import <YandexMapsMobile/YMKOptions.h>
#import <YandexMapsMobile/YMKRequestPoint.h>

@class YMKMasstransitOptions;
@class YMKMasstransitRouteSerializer;
@class YMKMasstransitRouter;
@class YMKTransitOptions;

/**
 * User-defined options for a YMKMasstransitRouter request.
 */
@interface YMKMasstransitOptions : NSObject

/// :nodoc:
/**
 * :nodoc:
 * Transport types that the router will avoid.
 */
@property (nonatomic, strong, nonnull) NSArray<NSString *> *avoidTypes;

/// :nodoc:
/**
 * :nodoc:
 * Transport types that will be allowed even if they are avoided. The
 * client must explicitly add all known non-avoided vehicle types to
 * this parameter when sending a request to the mass transit router.
 * This is necessary to prevent problems with avoiding subtypes of any
 * avoided type if the user did not set them as avoided. The server
 * supports at least the following vehicle type identifiers: bus,
 * trolleybus, tramway, minibus, suburban, underground, ferry, cable,
 * funicular. You must put every vehicle type identifier known to you
 * either in avoidTypes or in acceptTypes list, so that router can
 * provide routes with the most accurate filtering options for your
 * application. Avoid making assumptions like vehicle type A is a
 * subtype of vehicle type B.
 */
@property (nonatomic, strong, nonnull) NSArray<NSString *> *acceptTypes;

/**
 * Desired departure/arrival time settings. Empty YMKTimeOptions for
 * requests that are not time-dependent.
 */
@property (nonatomic, strong, nonnull) YMKTimeOptions *timeOptions;

+ (nonnull YMKMasstransitOptions *)masstransitOptionsWithAvoidTypes:(nonnull NSArray<NSString *> *)avoidTypes
                                                        acceptTypes:(nonnull NSArray<NSString *> *)acceptTypes
                                                        timeOptions:(nonnull YMKTimeOptions *)timeOptions;


@end

/**
 * Provides methods for submitting mass transit routing requests.
 */
@interface YMKMasstransitRouter : NSObject

/**
 * Submits a request to find mass transit routes (deprecated).
 *
 * @param points Route points (See YMKRequestPoint for details).
 * Currently only two points are supported (start and finish)
 * @param masstransitOptions Additional parameters for building routes.
 * @param routeListener Listener to retrieve a list of MasstransitRoute
 * objects.
 */
- (nonnull YMKMasstransitSession *)requestRoutesWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                        masstransitOptions:(nonnull YMKMasstransitOptions *)masstransitOptions
                                              routeHandler:(nonnull YMKMasstransitSessionRouteHandler)routeHandler;

/**
 * Submits a request to find mass transit routes.
 *
 * @param points Route points (See YMKRequestPoint for details).
 * Currently only two points are supported (start and finish)
 * @param transitOptions Additional parameters for building routes.
 * @param routeListener Listener to retrieve a list of MasstransitRoute
 * objects.
 */
- (nonnull YMKMasstransitSession *)requestRoutesWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                            transitOptions:(nonnull YMKTransitOptions *)transitOptions
                                              routeHandler:(nonnull YMKMasstransitSessionRouteHandler)routeHandler;

/**
 * Submits a request to fetch a brief summary of a mass transit route
 * (deprecated).
 */
- (nonnull YMKMasstransitSummarySession *)requestRoutesSummaryWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                                      masstransitOptions:(nonnull YMKMasstransitOptions *)masstransitOptions
                                                          summaryHandler:(nonnull YMKMasstransitSummarySessionSummaryHandler)summaryHandler;

/**
 * Submits a request to fetch a brief summary of a mass transit route.
 */
- (nonnull YMKMasstransitSummarySession *)requestRoutesSummaryWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                                          transitOptions:(nonnull YMKTransitOptions *)transitOptions
                                                          summaryHandler:(nonnull YMKMasstransitSummarySessionSummaryHandler)summaryHandler;

/**
 * Submits a request to retrieve detailed information on a mass transit
 * route by URI.
 *
 * @param uri The URI of the mass transit route. Starts with
 * "ymapsbm1://route/transit".
 * @param timeOptions Desired departure/arrival time settings. Empty
 * YMKTimeOptions for requests that are not time-dependent.
 * @param routeListener Listener to retrieve a list of MasstransitRoute
 * objects.
 */
- (nonnull YMKMasstransitSession *)resolveUriWithUri:(nonnull NSString *)uri
                                         timeOptions:(nonnull YMKTimeOptions *)timeOptions
                                        routeHandler:(nonnull YMKMasstransitSessionRouteHandler)routeHandler;

/**
 * @brief Returns a route serializer instance.
 */
- (nonnull YMKMasstransitRouteSerializer *)routeSerializer;

@end
