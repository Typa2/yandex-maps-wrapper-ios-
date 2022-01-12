#import <YandexMapsMobile/YMKAtomFeed.h>

/**
 * :nodoc:
 * Counter for Yandex.Direct ads.
 */
@interface YMKSearchCounter : NSObject

/**
 * YABS counter type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Link to external site (via YABS).
 */
@property (nonatomic, readonly, nonnull) NSString *url;


+ (nonnull YMKSearchCounter *)counterWithType:(nonnull NSString *)type
                                          url:(nonnull NSString *)url;


@end

/**
 * :nodoc:
 * Company contact info.
 */
@interface YMKSearchContactInfo : NSObject

/**
 * Company name.
 */
@property (nonatomic, readonly, nonnull) NSString *companyName;

/**
 * Company formatted address.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *address;

/**
 * Company phone.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *phone;

/**
 * Company email.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *email;

/**
 * Company working hours.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *hours;


+ (nonnull YMKSearchContactInfo *)contactInfoWithCompanyName:(nonnull NSString *)companyName
                                                     address:(nullable NSString *)address
                                                       phone:(nullable NSString *)phone
                                                       email:(nullable NSString *)email
                                                       hours:(nullable NSString *)hours;


@end

/**
 * :nodoc:
 * Additional data for Yandex.Direct objects.
 */
@interface YMKSearchDirectObjectMetadata : NSObject

/**
 * Ad title.
 */
@property (nonatomic, readonly, nonnull) NSString *title;

/**
 * Ad text.
 */
@property (nonatomic, readonly, nonnull) NSString *text;

/**
 * Additional ad text.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *extra;

/**
 * Disclaimer list for the ad.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *disclaimers;

/**
 * Company domain.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *domain;

/**
 * When a user clicks the banner, this is the URL to go to.
 */
@property (nonatomic, readonly, nonnull) NSString *url;

/**
 * Counters that should be used when displaying the Yandex.Direct
 * object.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchCounter *> *counters;

/**
 * List of links for the object.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKAtomLink *> *links;

/**
 * Optional contact info for the Yandex.Direct object.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchContactInfo *contactInfo;


+ (nonnull YMKSearchDirectObjectMetadata *)directObjectMetadataWithTitle:(nonnull NSString *)title
                                                                    text:(nonnull NSString *)text
                                                                   extra:(nullable NSString *)extra
                                                             disclaimers:(nonnull NSArray<NSString *> *)disclaimers
                                                                  domain:(nullable NSString *)domain
                                                                     url:(nonnull NSString *)url
                                                                counters:(nonnull NSArray<YMKSearchCounter *> *)counters
                                                                   links:(nonnull NSArray<YMKAtomLink *> *)links
                                                             contactInfo:(nullable YMKSearchContactInfo *)contactInfo;


@end
