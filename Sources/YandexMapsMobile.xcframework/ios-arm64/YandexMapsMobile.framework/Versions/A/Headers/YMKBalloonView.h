#import <YandexMapsMobile/YMKBalloonAnchor.h>
#import <YandexMapsMobile/YMKDrivingAction.h>
#import <YandexMapsMobile/YMKDrivingDirectionSigns.h>
#import <YandexMapsMobile/YMKDrivingLane.h>
#import <YandexMapsMobile/YMKDrivingRoute.h>
#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKLocalizedValue.h>

#import <UIKit/UIKit.h>

@class YMKBalloon;
@class YMKBalloonGeometry;

/**
 * :nodoc:
 */
@protocol YMKBalloonImageProvider <NSObject>

/**
 * returns geometry for all possible anchor placements
 */
- (nonnull NSArray<YMKBalloonGeometry *> *)geometriesForBalloonWithBalloon:(nonnull YMKBalloon *)balloon;

- (nonnull UIImage *)createImageWithBalloon:(nonnull YMKBalloon *)balloon
                                     anchor:(nonnull YMKBalloonAnchor *)anchor;

@end

/**
 * :nodoc:
 */
@interface YMKManeuver : NSObject

@property (nonatomic, readonly) YMKDrivingAction action;

@property (nonatomic, readonly, nonnull) YMKLocalizedValue *distance;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *nextRoadName;

@property (nonatomic, readonly, nonnull) YMKPolylinePosition *position;


+ (nonnull YMKManeuver *)maneuverWithAction:( YMKDrivingAction)action
                                   distance:(nonnull YMKLocalizedValue *)distance
                               nextRoadName:(nullable NSString *)nextRoadName
                                   position:(nonnull YMKPolylinePosition *)position;


@end

/**
 * :nodoc:
 */
@interface YMKBalloon : NSObject

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingLaneSign *laneSign;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDrivingDirectionSign *directionSign;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKManeuver *maneuver;


+ (nonnull YMKBalloon *)balloonWithLaneSign:(nullable YMKDrivingLaneSign *)laneSign
                              directionSign:(nullable YMKDrivingDirectionSign *)directionSign
                                   maneuver:(nullable YMKManeuver *)maneuver;


@end

/**
 * :nodoc:
 */
@interface YMKBalloonGeometry : NSObject

@property (nonatomic, readonly, nonnull) YMKBalloonAnchor *anchor;

/**
 * Total balloon image size
 */
@property (nonatomic, readonly) float width;

@property (nonatomic, readonly) float height;

/**
 * area with main information, except leg/borders
 */
@property (nonatomic, readonly) CGPoint topLeft;

@property (nonatomic, readonly) CGPoint bottomRight;


+ (nonnull YMKBalloonGeometry *)balloonGeometryWithAnchor:(nonnull YMKBalloonAnchor *)anchor
                                                    width:( float)width
                                                   height:( float)height
                                                  topLeft:( CGPoint)topLeft
                                              bottomRight:( CGPoint)bottomRight;


@end

/**
 * :nodoc:
 */
@interface YMKBalloonView : NSObject
@property (nonatomic, readonly, nonnull) YMKBalloonAnchor *anchor;
@property (nonatomic, readonly, nonnull) YMKBalloon *balloon;

/**
 * use null to reset provider to default
 *
 * Remark:
 * @param provider has optional type, it may be uninitialized.
 */
- (void)setImageProviderWithProvider:(nullable id<YMKBalloonImageProvider>)provider;
/**
 * The route to which this balloon belongs.
 */
@property (nonatomic, readonly, readonly, nonnull) YMKDrivingRoute *hostRoute;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
