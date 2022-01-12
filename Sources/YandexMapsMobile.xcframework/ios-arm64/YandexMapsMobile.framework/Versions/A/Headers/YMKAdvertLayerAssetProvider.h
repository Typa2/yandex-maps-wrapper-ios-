#import <YandexMapsMobile/YMKGeoObject.h>

#import <UIKit/UIKit.h>

/**
 * :nodoc:
 * Label placement relatilve to an advert pin.
 */
typedef NS_ENUM(NSUInteger, YMKAdvertLayerLabelPlacement) {
    YMKAdvertLayerLabelPlacementLeft,
    YMKAdvertLayerLabelPlacementRight
};

/**
 * :nodoc:
 * Interface for providing images to the advert layer.
 */
@protocol YMKAdvertLayerAssetProvider <NSObject>

/**
 * Returns an image of a label for an advert pin
 */
- (nullable UIImage *)advertLabelImageWithGeoObject:(nonnull YMKGeoObject *)geoObject
                                          nightMode:(BOOL)nightMode
                                          placement:(YMKAdvertLayerLabelPlacement)placement;

@end
