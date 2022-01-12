#import <YandexMapsMobile/YMKAnimation.h>
#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKScreenTypes.h>

#import <UIKit/UIKit.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKCameraMode) {
    /**
     * Camera follow position.
     */
    YMKCameraModeFollowing,
    /**
     * Free camera mode.
     */
    YMKCameraModeFree,
    /**
     * Camera showing all routes.
     */
    YMKCameraModeOverview
};

/**
 * :nodoc:
 */
@protocol YMKCameraListener <NSObject>

- (void)onCameraModeChanged;

@end

/**
 * :nodoc:
 * Camera tracks location, user input and provide new CameraPosition for
 * map.
 */
@interface YMKCamera : NSObject

- (void)addListenerWithCameraListener:(nonnull id<YMKCameraListener>)cameraListener;

- (void)removeListenerWithCameraListener:(nonnull id<YMKCameraListener>)cameraListener;

/**
 * Set autozoom in 'Following' camera mode. `animation` parameter
 * ignored if camera currently not in the 'Following' mode. Enabled by
 * default.
 *
 * Remark:
 * @param animation has optional type, it may be uninitialized.
 */
- (void)setAutoZoomWithEnabled:(BOOL)enabled
                     animation:(nullable YMKAnimation *)animation;

/**
 * Set autorotation in 'Following' camera mode. `animation` parameter
 * ignored if camera currently not in the 'Following' mode. Enabled by
 * default.
 *
 * Remark:
 * @param animation has optional type, it may be uninitialized.
 */
- (void)setAutoRotationWithEnabled:(BOOL)enabled
                         animation:(nullable YMKAnimation *)animation;
/**
 * If enabled, camera will automatically switch between modes. Camera
 * will become into 'Following' mode if current route in navigation
 * selected or current speed is greater than 10 km/h. Also camera will
 * become into 'Following' mode from 'Overview' mode on guidance start.
 * Camera will become into 'Overview' when routes requested, but current
 * route does not selected yet.
 *
 * N.B.: Camera will become into 'Free' mode from 'Following' mode on
 * any external move (gesture / call `map.move`) regardless of
 * `switchModesAutomatically`
 *
 * Enabled by default.
 */
@property (nonatomic, getter=isSwitchModesAutomatically) BOOL switchModesAutomatically;
/**
 * Defines area, where all routes should be shown in 'Overview' mode. If
 * `overviewRect` is null, mapWindow.focusRect used.
 *
 * Optional property, can be nil.
 */
@property (nonatomic, nullable) YMKScreenRect *overviewRect;

/**
 * Given points will be visible when camera switches to 'Overview' mode.
 * It is useful when you draw some extra info on the map out of routes.
 *
 * Remark:
 * @param points has optional type, it may be uninitialized.
 */
- (void)setExtraOverviewPointsWithPoints:(nullable NSArray<YMKPoint *> *)points;

/**
 * `animation` parameter ignored if camera currently not in the
 * 'Following' mode. Default value is the center of the screen.
 *
 * Remark:
 * @param animation has optional type, it may be uninitialized.
 */
- (void)setAnchorWithAnchor:(CGPoint)anchor
                  animation:(nullable YMKAnimation *)animation;

- (YMKCameraMode)cameraMode;

- (void)setCameraModeWithMode:(YMKCameraMode)mode
                    animation:(nullable YMKAnimation *)animation;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
