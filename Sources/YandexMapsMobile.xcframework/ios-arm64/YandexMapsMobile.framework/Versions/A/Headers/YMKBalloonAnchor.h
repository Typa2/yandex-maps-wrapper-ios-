#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKVerticalPosition) {
    YMKVerticalPositionTop,
    YMKVerticalPositionCenter,
    YMKVerticalPositionBottom
};

/**
 * :nodoc:
 */
typedef NS_ENUM(NSUInteger, YMKHorizontalPosition) {
    YMKHorizontalPositionLeft,
    YMKHorizontalPositionCenter,
    YMKHorizontalPositionRight
};

/**
 * :nodoc:
 * BalloonAnchor represents where on the map upcoming event are located
 * regarding place mark.
 */
@interface YMKBalloonAnchor : NSObject

@property (nonatomic, readonly) YMKVerticalPosition vertical;

@property (nonatomic, readonly) YMKHorizontalPosition horizontal;


+ (nonnull YMKBalloonAnchor *)balloonAnchorWithVertical:( YMKVerticalPosition)vertical
                                             horizontal:( YMKHorizontalPosition)horizontal;


@end
