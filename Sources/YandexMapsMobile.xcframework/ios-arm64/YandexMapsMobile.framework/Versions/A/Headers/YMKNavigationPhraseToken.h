#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKNavigationPhraseToken) {
    /**
     * Cardinal numbers
     */
    YMKNavigationPhraseTokenOne,
    YMKNavigationPhraseTokenTwo,
    YMKNavigationPhraseTokenThree,
    YMKNavigationPhraseTokenFour,
    YMKNavigationPhraseTokenFive,
    YMKNavigationPhraseTokenSix,
    YMKNavigationPhraseTokenSeven,
    YMKNavigationPhraseTokenEight,
    YMKNavigationPhraseTokenNine,
    YMKNavigationPhraseTokenTen,
    YMKNavigationPhraseTokenEleven,
    YMKNavigationPhraseTokenTwelve,
    YMKNavigationPhraseTokenThirteen,
    YMKNavigationPhraseTokenFourteen,
    YMKNavigationPhraseTokenFifteen,
    YMKNavigationPhraseTokenSixteen,
    YMKNavigationPhraseTokenSeventeen,
    YMKNavigationPhraseTokenEighteen,
    YMKNavigationPhraseTokenNineteen,
    YMKNavigationPhraseTokenTwenty,
    YMKNavigationPhraseTokenThirty,
    YMKNavigationPhraseTokenForty,
    YMKNavigationPhraseTokenFifty,
    YMKNavigationPhraseTokenSixty,
    YMKNavigationPhraseTokenSeventy,
    YMKNavigationPhraseTokenEighty,
    YMKNavigationPhraseTokenNinety,
    YMKNavigationPhraseTokenOneHundred,
    YMKNavigationPhraseTokenTwoHundred,
    YMKNavigationPhraseTokenThreeHundred,
    YMKNavigationPhraseTokenFourHundred,
    YMKNavigationPhraseTokenFiveHundred,
    YMKNavigationPhraseTokenSixHundred,
    YMKNavigationPhraseTokenSevenHundred,
    YMKNavigationPhraseTokenEightHundred,
    YMKNavigationPhraseTokenNineHundred,
    /**
     * Ordinal numbers
     */
    YMKNavigationPhraseTokenFirst,
    YMKNavigationPhraseTokenSecond,
    YMKNavigationPhraseTokenThird,
    YMKNavigationPhraseTokenFourth,
    YMKNavigationPhraseTokenFifth,
    YMKNavigationPhraseTokenSixth,
    YMKNavigationPhraseTokenSeventh,
    YMKNavigationPhraseTokenEighth,
    YMKNavigationPhraseTokenNinth,
    YMKNavigationPhraseTokenTenth,
    YMKNavigationPhraseTokenEleventh,
    YMKNavigationPhraseTokenTwelfth,
    /**
     * Distance unit
     */
    YMKNavigationPhraseTokenKilometer,
    YMKNavigationPhraseTokenKilometers,
    YMKNavigationPhraseTokenKilometers_2_4,
    YMKNavigationPhraseTokenMeter,
    YMKNavigationPhraseTokenMeters,
    YMKNavigationPhraseTokenMeters_2_4,
    /**
     * Linking words
     */
    YMKNavigationPhraseTokenThen,
    /**
     * Prepositions
     */
    YMKNavigationPhraseTokenOver,
    /**
     * Conjunctions
     */
    YMKNavigationPhraseTokenAnd,
    /**
     * Auxiliary words
     */
    YMKNavigationPhraseTokenAhead,
    YMKNavigationPhraseTokenAttention,
    /**
     * Maneuvers
     */
    YMKNavigationPhraseTokenStraight,
    YMKNavigationPhraseTokenEnterRoundabout,
    YMKNavigationPhraseTokenRouteWillFinish,
    YMKNavigationPhraseTokenRouteFinished,
    YMKNavigationPhraseTokenHardTurnLeft,
    YMKNavigationPhraseTokenHardTurnRight,
    YMKNavigationPhraseTokenTakeLeft,
    YMKNavigationPhraseTokenTakeRight,
    YMKNavigationPhraseTokenTurnBack,
    YMKNavigationPhraseTokenTurnLeft,
    YMKNavigationPhraseTokenTurnRight,
    YMKNavigationPhraseTokenBoardFerry,
    YMKNavigationPhraseTokenExit,
    /**
     * Landmarks
     */
    YMKNavigationPhraseTokenAfterBridge,
    YMKNavigationPhraseTokenAfterTunnel,
    YMKNavigationPhraseTokenAtTrafficLights,
    YMKNavigationPhraseTokenBeforeBridge,
    YMKNavigationPhraseTokenBeforeTrafficLights,
    YMKNavigationPhraseTokenBeforeTunnel,
    YMKNavigationPhraseTokenIntoCourtyard,
    YMKNavigationPhraseTokenIntoTunnel,
    YMKNavigationPhraseTokenToBridge,
    YMKNavigationPhraseTokenToFrontageRoad,
    /**
     * Rows
     */
    YMKNavigationPhraseTokenAtLeft,
    YMKNavigationPhraseTokenAtRight,
    YMKNavigationPhraseTokenAtMiddle,
    YMKNavigationPhraseTokenAndRight,
    YMKNavigationPhraseTokenAndMiddle,
    YMKNavigationPhraseTokenLaneLocative,
    /**
     * Speed limits & camera
     */
    YMKNavigationPhraseTokenSpeedCamera,
    YMKNavigationPhraseTokenSpeedLimitCamera,
    YMKNavigationPhraseTokenLaneCamera,
    YMKNavigationPhraseTokenSpeed30,
    YMKNavigationPhraseTokenSpeed40,
    YMKNavigationPhraseTokenSpeed50,
    YMKNavigationPhraseTokenSpeed60,
    YMKNavigationPhraseTokenSpeed70,
    YMKNavigationPhraseTokenSpeed80,
    YMKNavigationPhraseTokenSpeed90,
    YMKNavigationPhraseTokenSpeed100,
    YMKNavigationPhraseTokenSpeed110,
    YMKNavigationPhraseTokenSpeed120,
    YMKNavigationPhraseTokenSpeed130,
    /**
     * Additional camera types
     */
    YMKNavigationPhraseTokenCamera,
    YMKNavigationPhraseTokenRoadMarkingCamera,
    YMKNavigationPhraseTokenCrossRoadCamera,
    YMKNavigationPhraseTokenForbiddenStopCamera,
    YMKNavigationPhraseTokenMobileCamera,
    /**
     * Events
     */
    YMKNavigationPhraseTokenAccident,
    YMKNavigationPhraseTokenReconstruction,
    YMKNavigationPhraseTokenDanger,
    YMKNavigationPhraseTokenRouteUpdated,
    YMKNavigationPhraseTokenRouteUpdatedToTollRoad,
    YMKNavigationPhraseTokenGoneOffRoute,
    YMKNavigationPhraseTokenSpeedLimitExceeded,
    YMKNavigationPhraseTokenReturnedOnRoute,
    YMKNavigationPhraseTokenWayPointPassed,
    YMKNavigationPhraseTokenFasterRouteAvailable,
    YMKNavigationPhraseTokenParkingRouteAvailable,
    YMKNavigationPhraseTokenTollRoadAhead,
    YMKNavigationPhraseTokenSchoolAhead,
    /**
     * Language-specific In numbers ending in 1 (except 1 and ..11): 21,
     * ..., 91, 101, 121, etc.
     */
    YMKNavigationPhraseTokenAndOne,
    /**
     * 'take' in 'take exit/roundabout' with feminine or masculine article
     * (fr: prenez la/le, it: prendi la)
     */
    YMKNavigationPhraseTokenExitTurn_Fem,
    YMKNavigationPhraseTokenExitTurn_Masc,
    /**
     * 'left/right' without 'turn' (fr: à gauche, it: a destra)
     */
    YMKNavigationPhraseTokenGetLeft,
    YMKNavigationPhraseTokenGetRight,
    /**
     * 'roundabout' without an article, like in 'roundabout in 100 meters'
     * or after ExitTurn_Fem/Masc
     */
    YMKNavigationPhraseTokenRoundabout,
    /**
     * Plural for LaneLocative
     */
    YMKNavigationPhraseTokenLanesLocative,
    /**
     * Short for 'exit, turn' (it: esci)
     */
    YMKNavigationPhraseTokenDoExit
};
