#import <Foundation/Foundation.h>

@class YMKSearchExperimentalStorageItem;

/**
 * :nodoc:
 * Generic key-value property storage.
 */
@interface YMKSearchExperimentalStorage : NSObject

/**
 * List of items in a storage.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchExperimentalStorageItem *> *items;


+ (nonnull YMKSearchExperimentalStorage *)experimentalStorageWithItems:(nonnull NSArray<YMKSearchExperimentalStorageItem *> *)items;


@end

/**
 * Single storage item.
 */
@interface YMKSearchExperimentalStorageItem : NSObject

/**
 * Item key.
 */
@property (nonatomic, readonly, nonnull) NSString *key;

/**
 * Item value.
 */
@property (nonatomic, readonly, nonnull) NSString *value;


+ (nonnull YMKSearchExperimentalStorageItem *)itemWithKey:(nonnull NSString *)key
                                                    value:(nonnull NSString *)value;


@end

/**
 * :nodoc:
 * Snippet with experimental data.
 */
@interface YMKSearchExperimentalMetadata : NSObject

/**
 * Experimental data storage.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchExperimentalStorage *experimentalStorage;


+ (nonnull YMKSearchExperimentalMetadata *)experimentalMetadataWithExperimentalStorage:(nullable YMKSearchExperimentalStorage *)experimentalStorage;


@end
