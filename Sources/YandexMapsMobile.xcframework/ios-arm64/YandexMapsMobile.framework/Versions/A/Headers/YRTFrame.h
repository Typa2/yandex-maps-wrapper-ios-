#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YRTFrame : NSObject

- (id)initWithImage:(UIImage*)image duration:(NSTimeInterval)duration;
- (UIImage*)image;
- (NSTimeInterval)duration;

@end
