#import <YandexMapsMobile/YMKSearchCommon.h>
#import <YandexMapsMobile/YMKTaxiMoney.h>
#import <YandexMapsMobile/YMKTime.h>

/**
 * :nodoc:
 * Common parameters for booking response.
 */
@interface YMKSearchBookingParams : NSObject

/**
 * Date of check-in in UTC time zone.
 */
@property (nonatomic, readonly, nonnull) YMKTime *checkIn;

/**
 * Nights of stay.
 */
@property (nonatomic, readonly) NSUInteger nights;

/**
 * Number of persons to stay.
 */
@property (nonatomic, readonly) NSUInteger persons;


+ (nonnull YMKSearchBookingParams *)bookingParamsWithCheckIn:(nonnull YMKTime *)checkIn
                                                      nights:( NSUInteger)nights
                                                     persons:( NSUInteger)persons;


@end

/**
 * :nodoc:
 * Typed link to actual booking.
 */
@interface YMKSearchBookingLink : NSObject

/**
 * Link type.
 */
@property (nonatomic, readonly, nonnull) NSString *type;

/**
 * Link uri.
 */
@property (nonatomic, readonly, nonnull) NSString *uri;


+ (nonnull YMKSearchBookingLink *)bookingLinkWithType:(nonnull NSString *)type
                                                  uri:(nonnull NSString *)uri;


@end

/**
 * :nodoc:
 * Information about offer partner and price.
 */
@interface YMKSearchBookingOffer : NSObject

/**
 * Partner name. For example 'Яндекс.Путешествия'.
 */
@property (nonatomic, readonly, nonnull) NSString *partnerName;

/**
 * Typed links for actual booking.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchBookingLink *> *bookingLinks;

/**
 * Parnter favicon.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchImage *favicon;

/**
 * Booking price.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTaxiMoney *price;


+ (nonnull YMKSearchBookingOffer *)bookingOfferWithPartnerName:(nonnull NSString *)partnerName
                                                  bookingLinks:(nonnull NSArray<YMKSearchBookingLink *> *)bookingLinks
                                                       favicon:(nullable YMKSearchImage *)favicon
                                                         price:(nullable YMKTaxiMoney *)price;


@end

/**
 * :nodoc:
 * Response to find booking offers request.
 */
@interface YMKSearchBookingResponse : NSObject

/**
 * Common booking parameters.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchBookingParams *params;

/**
 * List of partner offers.
 */
@property (nonatomic, readonly, nonnull) NSArray<YMKSearchBookingOffer *> *offers;


+ (nonnull YMKSearchBookingResponse *)bookingResponseWithParams:(nullable YMKSearchBookingParams *)params
                                                         offers:(nonnull NSArray<YMKSearchBookingOffer *> *)offers;


@end
