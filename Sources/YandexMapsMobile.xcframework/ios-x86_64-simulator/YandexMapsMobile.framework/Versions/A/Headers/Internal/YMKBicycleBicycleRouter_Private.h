#import <YandexMapsMobile/YMKBicycleBicycleRouter.h>

#import <yandex/maps/mapkit/transport/bicycle/bicycle_router.h>

#import <memory>

@interface YMKBicycleRouter ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::bicycle::BicycleRouter>)native;

- (::yandex::maps::mapkit::transport::bicycle::BicycleRouter *)nativeBicycleRouter;

@end
