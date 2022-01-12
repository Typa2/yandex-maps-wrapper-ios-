#import <Foundation/Foundation.h>

@class YMKSearchBusinessImagesObjectMetadataLogo;

/**
 * :nodoc:
 * Snippet for images related to the given company.
 */
@interface YMKSearchBusinessImagesObjectMetadata : NSObject

/**
 * Company logo.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchBusinessImagesObjectMetadataLogo *logo;


+ (nonnull YMKSearchBusinessImagesObjectMetadata *)businessImagesObjectMetadataWithLogo:(nullable YMKSearchBusinessImagesObjectMetadataLogo *)logo;


@end

/**
 * :nodoc:
 * Logo for the company.
 */
@interface YMKSearchBusinessImagesObjectMetadataLogo : NSObject

/**
 * :nodoc:
 * urlTemplate for the company logo. Available sizes are listed here:
 * http://api.yandex.ru/fotki/doc/format-ref/f-img.xml
 */
@property (nonatomic, readonly, nonnull) NSString *urlTemplate;


+ (nonnull YMKSearchBusinessImagesObjectMetadataLogo *)logoWithUrlTemplate:(nonnull NSString *)urlTemplate;


@end
