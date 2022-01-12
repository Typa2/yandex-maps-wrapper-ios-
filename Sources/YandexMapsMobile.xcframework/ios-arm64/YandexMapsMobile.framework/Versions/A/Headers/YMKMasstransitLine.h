#import <YandexMapsMobile/YMKMasstransitCommon.h>
#import <YandexMapsMobile/YMKMasstransitThread.h>

/**
 * :nodoc:
 * Contains YMKMasstransitLine information and all
 * YMKMasstransitThreadInfo associated with it.
 */
@interface YMKMasstransitLineInfo : NSObject

/**
 * Mass transit line.
 */
@property (nonatomic, readonly, nonnull) YMKMasstransitLine *line;

/**
 * Collection of thread data for each thread of the specified line.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKMasstransitThreadInfo *> *threads;


+ (nonnull YMKMasstransitLineInfo *)lineInfoWithLine:(nonnull YMKMasstransitLine *)line
                                             threads:(nonnull NSArray<YMKMasstransitThreadInfo *> *)threads;


@end
