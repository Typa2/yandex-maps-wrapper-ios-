#import <YandexMapsMobile/YMKTransportAnnotationLang.h>
#import <YandexMapsMobile/YMKTransportSpeaker.h>

@class YMKTransportAnnotation;

/**
 * :nodoc:
 */
@protocol YMKTransportAnnotatorListener <NSObject>

- (void)maneuverAnnotated;

@end

/**
 * :nodoc:
 */
@interface YMKTransportAnnotator : NSObject
/**
 * Optional property, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKTransportAnnotation *currentAnnotation;

- (void)mute;

- (void)unmute;

- (void)addListenerWithAnnotatorListener:(nonnull id<YMKTransportAnnotatorListener>)annotatorListener;

- (void)removeListenerWithAnnotatorListener:(nonnull id<YMKTransportAnnotatorListener>)annotatorListener;

- (void)setLocalizedSpeakerWithSpeaker:(nonnull id<YMKTransportSpeaker>)speaker
                    annotationLanguage:(YMKTransportAnnotationLanguage)annotationLanguage;

- (void)resetSpeaker;

@end
