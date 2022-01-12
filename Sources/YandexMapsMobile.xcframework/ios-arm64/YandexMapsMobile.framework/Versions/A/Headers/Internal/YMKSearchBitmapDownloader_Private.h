#import <YandexMapsMobile/YMKSearchBitmapDownloader.h>

#import <yandex/maps/mapkit/search/bitmap_downloader.h>

#import <memory>

@interface YMKSearchBitmapDownloader ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::BitmapDownloader>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::BitmapDownloader>)nativeBitmapDownloader;
- (std::shared_ptr<::yandex::maps::mapkit::search::BitmapDownloader>)native;

@end
