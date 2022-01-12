#import <Foundation/Foundation.h>

@interface YMKHistoricalPanorama : NSObject

@property (nonatomic, readonly, nonnull) NSString *name;

@property (nonatomic, readonly, nonnull) NSString *panoramaId;

@property (nonatomic, readonly, nonnull) NSDate *timestamp;


+ (nonnull YMKHistoricalPanorama *)historicalPanoramaWithName:(nonnull NSString *)name
                                                   panoramaId:(nonnull NSString *)panoramaId
                                                    timestamp:(nonnull NSDate *)timestamp;


@end
