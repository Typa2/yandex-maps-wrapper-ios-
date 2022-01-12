#import <Foundation/Foundation.h>

@class YMKRouteView;
@class YMKTrafficLightView;

/**
 * :nodoc:
 */
@protocol YMKTrafficLightViewListener <NSObject>

- (void)onTrafficLightViewsChangedWithRoute:(nonnull YMKRouteView *)route;

- (void)onTrafficLightViewTapWithTrafficLightView:(nonnull YMKTrafficLightView *)trafficLightView;

@end
