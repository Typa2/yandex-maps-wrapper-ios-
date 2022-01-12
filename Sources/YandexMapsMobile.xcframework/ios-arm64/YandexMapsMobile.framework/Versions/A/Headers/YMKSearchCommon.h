#import <Foundation/Foundation.h>

/**
 * Universal key-value data.
 */
@interface YMKSearchKeyValuePair : NSObject

/**
 * Data key. For example, "currency".
 */
@property (nonatomic, readonly, nonnull) NSString *key;

/**
 * Data value. For example, "USD".
 */
@property (nonatomic, readonly, nonnull) NSString *value;


+ (nonnull YMKSearchKeyValuePair *)keyValuePairWithKey:(nonnull NSString *)key
                                                 value:(nonnull NSString *)value;


@end

/**
 * :nodoc:
* CTA https://en.wikipedia.org/wiki/Call_to_action_(marketing)
 */
@interface YMKSearchAction : NSObject

/**
 * Action type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Additional action properties.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchKeyValuePair *> *properties;


+ (nonnull YMKSearchAction *)actionWithType:(nonnull NSString *)type
                                 properties:(nonnull NSArray<YMKSearchKeyValuePair *> *)properties;


@end

@interface YMKSearchImage : NSObject

/**
 * urlTemplate for the image.
 */
@property (nonatomic, readonly, nonnull) NSString *urlTemplate;

/**
 * Image tags.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;


+ (nonnull YMKSearchImage *)imageWithUrlTemplate:(nonnull NSString *)urlTemplate
                                            tags:(nonnull NSArray<NSString *> *)tags;


@end
