#import <YandexMapsMobile/YMKCarparksLayer.h>
#import <YandexMapsMobile/YMKCarparksNearbyLayer.h>
#import <YandexMapsMobile/YMKDrivingDrivingRouter.h>
#import <YandexMapsMobile/YMKDrivingVehicleOptions.h>
#import <YandexMapsMobile/YMKGuidanceGuide.h>
#import <YandexMapsMobile/YMKMapWindow.h>
#import <YandexMapsMobile/YMKNavigation.h>
#import <YandexMapsMobile/YMKNavigationLayer.h>
#import <YandexMapsMobile/YMKNavigationOptions.h>
#import <YandexMapsMobile/YMKRecordedSimulator.h>
#import <YandexMapsMobile/YRTReportData.h>

@interface YMKDirections : NSObject

/**
 * :nodoc:
 * Creates the carparks layer.
 */
- (nonnull YMKCarparksLayer *)createCarparksLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow;

/**
 * :nodoc:
 * Creates the nearby carparks layer.
 */
- (nonnull YMKCarparksNearbyLayer *)createCarparksNearbyLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow;

/**
 * Creates a manager that builds driving routes.
 */
- (nonnull YMKDrivingRouter *)createDrivingRouter;

/**
 * :nodoc:
 * Creates a guide.
 */
- (nonnull YMKGuidanceGuide *)createGuide;

/**
 * :nodoc:
 * Creates a suspended recorded simulator object with the given report.
 */
- (nonnull YMKRecordedSimulator *)createRecordedSimulatorWithReportData:(nonnull YRTReportData *)reportData;

/**
 * :nodoc:
 * Creates navigation engine with given options. Each call returns new
 * independent instance of Navigation.
 *
 * Remark:
 * @param navigationOptions has optional type, it may be uninitialized.
 * @param vehicleOptions has optional type, it may be uninitialized.
 */
- (nonnull YMKNavigation *)createNavigationWithNavigationOptions:(nullable YMKNavigationOptions *)navigationOptions
                                                  vehicleOptions:(nullable YMKDrivingVehicleOptions *)vehicleOptions;

/**
 * :nodoc:
 * Adds navigation layer on the map.
 *
 * Remark:
 * @param navigation has optional type, it may be uninitialized.
 */
- (nonnull YMKNavigationLayer *)createNavigationLayerWithMapWindow:(nonnull YMKMapWindow *)mapWindow
                                                        navigation:(nullable YMKNavigation *)navigation;

/**
 * :nodoc:
 * Creates a report factory.
 */
- (nonnull YRTReportFactory *)createReportFactory;

/**
 * Tells if this object is valid or no. Any method called on an invalid
 * object will throw an exception. The object becomes invalid only on UI
 * thread, and only when its implementation depends on objects already
 * destroyed by now. Please refer to general docs about the interface for
 * details on its invalidation.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

@end
