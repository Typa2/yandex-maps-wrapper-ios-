#import <YandexMapsMobile/YMKPanoramaPlayer.h>
#import <UIKit/UIKit.h>

@interface YMKPanoView : UIView

@property (strong, nonatomic, readonly) YMKPanoramaPlayer *player;

- (id)initWithFrame:(CGRect)frame vulkanPreferred:(bool)vulkanPreferred;
- (void)setNoninteractive:(bool)is;

@end
