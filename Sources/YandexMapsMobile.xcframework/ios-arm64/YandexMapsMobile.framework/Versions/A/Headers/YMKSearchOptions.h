#import <YandexMapsMobile/YMKPoint.h>
#import <YandexMapsMobile/YMKSearchDataTypes.h>

@class YMKSearchExperimentalMetadata;

/**
 * Struct to fine-tune search request.
 */
@interface YMKSearchOptions : NSObject

/**
 * The search type can be one of the YMKSearchType values or their
 * bitwise 'OR' combination. If searchType is not initialized, it means
 * to search in all the sources.
 */
@property (nonatomic, assign) YMKSearchType searchTypes;

/**
 * Maximum number of search results per page.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSNumber *resultPageSize;

/**
 * Snippets that will be requested. The value should be one of
 * YMKSearchSnippet, or their bitwise 'OR' combination.
 */
@property (nonatomic, assign) YMKSearchSnippet snippets;

/// :nodoc:
/**
 * :nodoc:
 * Experimental snippets that will be requested. Requested snippets can
 * be found in YMKSearchExperimentalMetadata.
 */
@property (nonatomic, strong, nonnull) NSArray<NSString *> *experimentalSnippets;

/**
 * The server uses the user position to calculate the distance from the
 * user to search results.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, strong, nullable) YMKPoint *userPosition;

/**
 * String that sets an identifier for the request source.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSString *origin;

/// :nodoc:
/**
 * :nodoc:
 * The landing page ID for Yandex.Direct. Used with 'Direct' SearchType.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSString *directPageId;

/// :nodoc:
/**
 * :nodoc:
 * The context from an Apple-directed session.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSString *appleCtx;

/**
 * Adds the geometry to the server response.
 */
@property (nonatomic, assign) BOOL geometry;

/// :nodoc:
/**
 * :nodoc:
 * The landing page ID for ads.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, copy, nullable) NSString *advertPageId;

/**
 * Enable word-by-word suggestion items.
 */
@property (nonatomic, assign) BOOL suggestWords;

/**
 * Force disable correction of spelling mistakes.
 */
@property (nonatomic, assign) BOOL disableSpellingCorrection;

+ (nonnull YMKSearchOptions *)searchOptionsWithSearchTypes:( YMKSearchType)searchTypes
                                            resultPageSize:(nullable NSNumber *)resultPageSize
                                                  snippets:( YMKSearchSnippet)snippets
                                      experimentalSnippets:(nonnull NSArray<NSString *> *)experimentalSnippets
                                              userPosition:(nullable YMKPoint *)userPosition
                                                    origin:(nullable NSString *)origin
                                              directPageId:(nullable NSString *)directPageId
                                                  appleCtx:(nullable NSString *)appleCtx
                                                  geometry:( BOOL)geometry
                                              advertPageId:(nullable NSString *)advertPageId
                                              suggestWords:( BOOL)suggestWords
                                 disableSpellingCorrection:( BOOL)disableSpellingCorrection;


@end
