#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YMKMasstransitCommon.h>
#import <YandexMapsMobile/YMKPoint.h>

/**
 * Describes a YMKMasstransitStop on a YMKMasstransitThread.
 */
@interface YMKMasstransitThreadStop : NSObject

/**
 * Stop on a thread.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitStop *stop;

/**
 * Coordinates of the thread stop.
 */
@property (nonatomic, readonly, nonnull) YMKPoint *position;


+ (nonnull YMKMasstransitThreadStop *)threadStopWithStop:(nonnull YMKMasstransitStop *)stop
                                                position:(nonnull YMKPoint *)position;


@end

/**
 * :nodoc:
 * Information about a mass transit thread.
 */
@interface YMKMasstransitThreadInfo : NSObject

/**
 * A mass transit YMKMasstransitThread object.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitThread *thread;

/**
 * List of all stops along the thread.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitThreadStop *> *stops;

/**
 * Geometry of polyline stages between thread stops. The number of
 * stages is one less than the number of stops. The i-th stage connects
 * the i-th and (i + 1)-th stops.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKPolyline *> *stages;

/**
 * Axis-aligned bounding box of the thread.
 */
@property (nonatomic, readonly, nonnull) YMKBoundingBox *boundingBox;


+ (nonnull YMKMasstransitThreadInfo *)threadInfoWithThread:(nonnull YMKMasstransitThread *)thread
                                                     stops:(nonnull NSArray<YMKMasstransitThreadStop *> *)stops
                                                    stages:(nonnull NSArray<YMKPolyline *> *)stages
                                               boundingBox:(nonnull YMKBoundingBox *)boundingBox;


@end
