#import <YandexMapsMobile/YMKPanoramaPanoramaDescription.h>

#import <yandex/maps/mapkit/places/panorama/panorama_description.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>

namespace yandex {
namespace maps {
namespace mapkit {
namespace places {
namespace panorama {
namespace ios {

class UserPanoramaEventListenerBinding : public ::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener {
public:
    explicit UserPanoramaEventListenerBinding(
        id<YMKPanoramaUserPanoramaDelegate> platformListener);

    virtual void onPanoramaChangeIntent(
        const std::string& panoramaId) override;

    id<YMKPanoramaUserPanoramaDelegate> platformReference() const { return platformListener_; }

private:
    __weak id<YMKPanoramaUserPanoramaDelegate> platformListener_;
};

class TileImageFactoryBinding : public ::yandex::maps::mapkit::places::panorama::TileImageFactory {
public:
    explicit TileImageFactoryBinding(
        id<YMKPanoramaTileImageFactory> platformListener);

    virtual std::unique_ptr<::yandex::maps::runtime::image::ImageProvider> load(
        const std::string& panoramaId,
        unsigned int x,
        unsigned int y,
        unsigned int tileLevel) override;

    id<YMKPanoramaTileImageFactory> platformReference() const { return platformListener_; }

private:
    id<YMKPanoramaTileImageFactory> platformListener_;
};

class IconImageFactoryBinding : public ::yandex::maps::mapkit::places::panorama::IconImageFactory {
public:
    explicit IconImageFactoryBinding(
        id<YMKPanoramaIconImageFactory> platformListener);

    virtual std::unique_ptr<::yandex::maps::runtime::image::ImageProvider> load(
        const std::string& iconId,
        double scale) override;

    id<YMKPanoramaIconImageFactory> platformReference() const { return platformListener_; }

private:
    id<YMKPanoramaIconImageFactory> platformListener_;
};

class TileUrlProviderBinding : public ::yandex::maps::mapkit::places::panorama::TileUrlProvider {
public:
    explicit TileUrlProviderBinding(
        id<YMKPanoramaTileUrlProvider> platformListener);

    virtual std::string formatUrl(
        const std::string& panoramaId,
        unsigned int x,
        unsigned int y,
        unsigned int tileLevel) override;

    id<YMKPanoramaTileUrlProvider> platformReference() const { return platformListener_; }

private:
    id<YMKPanoramaTileUrlProvider> platformListener_;
};

class IconUrlProviderBinding : public ::yandex::maps::mapkit::places::panorama::IconUrlProvider {
public:
    explicit IconUrlProviderBinding(
        id<YMKPanoramaIconUrlProvider> platformListener);

    virtual std::string formatUrl(
        const std::string& iconId,
        double scale) override;

