#import <Foundation/Foundation.h>

@class YMKMasstransitLine;
@class YMKMasstransitLineInfo;
@class YMKMasstransitRoute;
@class YMKMasstransitSummary;
@class YMKMasstransitThread;
@class YMKMasstransitThreadInfo;
@class YMKVehicle;

typedef void(^YMKMasstransitSessionRouteHandler)(
    NSArray<YMKMasstransitRoute *> * _Nullable routes,
    NSError * _Nullable error);

/**
 * Handler for an async request for mass transit routes.
 */
@interface YMKMasstransitSession : NSObject

/**
 * Tries to cancel the current request for mass transit routes.
 */
- (void)cancel;

/**
 * Retries the request for mass transit routes using the specified
 * callback.
 */
- (void)retryWithRouteHandler:(nonnull YMKMasstransitSessionRouteHandler)routeHandler;

@end

typedef void(^YMKMasstransitSummarySessionSummaryHandler)(
    NSArray<YMKMasstransitSummary *> * _Nullable routes,
    NSError * _Nullable error);

/**
 * Handler for an async request for a summary of mass transit routes.
 */
@interface YMKMasstransitSummarySession : NSObject

/**
 * Tries to cancel the current request for a summary of mass transit
 * routes.
 */
- (void)cancel;

/**
 * Retries the request for a summary of mass transit routes, using the
 * specified callback.
 */
- (void)retryWithSummaryHandler:(nonnull YMKMasstransitSummarySessionSummaryHandler)summaryHandler;

@end

/**
 * :nodoc:
 */
typedef void(^YMKMasstransitVehicleSessionVehicleHandler)(
    YMKVehicle * _Nullable vehicle,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Handler for a mass transit YMKVehicle async request.
 */
@interface YMKMasstransitVehicleSession : NSObject

/**
 * Tries to cancel the current mass transit vehicle request.
 */
- (void)cancel;

/**
 * Retries the mass transit vehicle request using the specified
 * callback.
 */
- (void)retryWithVehicleHandler:(nonnull YMKMasstransitVehicleSessionVehicleHandler)vehicleHandler;

@end

/**
 * :nodoc:
 */
typedef void(^YMKMasstransitThreadSessionThreadHandler)(
    YMKMasstransitThreadInfo * _Nullable threadInfo,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Handler for a masstransit YMKMasstransitThread async request.
 */
@interface YMKMasstransitThreadSession : NSObject

/**
 * Tries to cancel the current mass transit thread request.
 */
- (void)cancel;

/**
 * Retries the mass transit thread request using the specified callback.
 */
- (void)retryWithThreadHandler:(nonnull YMKMasstransitThreadSessionThreadHandler)threadHandler;

@end

/**
 * :nodoc:
 */
typedef void(^YMKMasstransitLineSessionLineHandler)(
    YMKMasstransitLineInfo * _Nullable lineInfo,
    NSError * _Nullable error);

/**
 * :nodoc:
 * Handler for a mass transit YMKMasstransitLine async request.
 */
@interface YMKMasstransitLineSession : NSObject

/**
 * Tries to cancel the current mass transit line request.
 */
- (void)cancel;

/**
 * Retries the mass transit line request using the specified callback.
 */
- (void)retryWithLineHandler:(nonnull YMKMasstransitLineSessionLineHandler)lineHandler;

@end
