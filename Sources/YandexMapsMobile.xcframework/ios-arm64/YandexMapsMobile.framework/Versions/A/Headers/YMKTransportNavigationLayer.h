#import <YandexMapsMobile/YMKPlacemark.h>
#import <YandexMapsMobile/YMKTransportAnnotator.h>
#import <YandexMapsMobile/YMKTransportNavigation.h>
#import <YandexMapsMobile/YMKTransportRequestPointView.h>
#import <YandexMapsMobile/YMKTransportRouteView.h>

@class YMKTransportCamera;

/**
 * :nodoc:
 */
@interface YMKTransportNavigationLayer : NSObject
@property (nonatomic, readonly, readonly, nonnull) YMKTransportNavigation *navigation;
@property (nonatomic, readonly, readonly, nonnull) YMKTransportAnnotator *annotator;
@property (nonatomic, readonly, readonly, nonnull) YMKTransportCamera *camera;
/**
 * This placemark represents user on map. Position and azimuth is
 * automatically updated. It you wish, you can track standing status
 * from guide and animate placemark.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKPlacemarkMapObject *userPlacemark;
/**
 * Routes representation on the map.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKTransportRouteView *> *routes;

/**
 * Add this listener if you with to customize displayed routes.
 */
- (void)addRouteListenerWithRouteListener:(nonnull id<YMKTransportRouteViewListener>)routeListener;

- (void)removeRouteListenerWithRouteListener:(nonnull id<YMKTransportRouteViewListener>)routeListener;
/**
 * Request points representation on the map.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKTransportRequestPointView *> *requestPoints;

/**
 * Add this listener if you with to customize request points pins.
 */
- (void)addRequestPointViewListenerWithRequestPointListener:(nonnull id<YMKTransportRequestPointViewListener>)requestPointListener;

- (void)removeRequestPointViewListenerWithRequestPointListener:(nonnull id<YMKTransportRequestPointViewListener>)requestPointListener;
/**
 * Show or hide alternative routes on map.
 */
@property (nonatomic, getter=isShowAlternatives) BOOL showAlternatives;
@property (nonatomic, getter=isEnableRouteTap) BOOL enableRouteTap;
@property (nonatomic, getter=isShowRequestPoints) BOOL showRequestPoints;

/**
 * Removes layer from map. No further operations with layer should be
 * performed.
 */
- (void)removeFromMap;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
