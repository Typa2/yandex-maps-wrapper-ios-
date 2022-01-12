#import <YandexMapsMobile/YMKPhotosPhotosManager.h>

#import <yandex/maps/mapkit/places/photos/photos_manager.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace places {
namespace photos {
namespace ios {

PhotoSession::OnPhotosFeedReceived onPhotosFeedReceived(
    YMKPhotosSessionDataHandler handler);
PhotoSession::OnPhotosFeedError onPhotosFeedError(
    YMKPhotosSessionDataHandler handler);

ImageSession::OnImageReceived onImageReceived(
    YMKPhotosImageSessionHandler handler);
ImageSession::OnImageError onImageError(
    YMKPhotosImageSessionHandler handler);

} // namespace ios
} // namespace photos
} // namespace places
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKPhotosSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::places::photos::PhotoSession>)native;

- (::yandex::maps::mapkit::places::photos::PhotoSession *)nativePhotoSession;

@end

@interface YMKPhotosImageSession ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::places::photos::ImageSession>)native;

- (::yandex::maps::mapkit::places::photos::ImageSession *)nativeImageSession;

@end

@interface YMKPhotosManager ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(std::unique_ptr<::yandex::maps::mapkit::places::photos::PhotosManager>)native;

- (::yandex::maps::mapkit::places::photos::PhotosManager *)nativePhotosManager;

@end
