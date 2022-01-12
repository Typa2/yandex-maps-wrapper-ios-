#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * Parameters for booking offers search.
 */
@interface YMKSearchBookingRequestParams : NSObject

/**
 * Date of check-in in YYYY-MM-DD format.
 */
@property (nonatomic, readonly, nonnull) NSString *checkIn;

/**
 * Nights of stay.
 */
@property (nonatomic, readonly) NSUInteger nights;

/**
 * Number of persons to stay.
 */
@property (nonatomic, readonly) NSUInteger persons;


+ (nonnull YMKSearchBookingRequestParams *)bookingRequestParamsWithCheckIn:(nonnull NSString *)checkIn
                                                                    nights:( NSUInteger)nights
                                                                   persons:( NSUInteger)persons;


@end
