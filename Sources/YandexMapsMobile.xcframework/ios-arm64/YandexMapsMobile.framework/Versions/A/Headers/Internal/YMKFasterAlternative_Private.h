#import <YandexMapsMobile/YMKFasterAlternative.h>

#import <yandex/maps/mapkit/directions/guidance/faster_alternative.h>

#import <memory>

@interface YMKFasterAlternative ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::FasterAlternative>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::FasterAlternative>)nativeFasterAlternative;
- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::FasterAlternative>)native;

@end
