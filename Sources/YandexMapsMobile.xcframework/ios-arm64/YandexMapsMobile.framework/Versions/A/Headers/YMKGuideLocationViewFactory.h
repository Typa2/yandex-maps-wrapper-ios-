#import <YandexMapsMobile/YMKLocationViewSource.h>

@class YMKGuidanceGuide;

/// :nodoc:
@interface YMKGuideLocationViewSourceFactory : NSObject

+ (nonnull YMKLocationViewSource *)createLocationViewSourceWithGuide:(nonnull YMKGuidanceGuide *)guide;

@end

