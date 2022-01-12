#pragma once

#import <UIKit/UIKit.h>

#import <YandexMapsMobile/YMKDrivingDirectionSigns.h>

@interface YMKDrivingInternalDirectionSignBitmapFactory : NSObject

+ (UIImage *)createDirectionSignBitmapWithDirectionSign:(YMKDrivingDirectionSign *)directionSign;

@end
