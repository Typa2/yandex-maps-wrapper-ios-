#import <YandexMapsMobile/YMKSearchCommon.h>
#import <YandexMapsMobile/YMKTaxiMoney.h>

@class YMKSearchAdvertisementLink;
@class YMKSearchAdvertisementProduct;
@class YMKSearchAdvertisementPromo;
@class YMKSearchAdvertisementTextData;

/**
 * :nodoc:
 */
@interface YMKSearchAdvertImage : NSObject

/**
 * Url for the image.
 */
@property (nonatomic, readonly, nonnull) NSString *url;

/**
 * Image tags.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *tags;


+ (nonnull YMKSearchAdvertImage *)advertImageWithUrl:(nonnull NSString *)url
                                                tags:(nonnull NSArray<NSString *> *)tags;


@end

/**
 * :nodoc:
 */
@interface YMKSearchAdvertisement : NSObject

/**
 * Text advert.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchAdvertisementTextData *textData;

/**
 * Promo.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchAdvertisementPromo *promo;

/**
 * Products.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchAdvertisementProduct *> *products;

/**
 * Company detailed description.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *about;

/**
 * Company logo.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchAdvertImage *logo;

/**
 * Photo.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchAdvertImage *photo;

/**
 * Additional typed images.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchAdvertImage *> *images;

/**
 * Advert actions.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchAction *> *actions;

/**
 * Human-readable identifier for logging.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *logId;

/**
 * Additional advertisement properties.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchKeyValuePair *> *properties;

/**
 * If true, geoobject should be visually selected.
 */
@property (nonatomic, readonly) BOOL highlighted;


+ (nonnull YMKSearchAdvertisement *)advertisementWithTextData:(nullable YMKSearchAdvertisementTextData *)textData
                                                        promo:(nullable YMKSearchAdvertisementPromo *)promo
                                                     products:(nonnull NSArray<YMKSearchAdvertisementProduct *> *)products
                                                        about:(nullable NSString *)about
                                                         logo:(nullable YMKSearchAdvertImage *)logo
                                                        photo:(nullable YMKSearchAdvertImage *)photo
                                                       images:(nonnull NSArray<YMKSearchAdvertImage *> *)images
                                                      actions:(nonnull NSArray<YMKSearchAction *> *)actions
                                                        logId:(nullable NSString *)logId
                                                   properties:(nonnull NSArray<YMKSearchKeyValuePair *> *)properties
                                                  highlighted:( BOOL)highlighted;


@end

/**
 * :nodoc:
 * Link.
 */
@interface YMKSearchAdvertisementLink : NSObject

/**
 * Optional link type.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *type;

/**
 * Link URI.
 */
@property (nonatomic, readonly, nonnull) NSString *uri;


+ (nonnull YMKSearchAdvertisementLink *)linkWithType:(nullable NSString *)type
                                                 uri:(nonnull NSString *)uri;


@end

/**
 * :nodoc:
 * Promo.
 */
@interface YMKSearchAdvertisementPromo : NSObject

/**
 * Title.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * Details.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *details;

/**
 * Disclaimers.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *disclaimers;

/**
 * URL.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *url;

/**
 * Banner.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchAdvertImage *banner;

/**
 * Disclaimers.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *fullDisclaimer;


+ (nonnull YMKSearchAdvertisementPromo *)promoWithTitle:(nullable NSString *)title
                                                details:(nullable NSString *)details
                                            disclaimers:(nonnull NSArray<NSString *> *)disclaimers
                                                    url:(nullable NSString *)url
                                                 banner:(nullable YMKSearchAdvertImage *)banner
                                         fullDisclaimer:(nullable NSString *)fullDisclaimer;


@end

/**
 * :nodoc:
 * Product.
 */
@interface YMKSearchAdvertisementProduct : NSObject

/**
 * Title.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * URL.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *url;

/**
 * Photo.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchAdvertImage *photo;

/**
 * Price.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTaxiMoney *price;


+ (nonnull YMKSearchAdvertisementProduct *)productWithTitle:(nullable NSString *)title
                                                        url:(nullable NSString *)url
                                                      photo:(nullable YMKSearchAdvertImage *)photo
                                                      price:(nullable YMKTaxiMoney *)price;


@end

/**
 * :nodoc:
 * Text.
 */
@interface YMKSearchAdvertisementTextData : NSObject

/**
 * Title.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 * Text.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *text;

/**
 * Disclaimers.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSString *> *disclaimers;

/**
 * Optional link.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) NSString *url;


+ (nonnull YMKSearchAdvertisementTextData *)textDataWithTitle:(nullable NSString *)title
                                                         text:(nullable NSString *)text
                                                  disclaimers:(nonnull NSArray<NSString *> *)disclaimers
                                                          url:(nullable NSString *)url;


@end
