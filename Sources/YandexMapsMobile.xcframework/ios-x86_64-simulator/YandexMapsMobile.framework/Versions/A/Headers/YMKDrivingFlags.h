#import <Foundation/Foundation.h>

/**
 * Overall characteristics of the route.
 */
@interface YMKDrivingFlags : NSObject

/**
 * Route is blocked.
 */
@property (nonatomic, readonly) BOOL blocked;

/**
 * Route has ferries on it.
 */
@property (nonatomic, readonly) BOOL hasFerries;

/**
 * Route includes toll roads.
 */
@property (nonatomic, readonly) BOOL hasTolls;

/**
 * Route crosses borders.
 */
@property (nonatomic, readonly) BOOL crossesBorders;

/**
 * Route requires special access.
 */
@property (nonatomic, readonly) BOOL requiresAccessPass;

/**
 * Route is made for parking.
 */
@property (nonatomic, readonly) BOOL forParking;

/**
 * Route will be blocked soon.
 */
@property (nonatomic, readonly) BOOL futureBlocked;

/**
 * Route has a severe traffic jam.
 */
@property (nonatomic, readonly) BOOL deadJam;

/**
 * Route was built by using offline data.
 */
@property (nonatomic, readonly) BOOL builtOffline;

/**
 * Predicted optimal route.
 */
@property (nonatomic, readonly) BOOL predicted;

/**
 * Route has rugged roads on it.
 */
@property (nonatomic, readonly) BOOL hasRuggedRoads;

/**
 * Parts of route are restricted for trucks.
 */
@property (nonatomic, readonly) BOOL hasRestrictionForTrucks;

/**
 * Route has ford crossing on it.
 */
@property (nonatomic, readonly) BOOL hasFordCrossing;

/**
 * Route has vehicle restrictions on it.
 */
@property (nonatomic, readonly) BOOL hasVehicleRestrictions;


+ (nonnull YMKDrivingFlags *)flagsWithBlocked:( BOOL)blocked
                                   hasFerries:( BOOL)hasFerries
                                     hasTolls:( BOOL)hasTolls
                               crossesBorders:( BOOL)crossesBorders
                           requiresAccessPass:( BOOL)requiresAccessPass
                                   forParking:( BOOL)forParking
                                futureBlocked:( BOOL)futureBlocked
                                      deadJam:( BOOL)deadJam
                                 builtOffline:( BOOL)builtOffline
                                    predicted:( BOOL)predicted
                               hasRuggedRoads:( BOOL)hasRuggedRoads
                      hasRestrictionForTrucks:( BOOL)hasRestrictionForTrucks
                              hasFordCrossing:( BOOL)hasFordCrossing
                       hasVehicleRestrictions:( BOOL)hasVehicleRestrictions;


@end
