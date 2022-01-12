#import <YandexMapsMobile/YMKAdjustedClock.h>
#import <YandexMapsMobile/YMKBicycleBicycleRouter.h>
#import <YandexMapsMobile/YMKMapWindow.h>
#import <YandexMapsMobile/YMKMasstransitInfoService.h>
#import <YandexMapsMobile/YMKMasstransitLayer.h>
#import <YandexMapsMobile/YMKMasstransitRouter.h>
#import <YandexMapsMobile/YMKPedestrianRouter.h>
#import <YandexMapsMobile/YMKTaxiTaxiManager.h>
#import <YandexMapsMobile/YMKTransportAnnotator.h>
#import <YandexMapsMobile/YMKTransportNavigation.h>
#import <YandexMapsMobile/YMKTransportNavigationLayer.h>
#import <YandexMapsMobile/YMKTransportNavigationLayerOptions.h>
#import <YandexMapsMobile/YMKTransportNavigationOptions.h>

@interface YMKTransport : NSObject

/**
 * Creates a manager that builds bicycle routes using the origin and
 * destination points.
 */
- (nonnull YMKBicycleRouter *)createBicycleRouter;

/**
 * :nodoc:
 * Creates a manager for getting taxi ride info.
 */
- (nonnull YMKTaxiManager *)createTaxiManager;

/**
 * :nodoc:
 * Creates a new masstransit layer.
 */
- (nonnull YMKMasstransitLayer *)createMasstransitLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow;

/**
 * :nodoc:
 * Creates a service that provides mass transit information for the
 * chosen transit station.
 */
- (nonnull YMKMasstransitInfoService *)createMasstransitInfoService;

/**
 * Creates a manager that builds public transit routes using the origin
 * and destination points.
 */
- (nonnull YMKMasstransitRouter *)createMasstransitRouter;

/**
 * Creates a manager that builds pedestrian routes using the origin and
 * destination points.
 */
- (nonnull YMKPedestrianRouter *)createPedestrianRouter;
/**
 * Returns the clock that is constantly synchronized with the server.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKAdjustedClock *adjustedClock;

/**
 * :nodoc:
 * Creates navigation engine with given language and location manager.
 * Each call returns new independent instance of Navigation.
 */
- (nonnull YMKTransportNavigation *)createNavigationWithNavigationOptions:(nonnull YMKTransportNavigationOptions *)navigationOptions;

/**
 * Serializes given instance of Navigation. Instance have to be
 * suspended before serialization.
 */
- (nonnull NSData *)serializeNavigationWithNavigation:(nonnull YMKTransportNavigation *)navigation;

/**
 * :nodoc:
 * Deserializes given instance of Navigation. Navigation will be in
 * suspended.
 */
- (nonnull YMKTransportNavigation *)deserializeNavigationWithSerializedNavigation:(nonnull NSData *)serializedNavigation;

/**
 * :nodoc:
 */
- (nonnull YMKTransportAnnotator *)createAnnotatorWithNavigation:(nonnull YMKTransportNavigation *)navigation;

/**
 * :nodoc:
 * Adds navigation layer on the map.
 */
- (nonnull YMKTransportNavigationLayer *)createNavigationLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow
                                                     navigationLayerOptions:(nonnull YMKTransportNavigationLayerOptions *)navigationLayerOptions;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
