#import <YandexMapsMobile/YMKDrivingAnnotationLang.h>
#import <YandexMapsMobile/YMKPhraseTokens.h>

@class YMKGuidanceLocalizedPhrase;

/**
 * :nodoc:
 */
@protocol YMKGuidanceLocalizedSpeaker <NSObject>

/**
 * Stops all speech and forgets all previously scheduled phrases.
 */
- (void)reset;

/**
 * Pronounces the phrase, interrupting the one being spoken now, if
 * neccessary.
 */
- (void)sayWithPhrase:(nonnull YMKGuidanceLocalizedPhrase *)phrase;

/**
 * Returns the phrase duration (how many seconds it takes to pronounce
 * it).
 */
- (double)durationWithPhrase:(nonnull YMKGuidanceLocalizedPhrase *)phrase;

@end

/**
 * :nodoc:
 */
@interface YMKGuidanceLocalizedPhrase : NSObject

- (NSUInteger)tokensCount;

- (YMKPhraseToken)tokenWithIndex:(NSUInteger)index;

- (nonnull NSString *)text;

- (YMKDrivingAnnotationLanguage)language;

@end
