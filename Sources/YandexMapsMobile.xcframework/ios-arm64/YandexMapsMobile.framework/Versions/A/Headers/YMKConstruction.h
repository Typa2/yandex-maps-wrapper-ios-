#import <Foundation/Foundation.h>

/**
 * @brief Pedestrian constructions that can be found on pedestrian paths
 * or on mass transit transfers.
 */
typedef NS_ENUM(NSUInteger, YMKPedestrianConstructionID) {
    /**
     * Regular pedestrian path segment or a segment without any additional
     * information known.
     */
    YMKPedestrianConstructionIDUnknown,
    /**
     * Stairway with stairs going up along a pedestrian path.
     */
    YMKPedestrianConstructionIDStairsUp,
    /**
     * Stairway with stairs going down along a pedestrian path.
     */
    YMKPedestrianConstructionIDStairsDown,
    /**
     * @brief Stairway with no information whether stairs go up or down
     * along a pedestrian path.
     */
    YMKPedestrianConstructionIDStairsUnknown,
    /**
     * Underground pedestrian passage.
     */
    YMKPedestrianConstructionIDUnderpass,
    /**
     * Overground pedestrian passage, such as a bridge.
     */
    YMKPedestrianConstructionIDOverpass,
    /**
     * Pedestrian crossing that is not an underground tunnel or a bridge.
     */
    YMKPedestrianConstructionIDCrosswalk,
    /**
     * Edge connecting the route endpoint to the pedestrian route network.
     */
    YMKPedestrianConstructionIDBinding,
    /**
     * Transfer. For example, transfer from one underground line to another
     * or transfer from an underground station to an exit from it.
     */
    YMKPedestrianConstructionIDTransition
};