    id<YMKPanoramaIconUrlProvider> platformReference() const { return platformListener_; }

private:
    id<YMKPanoramaIconUrlProvider> platformListener_;
};

} // namespace ios
} // namespace panorama
} // namespace places
} // namespace mapkit
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::places::panorama::ImageSize, YMKPanoramaImageSize, void> {
    static ::yandex::maps::mapkit::places::panorama::ImageSize from(
        YMKPanoramaImageSize* platformImageSize);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::places::panorama::ImageSize, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKPanoramaImageSize*>::value>::type> {
    static ::yandex::maps::mapkit::places::panorama::ImageSize from(
        PlatformType platformImageSize)
    {
        return ToNative<::yandex::maps::mapkit::places::panorama::ImageSize, YMKPanoramaImageSize>::from(
            platformImageSize);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::places::panorama::ImageSize> {
    static YMKPanoramaImageSize* from(
        const ::yandex::maps::mapkit::places::panorama::ImageSize& imageSize);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::places::panorama::Position, YMKPanoramaPosition, void> {
    static ::yandex::maps::mapkit::places::panorama::Position from(
        YMKPanoramaPosition* platformPosition);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::places::panorama::Position, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKPanoramaPosition*>::value>::type> {
    static ::yandex::maps::mapkit::places::panorama::Position from(
        PlatformType platformPosition)
    {
        return ToNative<::yandex::maps::mapkit::places::panorama::Position, YMKPanoramaPosition>::from(
            platformPosition);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::places::panorama::Position> {
    static YMKPanoramaPosition* from(
        const ::yandex::maps::mapkit::places::panorama::Position& position);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex









namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::places::panorama::AngularBoundingBox, YMKPanoramaAngularBoundingBox, void> {
    static ::yandex::maps::mapkit::places::panorama::AngularBoundingBox from(
        YMKPanoramaAngularBoundingBox* platformAngularBoundingBox);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::places::panorama::AngularBoundingBox, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKPanoramaAngularBoundingBox*>::value>::type> {
    static ::yandex::maps::mapkit::places::panorama::AngularBoundingBox from(
        PlatformType platformAngularBoundingBox)
    {
        return ToNative<::yandex::maps::mapkit::places::panorama::AngularBoundingBox, YMKPanoramaAngularBoundingBox>::from(
            platformAngularBoundingBox);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::places::panorama::AngularBoundingBox> {
    static YMKPanoramaAngularBoundingBox* from(
        const ::yandex::maps::mapkit::places::panorama::AngularBoundingBox& angularBoundingBox);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener>, id<YMKPanoramaUserPanoramaDelegate>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener> from(
        id<YMKPanoramaUserPanoramaDelegate> platformUserPanoramaEventListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener> from(
        PlatformType platformUserPanoramaEventListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener>, id<YMKPanoramaUserPanoramaDelegate>>::from(
            platformUserPanoramaEventListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener>> {
    static id<YMKPanoramaUserPanoramaDelegate> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::UserPanoramaEventListener>& nativeUserPanoramaEventListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileImageFactory>, id<YMKPanoramaTileImageFactory>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileImageFactory> from(
        id<YMKPanoramaTileImageFactory> platformTileImageFactory);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileImageFactory>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileImageFactory> from(
        PlatformType platformTileImageFactory)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileImageFactory>, id<YMKPanoramaTileImageFactory>>::from(
            platformTileImageFactory);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileImageFactory>> {
    static id<YMKPanoramaTileImageFactory> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileImageFactory>& nativeTileImageFactory);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconImageFactory>, id<YMKPanoramaIconImageFactory>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconImageFactory> from(
        id<YMKPanoramaIconImageFactory> platformIconImageFactory);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconImageFactory>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconImageFactory> from(
        PlatformType platformIconImageFactory)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconImageFactory>, id<YMKPanoramaIconImageFactory>>::from(
            platformIconImageFactory);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconImageFactory>> {
    static id<YMKPanoramaIconImageFactory> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconImageFactory>& nativeIconImageFactory);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileUrlProvider>, id<YMKPanoramaTileUrlProvider>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileUrlProvider> from(
        id<YMKPanoramaTileUrlProvider> platformTileUrlProvider);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileUrlProvider>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileUrlProvider> from(
        PlatformType platformTileUrlProvider)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileUrlProvider>, id<YMKPanoramaTileUrlProvider>>::from(
            platformTileUrlProvider);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileUrlProvider>> {
    static id<YMKPanoramaTileUrlProvider> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::TileUrlProvider>& nativeTileUrlProvider);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconUrlProvider>, id<YMKPanoramaIconUrlProvider>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconUrlProvider> from(
        id<YMKPanoramaIconUrlProvider> platformIconUrlProvider);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconUrlProvider>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconUrlProvider> from(
        PlatformType platformIconUrlProvider)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconUrlProvider>, id<YMKPanoramaIconUrlProvider>>::from(
            platformIconUrlProvider);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconUrlProvider>> {
    static id<YMKPanoramaIconUrlProvider> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::IconUrlProvider>& nativeIconUrlProvider);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
