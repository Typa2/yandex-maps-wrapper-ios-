#import <YandexMapsMobile/YMKColoredPolyline.h>
#import <YandexMapsMobile/YMKMasstransitRoute.h>

@class YMKTransportRouteView;

/**
 * :nodoc:
 */
@protocol YMKTransportRouteViewListener <NSObject>

- (void)onRouteAddedWithRoute:(nonnull YMKTransportRouteView *)route;

- (void)onRouteTapWithRoute:(nonnull YMKTransportRouteView *)route;

@end

/**
 * :nodoc:
 */
@interface YMKTransportRouteView : NSObject
@property (nonatomic, readonly, readonly, nonnull) YMKMasstransitRoute *route;
/**
 * Route representation on map.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKColoredPolylineMapObject *appearance;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
