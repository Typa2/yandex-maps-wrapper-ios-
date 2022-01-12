#import <YandexMapsMobile/YMKAdjustedClock.h>

#import <yandex/maps/mapkit/transport/time/adjusted_clock.h>

#import <memory>

@interface YMKAdjustedClock ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::time::AdjustedClock>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::time::AdjustedClock>)nativeAdjustedClock;
- (std::shared_ptr<::yandex::maps::mapkit::transport::time::AdjustedClock>)native;

@end
