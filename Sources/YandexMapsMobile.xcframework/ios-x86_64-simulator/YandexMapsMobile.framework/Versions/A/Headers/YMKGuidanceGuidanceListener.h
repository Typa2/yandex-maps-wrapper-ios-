#import <Foundation/Foundation.h>

/**
 * :nodoc:
 */
@protocol YMKGuidanceGuidanceHandler <NSObject>

- (void)onLocationUpdated;

- (void)onRoutePositionUpdated;

- (void)onAnnotationsUpdated;

- (void)onRoadNameUpdated;

- (void)onFinishedRoute;

- (void)onLostRoute;

- (void)onReturnedToRoute;

- (void)onRouteUpdated;

- (void)onAlternativesUpdated;

- (void)onAlternativesTimeDifferenceUpdated;

- (void)onSpeedLimitUpdated;

- (void)onSpeedLimitExceededUpdated;

/**
 * see https://wiki.yandex-team.ru/users/tiki/navi/speed-limits/ for
 * details
 */
- (void)onSpeedLimitExceeded;

- (void)onLaneSignUpdated;

- (void)onUpcomingEventsUpdated;

- (void)onFasterAlternativeUpdated;

- (void)onParkingRoutesUpdated;

- (void)onLastViaPositionChanged;

- (void)onManeuverAnnotated;

- (void)onFasterAlternativeAnnotated;

- (void)onStandingStatusUpdated;

- (void)onFreeDriveRouteUpdated;

- (void)onReachedWayPoint;

- (void)onDirectionSignUpdated;

@end
