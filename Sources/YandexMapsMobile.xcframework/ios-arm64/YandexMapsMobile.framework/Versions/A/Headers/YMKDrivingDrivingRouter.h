#import <YandexMapsMobile/YMKDrivingAnnotationLang.h>
#import <YandexMapsMobile/YMKDrivingSession.h>
#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKRequestPoint.h>

@class YMKDrivingDrivingOptions;
@class YMKDrivingRoute;
@class YMKDrivingRouteSerializer;
@class YMKDrivingVehicleOptions;

/**
 * Driving options.
 */
@interface YMKDrivingDrivingOptions : NSObject

/**
 * Starting location azimuth.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *initialAzimuth;

/**
 * The number of alternatives.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *routesCount;

/**
 * The 'avoidTolls' option instructs the router to return routes that
 * avoid tolls, when possible.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *avoidTolls;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSDate *departureTime;

/**
 * A method to set the annotation language. lang The annotation
 * language.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *annotationLanguage;

+ (nonnull YMKDrivingDrivingOptions *)drivingOptionsWithInitialAzimuth:(nullable NSNumber *)initialAzimuth
                                                           routesCount:(nullable NSNumber *)routesCount
                                                            avoidTolls:(nullable NSNumber *)avoidTolls
                                                         departureTime:(nullable NSDate *)departureTime
                                                    annotationLanguage:(nullable NSNumber *)annotationLanguage;


@end

/**
 * Route serializer interface.
 */
@interface YMKDrivingRouteSerializer : NSObject

/**
 * This method saves the route.
 */
- (nonnull NSData *)saveWithRoute:(nonnull YMKDrivingRoute *)route;

/**
 * This method returns null if given a saved route from an incompatible
 * version of MapKit.
 */
- (nonnull YMKDrivingRoute *)loadWithData:(nonnull NSData *)data;

@end

/**
 * Interface for the driving router.
 */
@interface YMKDrivingRouter : NSObject

/**
 * Builds a route.
 *
 * @param points Route points.
 * @param drivingOptions Driving options.
 * @param routeListener Route listener object.
 */
- (nonnull YMKDrivingSession *)requestRoutesWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                        drivingOptions:(nonnull YMKDrivingDrivingOptions *)drivingOptions
                                        vehicleOptions:(nonnull YMKDrivingVehicleOptions *)vehicleOptions
                                          routeHandler:(nonnull YMKDrivingSessionRouteHandler)routeHandler;

/**
 * Creates a route summary.
 *
 * @param points Route points.
 * @param drivingOptions Driving options.
 * @param summaryListener Route listener object.
 */
- (nonnull YMKDrivingSummarySession *)requestRoutesSummaryWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                                      drivingOptions:(nonnull YMKDrivingDrivingOptions *)drivingOptions
                                                      vehicleOptions:(nonnull YMKDrivingVehicleOptions *)vehicleOptions
                                                      summaryHandler:(nonnull YMKDrivingSummarySessionSummaryHandler)summaryHandler;

/**
 * :nodoc:
 * Creates alternatives for a built route.
 *
 * @param route Initial route.
 * @param routePosition Route position.
 * @param drivingOptions Driving options.
 * @param routeListener Route listener object.
 */
- (nonnull YMKDrivingSession *)requestAlternativesForRouteWithRoute:(nonnull YMKDrivingRoute *)route
                                                      routePosition:(nonnull YMKPolylinePosition *)routePosition
                                                     drivingOptions:(nonnull YMKDrivingDrivingOptions *)drivingOptions
                                                     vehicleOptions:(nonnull YMKDrivingVehicleOptions *)vehicleOptions
                                                       routeHandler:(nonnull YMKDrivingSessionRouteHandler)routeHandler;

/**
 * :nodoc:
 * Builds parking routes.
 *
 * @param location current location.
 * @param finish finish location.
 * @param drivingOptions Driving options.
 * @param routeListener Route listener object.
 *
 * Remark:
 * @param finish has optional type, it may be uninitialized.
 */
- (nonnull YMKDrivingSession *)requestParkingRoutesWithLocation:(nonnull YMKPoint *)location
                                                         finish:(nullable YMKPoint *)finish
                                                 drivingOptions:(nonnull YMKDrivingDrivingOptions *)drivingOptions
                                                   routeHandler:(nonnull YMKDrivingSessionRouteHandler)routeHandler;

/**
 * :nodoc:
 * Route serializer.
 */
- (nonnull YMKDrivingRouteSerializer *)routeSerializer;

@end
