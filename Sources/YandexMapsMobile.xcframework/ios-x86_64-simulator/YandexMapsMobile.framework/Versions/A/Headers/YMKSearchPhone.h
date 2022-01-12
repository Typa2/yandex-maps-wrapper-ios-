#import <Foundation/Foundation.h>

/**
 * Phone type
 */
typedef NS_ENUM(NSUInteger, YMKSearchPhoneType) {
    /**
     * Phone.
     */
    YMKSearchPhoneTypePhone,
    /**
     * Fax.
     */
    YMKSearchPhoneTypeFax,
    /**
     * Both phone and fax.
     */
    YMKSearchPhoneTypePhoneFax
};

/**
 * Organization phone.
 */
@interface YMKSearchPhone : NSObject

/**
 * Phone type.
 */
@property (nonatomic, readonly) YMKSearchPhoneType type;

/**
 * Full phone number as human readable string.
 */
@property (nonatomic, readonly, nonnull) NSString *formattedNumber;

/**
 * Some additional info to differentiate multiple phones for single
 * organization.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *info;

/**
 * Phone country code as unsigned integer.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *country;

/**
 * Phone prefix as unsigned integer.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *prefix;

/**
 * Phone extension as unsigned integer.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSNumber *ext;

/**
 * Phone number as unsigned integer.
 */
@property (nonatomic, readonly) NSUInteger number;


+ (nonnull YMKSearchPhone *)phoneWithType:( YMKSearchPhoneType)type
                          formattedNumber:(nonnull NSString *)formattedNumber
                                     info:(nullable NSString *)info
                                  country:(nullable NSNumber *)country
                                   prefix:(nullable NSNumber *)prefix
                                      ext:(nullable NSNumber *)ext
                                   number:( NSUInteger)number;


@end
