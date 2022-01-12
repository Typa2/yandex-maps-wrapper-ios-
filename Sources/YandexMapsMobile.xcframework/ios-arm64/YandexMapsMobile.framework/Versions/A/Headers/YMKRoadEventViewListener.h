#import <Foundation/Foundation.h>

@class YMKRoadEventView;
@class YMKRouteView;

/**
 * :nodoc:
 */
@protocol YMKRoadEventViewListener <NSObject>

- (void)onRoadEventViewsChangedWithRoute:(nonnull YMKRouteView *)route;

- (void)onRoadEventViewTapWithEvent:(nonnull YMKRoadEventView *)event;

@end
