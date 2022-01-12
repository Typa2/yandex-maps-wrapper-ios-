#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
@interface YMKCarparksCarparkTapInfo : NSObject

/**
 * Car park identifier.
 */
@property (nonatomic, readonly, nonnull) NSString *id;

/**
 * Car park type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Car park organization URI. Can be empty.
 */
@property (nonatomic, readonly, nonnull) NSString *uri;

/**
 * Car park object group. Objects of different groups can have different
 * visual representation (e.g. shape) and interact differently with a
 * user. Currently supported groups (the list may be changed in future):
 * "points", "polylines", "polygons" and "shields".
 */
@property (nonatomic, readonly, nonnull) NSString *group;

/**
 * Price of first hour of parking: value with unit.
 */
@property (nonatomic, readonly, nonnull) NSString *price;


+ (nonnull YMKCarparksCarparkTapInfo *)carparksCarparkTapInfoWithId:(nonnull NSString *)id
                                                               type:(nonnull NSString *)type
                                                                uri:(nonnull NSString *)uri
                                                              group:(nonnull NSString *)group
                                                              price:(nonnull NSString *)price;


@end
