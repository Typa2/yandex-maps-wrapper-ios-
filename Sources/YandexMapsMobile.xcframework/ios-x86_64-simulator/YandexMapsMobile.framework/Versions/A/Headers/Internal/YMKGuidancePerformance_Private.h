#import <YandexMapsMobile/YMKGuidancePerformance.h>

#import <yandex/maps/mapkit/directions/guidance/performance.h>

#import <memory>

@interface YMKGuidancePerformanceMonitor ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::directions::guidance::PerformanceMonitor>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::PerformanceMonitor>)nativePerformanceMonitor;
- (std::shared_ptr<::yandex::maps::mapkit::directions::guidance::PerformanceMonitor>)native;

@end
