#import <YandexMapsMobile/YMKAnimation.h>

#import <UIKit/UIKit.h>

/**
 * :nodoc:
 * Camera tracks location, user input and provide new CameraPosition for
 * map.
 */
@interface YMKTransportCamera : NSObject

- (void)setAutoRotationEnabledWithOn:(BOOL)on
                           animation:(nonnull YMKAnimation *)animation;

- (void)setAnchorWithAnchor:(CGPoint)anchor
                  animation:(nonnull YMKAnimation *)animation;

- (void)scrollToAnchorWithAnimation:(nonnull YMKAnimation *)animation;
@property (nonatomic, getter=isEnabled) BOOL enabled;

@end
