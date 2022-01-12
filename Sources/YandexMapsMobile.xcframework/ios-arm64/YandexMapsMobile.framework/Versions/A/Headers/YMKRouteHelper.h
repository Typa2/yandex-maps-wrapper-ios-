#import <YandexMapsMobile/YMKColoredPolyline.h>
#import <YandexMapsMobile/YMKDrivingJamSegment.h>

#import <UIKit/UIKit.h>

@class YMKDrivingRoute;
@class YMKJamStyle;
@class YMKManeuverStyle;

/**
 * The style that is used to display maneuvers on the map.
 */
@interface YMKManeuverStyle : NSObject

/**
 * Fill color of the arrow.
 */
@property (nonatomic, readonly, nonnull) UIColor *fillColor;

/**
 * Color of the arrow's outline.
 */
@property (nonatomic, readonly, nonnull) UIColor *outlineColor;

/**
 * Width of the arrow's outline in units.
 */
@property (nonatomic, readonly) float outlineWidth;

/**
 * Overall length of the arrow (including the tip) in units.
 */
@property (nonatomic, readonly) float length;

/**
 * Height of the arrow tip in units.
 */
@property (nonatomic, readonly) float triangleHeight;

/**
 * Enables/disables maneuvers.
 */
@property (nonatomic, readonly) BOOL enabled;


+ (nonnull YMKManeuverStyle *)maneuverStyleWithFillColor:(nonnull UIColor *)fillColor
                                            outlineColor:(nonnull UIColor *)outlineColor
                                            outlineWidth:( float)outlineWidth
                                                  length:( float)length
                                          triangleHeight:( float)triangleHeight
                                                 enabled:( BOOL)enabled;


@end

/**
 * Color for specific level of traffic intensity.
 */
@interface YMKJamTypeColor : NSObject

/**
 * The type of the traffic jam.
 */
@property (nonatomic, readonly) YMKDrivingJamType jamType;

/**
 * Traffic jam color.
 */
@property (nonatomic, readonly, nonnull) UIColor *jamColor;


+ (nonnull YMKJamTypeColor *)jamTypeColorWithJamType:( YMKDrivingJamType)jamType
                                            jamColor:(nonnull UIColor *)jamColor;


@end

/**
 * The style that is used to display traffic intensity.
 */
@interface YMKJamStyle : NSObject

/**
 * Collection of colors for traffic intensity.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKJamTypeColor *> *colors;


+ (nonnull YMKJamStyle *)jamStyleWithColors:(nonnull NSArray<YMKJamTypeColor *> *)colors;


@end

@interface YMKRouteHelper : NSObject

/**
 * Creates a default traffic style. Default values: colors : Blocked  :
 * 0x000000ff, Free     : 0x00ff00ff, Hard     : 0xff0000ff, Light    :
 * 0xffff00ff, Unknown  : 0x909090ff, VeryHard : 0xa00000ff
 */
+ (nonnull YMKJamStyle *)createDefaultJamStyle;

/**
 * Creates a disabled traffic jams style. Colors : Blocked  :
 * 0x909090ff, Free     : 0x909090ff, Hard     : 0x909090ff, Light    :
 * 0x909090ff, Unknown  : 0x909090ff, VeryHard : 0x909090ff
 */
+ (nonnull YMKJamStyle *)createDisabledJamStyle;

/**
 * Creates a default maneuver style. Default values: fillColor      :
 * 0x000000ff outlineColor   : 0xffffffff outlineWidth   : 2.f length
 * : 80 triangleHeight : 16 enabled        : false
 */
+ (nonnull YMKManeuverStyle *)createDefaultManeuverStyle;

/**
 * Sets a new geometry and colors for a polyline. If style.enabled =
 * false, the polyline is drawn using the color for the Unknown traffic
 * jam type.
 */
+ (void)updatePolylineWithPolyline:(nonnull YMKColoredPolylineMapObject *)polyline
                             route:(nonnull YMKDrivingRoute *)route
                             style:(nonnull YMKJamStyle *)style;

/**
 * Applies the traffic jam style. Updates colors for traffic jam types
 * provided in the style parameter. Default color is 0xffffffff.
 */
+ (void)applyJamStyleWithPolyline:(nonnull YMKColoredPolylineMapObject *)polyline
                            style:(nonnull YMKJamStyle *)style;

/**
 * Applies a maneuver style. This method should be called every time
 * after updatePolyline occurs; otherwise, the default maneuver style is
 * applied.
 */
+ (void)applyManeuverStyleWithPolyline:(nonnull YMKColoredPolylineMapObject *)polyline
                                 style:(nonnull YMKManeuverStyle *)style;

@end

