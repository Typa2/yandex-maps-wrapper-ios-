#import <YandexMapsMobile/YMKPedestrianRouter.h>

#import <yandex/maps/mapkit/transport/masstransit/pedestrian_router.h>

#import <memory>

@interface YMKPedestrianRouter ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::transport::masstransit::PedestrianRouter>)native;

- (::yandex::maps::mapkit::transport::masstransit::PedestrianRouter *)nativePedestrianRouter;

@end
