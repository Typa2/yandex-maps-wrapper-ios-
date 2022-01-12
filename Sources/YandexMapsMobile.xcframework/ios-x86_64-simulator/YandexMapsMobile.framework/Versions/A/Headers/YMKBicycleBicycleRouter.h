#import <YandexMapsMobile/YMKBicycleSession.h>
#import <YandexMapsMobile/YMKRequestPoint.h>

/**
 * Provides methods for submitting bicycle routing requests.
 */
@interface YMKBicycleRouter : NSObject

/**
 * @attention This feature is not available in the free MapKit version.
 *
 *
 * Submits a request to find a bicycle route.
 *
 * @param points Route points (See YMKRequestPoint for details).
 * Currently only two points are supported (start and finish).
 * @param routeListener Listener to retrieve a list of Route objects.
 */
- (nonnull YMKBicycleSession *)requestRoutesWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                         routeListener:(nonnull YMKBicycleSessionRouteListener)routeListener;

/**
 * @attention This feature is not available in the free MapKit version.
 *
 *
 * Submits a request to fetch a brief summary of the bicycle routes.
 *
 * @param points Route points (See YMKRequestPoint for details).
 * Currently only two points are supported (start and finish).
 * @param summaryListener Listener to retrieve a list of Route objects.
 */
- (nonnull YMKBicycleSummarySession *)requestRoutesSummaryWithPoints:(nonnull NSArray<YMKRequestPoint *> *)points
                                                      summaryHandler:(nonnull YMKBicycleSummarySessionSummaryHandler)summaryHandler;

@end
