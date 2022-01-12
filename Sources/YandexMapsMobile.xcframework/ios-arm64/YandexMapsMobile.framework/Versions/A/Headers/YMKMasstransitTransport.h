#import <YandexMapsMobile/YMKMasstransitCommon.h>
#import <YandexMapsMobile/YMKTime.h>

@class YMKMasstransitAlertClosed;
@class YMKMasstransitAlertClosedUntil;
@class YMKMasstransitAlertLastTrip;
@class YMKMasstransitRoute;
@class YMKMasstransitTransportTransportThread;

/**
 * Alerts are important annotations for mass transit ride sections of
 * routes.
 */
@interface YMKMasstransitAlert : NSObject

/**
 * Standard alert text. Simple clients could use this text to get a
 * pre-formatted message. If the client is unable to recognize the known
 * structured alert, it should use the text field instead.
 */
@property (nonatomic, readonly, nonnull) NSString *text;

/**
 * The value is set if the thread is not operational on that day. Only
 * one of the values close, closedUntil and lastTrip is set for an
 * alert.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitAlertClosed *closed;

/**
 * The value is set if the thread is not operational until the specified
 * time. Only one of the values close, closedUntil and lastTrip is set
 * for an alert.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitAlertClosedUntil *closedUntil;

/**
 * The value is set if this trip is the last trip for the thread. Only
 * one of the values close, closedUntil and lastTrip is set for an
 * alert.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitAlertLastTrip *lastTrip;


+ (nonnull YMKMasstransitAlert *)alertWithText:(nonnull NSString *)text
                                        closed:(nullable YMKMasstransitAlertClosed *)closed
                                   closedUntil:(nullable YMKMasstransitAlertClosedUntil *)closedUntil
                                      lastTrip:(nullable YMKMasstransitAlertLastTrip *)lastTrip;


@end

/**
 * Thread is not operational on that day.
 */
@interface YMKMasstransitAlertClosed : NSObject

/**
 * Dummy field which is used here because IDL does not support structs
 * without fields.
 */
@property (nonatomic, readonly) BOOL dummy;


+ (nonnull YMKMasstransitAlertClosed *)closedWithDummy:( BOOL)dummy;


@end

/**
 * Thread is not operational until specified time.
 */
@interface YMKMasstransitAlertClosedUntil : NSObject

/**
 * Time of the next trip.
 */
@property (nonatomic, readonly, nonnull) YMKTime *time;


+ (nonnull YMKMasstransitAlertClosedUntil *)closedUntilWithTime:(nonnull YMKTime *)time;


@end

/**
 * Last trip for the thread. Allows to get the time it takes to get to
 * the end of the route.
 */
@interface YMKMasstransitAlertLastTrip : NSObject

/**
 * Time required to finish the trip.
 */
@property (nonatomic, readonly, nonnull) YMKTime *time;


+ (nonnull YMKMasstransitAlertLastTrip *)lastTripWithTime:(nonnull YMKTime *)time;


@end

/**
 * @brief Contains information about the mass transit ride section of a
 * YMKMasstransitRoute for a specific mass transit YMKMasstransitLine.
 */
@interface YMKMasstransitTransport : NSObject

/**
 * Mass transit line.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitLine *line;

/**
 * Collection of mass transit threads of the specified line suitable for
 * the constructed route.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitTransportTransportThread *> *transports;


+ (nonnull YMKMasstransitTransport *)transportWithLine:(nonnull YMKMasstransitLine *)line
                                            transports:(nonnull NSArray<YMKMasstransitTransportTransportThread *> *)transports;


@end

/**
 * YMKMasstransitThread specific properties of a mass transit ride
 * section of a YMKMasstransitRoute.
 */
@interface YMKMasstransitTransportTransportThread : NSObject

/**
 * Mass transit thread.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitThread *thread;

/**
 * Indicates that the mass transit router considers this thread the best
 * one for the current section of the constucted route.
 */
@property (nonatomic, readonly) BOOL isRecommended;

/**
 * Collection of important annotations for the section.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitAlert *> *alerts;

/**
 * @brief If alternateDepartureStop is specified, it specifies the
 * departure location for this particular Thread instead of the first
 * Stop of the Section.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKMasstransitStop *alternateDepartureStop;


+ (nonnull YMKMasstransitTransportTransportThread *)transportThreadWithThread:(nonnull YMKMasstransitThread *)thread
                                                                isRecommended:( BOOL)isRecommended
                                                                       alerts:(nonnull NSArray<YMKMasstransitAlert *> *)alerts
                                                       alternateDepartureStop:(nullable YMKMasstransitStop *)alternateDepartureStop;


@end
