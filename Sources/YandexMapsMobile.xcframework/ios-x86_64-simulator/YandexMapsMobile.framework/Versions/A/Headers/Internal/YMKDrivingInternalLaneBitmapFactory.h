#import <UIKit/UIKit.h>

#import <YandexMapsMobile/YMKDrivingLane.h>

@interface YMKDrivingInternalLaneBitmapFactory : NSObject

+ (UIImage *)createLaneBitmapWithLaneSigns:(NSArray *)laneSigns;

@end
