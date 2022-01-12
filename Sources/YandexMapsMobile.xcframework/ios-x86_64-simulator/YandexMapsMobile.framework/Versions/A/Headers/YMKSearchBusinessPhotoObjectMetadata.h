#import <Foundation/Foundation.h>

@class YMKSearchBusinessPhotoObjectMetadataPhoto;
@class YMKSearchPhotoPhotoLink;

/**
 * :nodoc:
 * Snippet for company-related photos (becoming obsolete).
 */
@interface YMKSearchBusinessPhotoObjectMetadata : NSObject

/**
 * Number of photos for the organisation. (see PhotosManager for
 * details)
 */
@property (nonatomic, readonly) NSUInteger count;

/**
 * List of photos for the company (usually first three)
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchBusinessPhotoObjectMetadataPhoto *> *photos;


+ (nonnull YMKSearchBusinessPhotoObjectMetadata *)businessPhotoObjectMetadataWithCount:( NSUInteger)count
                                                                                photos:(nonnull NSArray<YMKSearchBusinessPhotoObjectMetadataPhoto *> *)photos;


@end

/**
 * :nodoc:
 * Information about single photos.
 */
@interface YMKSearchBusinessPhotoObjectMetadataPhoto : NSObject

/**
 * Available sizes are listed here
 * https://tech.yandex.ru/fotki/doc/format-ref/f-img-docpage/ .
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * Photo links.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchPhotoPhotoLink *> *links;


+ (nonnull YMKSearchBusinessPhotoObjectMetadataPhoto *)photoWithId:(nonnull NSString *)id
                                                             links:(nonnull NSArray<YMKSearchPhotoPhotoLink *> *)links;


@end

/**
 * :nodoc:
 * Photo link details.
 */
@interface YMKSearchPhotoPhotoLink : NSObject

/**
 * Optional link type, for example "panorama".
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *type;

/**
 * Link URI.
 */
@property (nonatomic, readonly, nonnull) NSString *uri;


+ (nonnull YMKSearchPhotoPhotoLink *)photoLinkWithType:(nullable NSString *)type
                                                   uri:(nonnull NSString *)uri;


@end
