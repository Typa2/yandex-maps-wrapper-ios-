#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * Pedestrian actions.
 */
typedef NS_ENUM(NSUInteger, YMKTransportAction) {
    /**
     * Going straight.
     */
    YMKTransportActionStraight,
    /**
     * Going slightly to the left.
     */
    YMKTransportActionSlightLeft,
    /**
     * Going slightly to the right.
     */
    YMKTransportActionSlightRight,
    /**
     * Going left.
     */
    YMKTransportActionLeft,
    /**
     * Going right.
     */
    YMKTransportActionRight,
    /**
     * Choosing a fork to the left.
     */
    YMKTransportActionForkLeft,
    /**
     * Choosing a fork to the right.
     */
    YMKTransportActionForkRight,
    /**
     * Finishing the route.
     */
    YMKTransportActionFinish,
    /**
     * Passing waypoint
     */
    YMKTransportActionWaypoint
};
