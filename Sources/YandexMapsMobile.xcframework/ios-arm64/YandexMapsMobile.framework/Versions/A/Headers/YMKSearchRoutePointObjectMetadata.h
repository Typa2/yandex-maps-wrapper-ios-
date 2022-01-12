#import <YandexMapsMobile/YMKDirection.h>
#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKLocalizedValue.h>
#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKTaxiMoney.h>

/**
 * An entrance to a building
 */
@interface YMKSearchEntrance : NSObject

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *name;

@property (nonatomic, readonly, nonnull) YMKPoint *point;

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKDirection *direction;


+ (nonnull YMKSearchEntrance *)entranceWithName:(nullable NSString *)name
                                          point:(nonnull YMKPoint *)point
                                      direction:(nullable YMKDirection *)direction;


@end

/**
 * :nodoc:
 * A place where one can arrive using a car
 */
@interface YMKSearchDrivingArrivalPoint : NSObject

/**
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *id;

/**
 * Point to show a balloon at.
 */
@property (nonatomic, readonly, nonnull) YMKPoint *anchor;

/**
 * Geometry of a carpark or a mined cluster of arrival points.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKGeometry *geometry;

/**
 * Walking time from the arrival point to the target point (organization
 * or toponym).
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKLocalizedValue *walkingTime;

/**
 * Price of the first hour.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTaxiMoney *price;

/**
 * A name from the geocoder or a manually assigned label like
 * "Departures" in the airport terminal.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *description;

/**
 * Tags are a list of features that the arrival point has. Supported
 * tags: parking/drop_off, free/toll/restricted, on_street yard/building
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;


+ (nonnull YMKSearchDrivingArrivalPoint *)drivingArrivalPointWithId:(nullable NSString *)id
                                                             anchor:(nonnull YMKPoint *)anchor
                                                           geometry:(nullable YMKGeometry *)geometry
                                                        walkingTime:(nullable YMKLocalizedValue *)walkingTime
                                                              price:(nullable YMKTaxiMoney *)price
                                                        description:(nullable NSString *)description
                                                               tags:(nonnull NSArray<NSString *> *)tags;


@end

/**
 * :nodoc:
 * Route point info snippet
 */
@interface YMKSearchRoutePointMetadata : NSObject

/**
 * A string that a client can pass in router requests to get better
 * options of a destination point. The string encodes entrances, driving
 * arrival points and anything else that can be used as a destination
 * point to a particular toponym or organization. Format of that string
 * is internal and can be changed without any notice.
 */
@property (nonatomic, readonly, nonnull) NSString *routePointContext;

@property (nonatomic, readonly, nonnull) NSArray<YMKSearchEntrance *> *entrances;

@property (nonatomic, readonly, nonnull) NSArray<YMKSearchDrivingArrivalPoint *> *drivingArrivalPoints;


+ (nonnull YMKSearchRoutePointMetadata *)routePointMetadataWithRoutePointContext:(nonnull NSString *)routePointContext
                                                                       entrances:(nonnull NSArray<YMKSearchEntrance *> *)entrances
                                                            drivingArrivalPoints:(nonnull NSArray<YMKSearchDrivingArrivalPoint *> *)drivingArrivalPoints;


@end
