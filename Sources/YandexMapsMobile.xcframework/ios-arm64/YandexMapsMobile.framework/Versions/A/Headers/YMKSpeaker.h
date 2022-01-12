#import <YandexMapsMobile/YMKDrivingAnnotationLang.h>
#import <YandexMapsMobile/YMKNavigationPhraseToken.h>

@class YMKLocalizedPhrase;

/**
 * :nodoc:
 */
@protocol YMKSpeaker <NSObject>

/**
 * Stops all speech and forgets all previously scheduled phrases.
 */
- (void)reset;

/**
 * Pronounces the phrase, interrupting the one being spoken now, if
 * neccessary.
 */
- (void)sayWithPhrase:(nonnull YMKLocalizedPhrase *)phrase;

/**
 * Returns the phrase duration (how many seconds it takes to pronounce
 * it).
 */
- (double)durationWithPhrase:(nonnull YMKLocalizedPhrase *)phrase;

@end

/**
 * :nodoc:
 */
@interface YMKLocalizedPhrase : NSObject

@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> *tokens;

@property (nonatomic, readonly, nonnull) NSString *text;

@property (nonatomic, readonly) YMKDrivingAnnotationLanguage language;


+ (nonnull YMKLocalizedPhrase *)localizedPhraseWithTokens:(nonnull NSArray<NSNumber *> *)tokens
                                                     text:(nonnull NSString *)text
                                                 language:( YMKDrivingAnnotationLanguage)language;


@end
