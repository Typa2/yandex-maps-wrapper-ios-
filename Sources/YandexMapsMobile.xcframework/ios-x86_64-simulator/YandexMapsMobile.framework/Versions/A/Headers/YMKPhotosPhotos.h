#import <YandexMapsMobile/YMKAtomFeed.h>

/**
 * :nodoc:
 * Photo with a particular size.
 */
@interface YMKPhotosImage : NSObject

@property (nonatomic, readonly, nonnull) NSString *imageId;

/**
 * Available sizes are listed here
 * http://api.yandex.ru/fotki/doc/format-ref/f-img.xml .
 */
@property (nonatomic, readonly, nonnull) NSString *size;

@property (nonatomic, readonly) NSUInteger width;

@property (nonatomic, readonly) NSUInteger height;


+ (nonnull YMKPhotosImage *)imageWithImageId:(nonnull NSString *)imageId
                                        size:(nonnull NSString *)size
                                       width:( NSUInteger)width
                                      height:( NSUInteger)height;


@end

/**
 * :nodoc:
 * Photo info with atom metainfo. Contains images of several sizes. The
 * image with ORIG size is always present.
 */
@interface YMKPhotosEntry : NSObject

/**
 * Atom part of the entry.
 */
@property (nonatomic, readonly, nonnull) YMKAtomEntry *atomEntry;

/**
 * Different size images of this photo.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKPhotosImage *> *images;

/**
 * Tags for this photo.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;

/**
 * Flag for images that are still under moderation.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *pending;


+ (nonnull YMKPhotosEntry *)entryWithAtomEntry:(nonnull YMKAtomEntry *)atomEntry
                                        images:(nonnull NSArray<YMKPhotosImage *> *)images
                                          tags:(nonnull NSArray<NSString *> *)tags
                                       pending:(nullable NSNumber *)pending;


@end

/**
 * :nodoc:
 * Photo feed page.
 */
@interface YMKPhotosFeed : NSObject

/**
 * Atom part of the feed.
 */
@property (nonatomic, readonly, nonnull) YMKAtomFeed *atomFeed;

/**
 * Photos in this part of the feed.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKPhotosEntry *> *entries;


+ (nonnull YMKPhotosFeed *)feedWithAtomFeed:(nonnull YMKAtomFeed *)atomFeed
                                    entries:(nonnull NSArray<YMKPhotosEntry *> *)entries;


@end
