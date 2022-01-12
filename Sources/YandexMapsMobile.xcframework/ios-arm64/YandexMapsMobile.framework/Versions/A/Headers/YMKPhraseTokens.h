#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKPhraseToken) {
    /**
     * Cardinal numbers
     */
    YMKPhraseTokenOne,
    YMKPhraseTokenTwo,
    YMKPhraseTokenThree,
    YMKPhraseTokenFour,
    YMKPhraseTokenFive,
    YMKPhraseTokenSix,
    YMKPhraseTokenSeven,
    YMKPhraseTokenEight,
    YMKPhraseTokenNine,
    YMKPhraseTokenTen,
    YMKPhraseTokenEleven,
    YMKPhraseTokenTwelve,
    YMKPhraseTokenThirteen,
    YMKPhraseTokenFourteen,
    YMKPhraseTokenFifteen,
    YMKPhraseTokenSixteen,
    YMKPhraseTokenSeventeen,
    YMKPhraseTokenEighteen,
    YMKPhraseTokenNineteen,
    YMKPhraseTokenTwenty,
    YMKPhraseTokenThirty,
    YMKPhraseTokenForty,
    YMKPhraseTokenFifty,
    YMKPhraseTokenSixty,
    YMKPhraseTokenSeventy,
    YMKPhraseTokenEighty,
    YMKPhraseTokenNinety,
    YMKPhraseTokenOneHundred,
    YMKPhraseTokenTwoHundred,
    YMKPhraseTokenThreeHundred,
    YMKPhraseTokenFourHundred,
    YMKPhraseTokenFiveHundred,
    YMKPhraseTokenSixHundred,
    YMKPhraseTokenSevenHundred,
    YMKPhraseTokenEightHundred,
    YMKPhraseTokenNineHundred,
    /**
     * Ordinal numbers
     */
    YMKPhraseTokenFirst,
    YMKPhraseTokenSecond,
    YMKPhraseTokenThird,
    YMKPhraseTokenFourth,
    YMKPhraseTokenFifth,
    YMKPhraseTokenSixth,
    YMKPhraseTokenSeventh,
    YMKPhraseTokenEighth,
    YMKPhraseTokenNinth,
    YMKPhraseTokenTenth,
    YMKPhraseTokenEleventh,
    YMKPhraseTokenTwelfth,
    /**
     * Distance unit
     */
    YMKPhraseTokenKilometer,
    YMKPhraseTokenKilometers,
    YMKPhraseTokenKilometers_2_4,
    YMKPhraseTokenMeter,
    YMKPhraseTokenMeters,
    YMKPhraseTokenMeters_2_4,
    /**
     * Linking words
     */
    YMKPhraseTokenThen,
    /**
     * Prepositions
     */
    YMKPhraseTokenOver,
    /**
     * Conjunctions
     */
    YMKPhraseTokenAnd,
    /**
     * Auxiliary words
     */
    YMKPhraseTokenAhead,
    YMKPhraseTokenAttention,
    /**
     * Maneuvers
     */
    YMKPhraseTokenUnknown,
    YMKPhraseTokenStraight,
    YMKPhraseTokenEnterRoundabout,
    YMKPhraseTokenRouteWillFinish,
    YMKPhraseTokenRouteFinished,
    YMKPhraseTokenHardTurnLeft,
    YMKPhraseTokenHardTurnRight,
    YMKPhraseTokenTakeLeft,
    YMKPhraseTokenTakeRight,
    YMKPhraseTokenTurnBack,
    YMKPhraseTokenTurnLeft,
    YMKPhraseTokenTurnRight,
    YMKPhraseTokenBoardFerry,
    YMKPhraseTokenExit,
    /**
     * Landmarks
     */
    YMKPhraseTokenAfterBridge,
    YMKPhraseTokenAfterTunnel,
    YMKPhraseTokenAtTrafficLights,
    YMKPhraseTokenBeforeBridge,
    YMKPhraseTokenBeforeTrafficLights,
    YMKPhraseTokenBeforeTunnel,
    YMKPhraseTokenIntoCourtyard,
    YMKPhraseTokenIntoTunnel,
    YMKPhraseTokenToBridge,
    YMKPhraseTokenToFrontageRoad,
    /**
     * Rows
     */
    YMKPhraseTokenAtLeft,
    YMKPhraseTokenAtRight,
    YMKPhraseTokenAtMiddle,
    YMKPhraseTokenAndRight,
    YMKPhraseTokenAndMiddle,
    YMKPhraseTokenLaneLocative,
    /**
     * Speed limits & camera
     */
    YMKPhraseTokenSpeedCamera,
    YMKPhraseTokenSpeedLimitCamera,
    YMKPhraseTokenLaneCamera,
    YMKPhraseTokenSpeed30,
    YMKPhraseTokenSpeed40,
    YMKPhraseTokenSpeed50,
    YMKPhraseTokenSpeed60,
    YMKPhraseTokenSpeed70,
    YMKPhraseTokenSpeed80,
    YMKPhraseTokenSpeed90,
    YMKPhraseTokenSpeed100,
    YMKPhraseTokenSpeed110,
    YMKPhraseTokenSpeed120,
    YMKPhraseTokenSpeed130,
    /**
     * Additional camera types
     */
    YMKPhraseTokenCamera,
    YMKPhraseTokenRoadMarkingCamera,
    YMKPhraseTokenCrossRoadCamera,
    YMKPhraseTokenForbiddenStopCamera,
    YMKPhraseTokenMobileCamera,
    /**
     * Events
     */
    YMKPhraseTokenAccident,
    YMKPhraseTokenReconstruction,
    YMKPhraseTokenDanger,
    YMKPhraseTokenOvertakingDanger,
    YMKPhraseTokenPedestrianDanger,
    YMKPhraseTokenCrossroadDanger,
    YMKPhraseTokenRouteUpdated,
    YMKPhraseTokenRouteUpdatedToTollRoad,
    YMKPhraseTokenGoneOffRoute,
    YMKPhraseTokenSpeedLimitExceeded,
    YMKPhraseTokenReturnedOnRoute,
    YMKPhraseTokenWayPointPassed,
    YMKPhraseTokenFasterRouteAvailable,
    YMKPhraseTokenParkingRouteAvailable,
    YMKPhraseTokenTollRoadAhead,
    YMKPhraseTokenSchoolAhead,
    /**
     * Language-specific In numbers ending in 1 (except 1 and ..11): 21,
     * ..., 91, 101, 121, etc.
     */
    YMKPhraseTokenAndOne,
    /**
     * 'take' in 'take exit/roundabout' with feminine or masculine article
     * (fr: prenez la/le, it: prendi la)
     */
    YMKPhraseTokenExitTurn_Fem,
    YMKPhraseTokenExitTurn_Masc,
    /**
     * 'left/right' without 'turn' (fr: à gauche, it: a destra)
     */
    YMKPhraseTokenGetLeft,
    YMKPhraseTokenGetRight,
    /**
     * 'roundabout' without an article, like in 'roundabout in 100 meters'
     * or after ExitTurn_Fem/Masc
     */
    YMKPhraseTokenRoundabout,
    /**
     * Plural for LaneLocative
     */
    YMKPhraseTokenLanesLocative,
    /**
     * Short for 'exit, turn' (it: esci)
     */
    YMKPhraseTokenDoExit,
    /**
     * Special form of AfterTunnel for languages, where different form
     * should be used with distance
     */
    YMKPhraseTokenTunnel,
    /**
     * Special form of AfterBridge for languages, where different form
     * should be used with distance
     */
    YMKPhraseTokenBridge
};
