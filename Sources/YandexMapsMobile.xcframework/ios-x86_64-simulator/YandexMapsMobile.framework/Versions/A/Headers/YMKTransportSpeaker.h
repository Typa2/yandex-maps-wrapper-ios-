#import <YandexMapsMobile/YMKTransportAnnotationLang.h>
#import <YandexMapsMobile/YMKTransportPhraseTokens.h>

@class YMKTransportLocalizedPhrase;

/**
 * :nodoc:
 */
@protocol YMKTransportSpeaker <NSObject>

/**
 * Stops all speech and forgets all previously scheduled phrases.
 */
- (void)reset;

/**
 * Pronounces the phrase, interrupting the one being spoken now, if
 * neccessary.
 */
- (void)sayWithPhrase:(nonnull YMKTransportLocalizedPhrase *)phrase;

/**
 * Returns the phrase duration (how many seconds it takes to pronounce
 * it).
 */
- (double)durationWithPhrase:(nonnull YMKTransportLocalizedPhrase *)phrase;

@end

/**
 * :nodoc:
 */
@interface YMKTransportLocalizedPhrase : NSObject

@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> *tokens;

@property (nonatomic, readonly, nonnull) NSString *text;

@property (nonatomic, readonly) YMKTransportAnnotationLanguage language;


+ (nonnull YMKTransportLocalizedPhrase *)localizedPhraseWithTokens:(nonnull NSArray<NSNumber *> *)tokens
                                                              text:(nonnull NSString *)text
                                                          language:( YMKTransportAnnotationLanguage)language;


@end
