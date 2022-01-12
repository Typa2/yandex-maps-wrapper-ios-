#import <YandexMapsMobile/YMKTransport.h>

#import <yandex/maps/mapkit/transport/transport.h>

#import <memory>

@interface YMKTransport ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::Transport>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::Transport>)nativeTransport;
- (std::shared_ptr<::yandex::maps::mapkit::transport::Transport>)native;

@end
