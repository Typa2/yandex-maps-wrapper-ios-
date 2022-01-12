#import <YandexMapsMobile/YMKVehicleData.h>

#import <yandex/maps/mapkit/transport/masstransit/vehicle_data.h>

#import <memory>

@interface YMKVehicleData ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::VehicleData>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::VehicleData>)nativeVehicleData;
- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::VehicleData>)native;

@end
