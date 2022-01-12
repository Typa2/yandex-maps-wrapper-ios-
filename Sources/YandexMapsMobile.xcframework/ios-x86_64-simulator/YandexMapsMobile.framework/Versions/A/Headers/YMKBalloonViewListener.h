#import <Foundation/Foundation.h>

@class YMKBalloonView;
@class YMKRouteView;

/**
 * :nodoc:
 */
@protocol YMKBalloonViewListener <NSObject>

- (void)onBalloonViewsChangedWithRoute:(nonnull YMKRouteView *)route;

- (void)onBalloonViewTapWithBalloon:(nonnull YMKBalloonView *)balloon;

@end
