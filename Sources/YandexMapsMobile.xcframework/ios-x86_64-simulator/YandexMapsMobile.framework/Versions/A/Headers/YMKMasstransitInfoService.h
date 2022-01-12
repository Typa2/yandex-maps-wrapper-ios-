#import <YandexMapsMobile/YMKGeoObjectSession.h>
#import <YandexMapsMobile/YMKMasstransitSession.h>

/**
 * :nodoc:
 * Provides methods to retrieve mass transit data from the server.
 */
@interface YMKMasstransitInfoService : NSObject

/**
 * Submits a request to retrieve detailed information about a mass
 * transit stop object by its ID.
 *
 * @param id Mass transit stop identifier.
 * @param objListener A listener that is used to retrieve a mass transit
 * stop geo object.
 */
- (nonnull YMKGeoObjectSession *)stopWithId:(nonnull NSString *)id
                           geoObjectHandler:(nonnull YMKGeoObjectSessionGeoObjectHandler)geoObjectHandler;

/**
 * Submits a request to retrieve detailed information about a mass
 * transit stop object by its URI.
 *
 * @param uri URI of the mass transit stop.
 * @param objListener A listener that is used to retrieve a mass transit
 * stop geo object.
 */
- (nonnull YMKGeoObjectSession *)resolveStopUriWithUri:(nonnull NSString *)uri
                                      geoObjectHandler:(nonnull YMKGeoObjectSessionGeoObjectHandler)geoObjectHandler;

/**
 * Submits a request to retrieve detailed information about schedules of
 * a mass transit stop object by its ID.
 *
 * @param stopId Mass transit stop identifier.
 * @param date Optional posix UTC timestamp defined in ms, specifies
 * service day for retrieving schedules. Use the first second of a day
 * to avoid inconvenience. Today is used if not specified. Timezone
 * offset of the stop will be added on the server side.
 * @param objListener A listener that is used to retrieve a mass transit
 * stop geo object.
 *
 * Remark:
 * @param date has optional type, it may be uninitialized.
 */
- (nonnull YMKGeoObjectSession *)scheduleWithStopId:(nonnull NSString *)stopId
                                               date:(nullable NSDate *)date
                                   geoObjectHandler:(nonnull YMKGeoObjectSessionGeoObjectHandler)geoObjectHandler;

/**
 * Submits a request to retrieve detailed information about schedules of
 * a mass transit stop object by its URI.
 *
 * @param uri URI of the mass transit stop.
 * @param date Optional posix UTC timestamp defined in ms, specifies
 * service day for retrieving schedules. Use the first second of a day
 * to avoid inconvenience. Today is used if not specified. Timezone
 * offset of the stop will be added on the server side.
 * @param objListener A listener that is used to retrieve a mass transit
 * stop geo object.
 *
 * Remark:
 * @param date has optional type, it may be uninitialized.
 */
- (nonnull YMKGeoObjectSession *)scheduleByStopUriWithUri:(nonnull NSString *)uri
                                                     date:(nullable NSDate *)date
                                         geoObjectHandler:(nonnull YMKGeoObjectSessionGeoObjectHandler)geoObjectHandler;

/**
 * Submits a request to retrieve detailed information about a mass
 * transit vehicle.
 *
 * @param id Mass transit vehicle identifier.
 * @param vehicleListener A listener that is used to retrieve a mass
 * transit vehicle object.
 */
- (nonnull YMKMasstransitVehicleSession *)vehicleWithId:(nonnull NSString *)id
                                         vehicleHandler:(nonnull YMKMasstransitVehicleSessionVehicleHandler)vehicleHandler;

/**
 * Submits a request to retrieve detailed information about a mass
 * transit thread.
 *
 * @param id Mass transit thread identifier.
 * @param threadListener A listener that is used to retrieve a mass
 * transit thread object.
 */
- (nonnull YMKMasstransitThreadSession *)threadWithId:(nonnull NSString *)id
                                        threadHandler:(nonnull YMKMasstransitThreadSessionThreadHandler)threadHandler;

/**
 * Submits a request to retrieve detailed information about the mass
 * transit line.
 *
 * @param id Mass transit line identifier.
 * @param lineListener A listener that is used to retrieve a mass
 * transit line object.
 */
- (nonnull YMKMasstransitLineSession *)lineWithId:(nonnull NSString *)id
                                      lineHandler:(nonnull YMKMasstransitLineSessionLineHandler)lineHandler;

/**
 * Submits a request to retrieve detailed information about the mass
 * transit line.
 *
 * @param uri Mass transit URI link for a line.
 * @param lineListener A listener that is used to retrieve a mass
 * transit line object.
 */
- (nonnull YMKMasstransitLineSession *)resolveLineUriWithUri:(nonnull NSString *)uri
                                                 lineHandler:(nonnull YMKMasstransitLineSessionLineHandler)lineHandler;

@end
