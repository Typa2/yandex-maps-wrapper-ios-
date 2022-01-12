#import <YandexMapsMobile/YMKPanoramaPlayer.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/places/panorama/player.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace places {
namespace panorama {
namespace ios {

class PanoramaChangeListenerBinding : public ::yandex::maps::mapkit::places::panorama::PanoramaChangeListener {
public:
    explicit PanoramaChangeListenerBinding(
        id<YMKPanoramaChangeDelegate> platformListener);

    virtual void onPanoramaChanged(
        ::yandex::maps::mapkit::places::panorama::Player* player) override;

    id<YMKPanoramaChangeDelegate> platformReference() const { return platformListener_; }

private:
    __weak id<YMKPanoramaChangeDelegate> platformListener_;
};

class DirectionChangeListenerBinding : public ::yandex::maps::mapkit::places::panorama::DirectionChangeListener {
public:
    explicit DirectionChangeListenerBinding(
        id<YMKPanoramaDirectionChangeDelegate> platformListener);

    virtual void onPanoramaDirectionChanged(
        ::yandex::maps::mapkit::places::panorama::Player* player) override;

    id<YMKPanoramaDirectionChangeDelegate> platformReference() const { return platformListener_; }

private:
    __weak id<YMKPanoramaDirectionChangeDelegate> platformListener_;
};

class SpanChangeListenerBinding : public ::yandex::maps::mapkit::places::panorama::SpanChangeListener {
public:
    explicit SpanChangeListenerBinding(
        id<YMKPanoramaSpanChangeDelegate> platformListener);

    virtual void onPanoramaSpanChanged(
        ::yandex::maps::mapkit::places::panorama::Player* player) override;

    id<YMKPanoramaSpanChangeDelegate> platformReference() const { return platformListener_; }

private:
    __weak id<YMKPanoramaSpanChangeDelegate> platformListener_;
};

class ErrorListenerBinding : public ::yandex::maps::mapkit::places::panorama::ErrorListener {
public:
    explicit ErrorListenerBinding(
        id<YMKPanoramaErrorDelegate> platformListener);

    virtual void onPanoramaOpenError(
        ::yandex::maps::mapkit::places::panorama::Player* player,
        ::yandex::maps::runtime::Error* error) override;

    id<YMKPanoramaErrorDelegate> platformReference() const { return platformListener_; }

private:
    __weak id<YMKPanoramaErrorDelegate> platformListener_;
};

} // namespace ios
} // namespace panorama
} // namespace places
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKPanoramaPlayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::places::panorama::Player>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::places::panorama::Player>)nativePlayer;
- (std::shared_ptr<::yandex::maps::mapkit::places::panorama::Player>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaChangeListener>, id<YMKPanoramaChangeDelegate>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaChangeListener> from(
        id<YMKPanoramaChangeDelegate> platformPanoramaChangeListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaChangeListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaChangeListener> from(
        PlatformType platformPanoramaChangeListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaChangeListener>, id<YMKPanoramaChangeDelegate>>::from(
            platformPanoramaChangeListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaChangeListener>> {
    static id<YMKPanoramaChangeDelegate> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::PanoramaChangeListener>& nativePanoramaChangeListener);
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::DirectionChangeListener>, id<YMKPanoramaDirectionChangeDelegate>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::DirectionChangeListener> from(
        id<YMKPanoramaDirectionChangeDelegate> platformDirectionChangeListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::DirectionChangeListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::DirectionChangeListener> from(
        PlatformType platformDirectionChangeListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::DirectionChangeListener>, id<YMKPanoramaDirectionChangeDelegate>>::from(
            platformDirectionChangeListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::DirectionChangeListener>> {
    static id<YMKPanoramaDirectionChangeDelegate> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::DirectionChangeListener>& nativeDirectionChangeListener);
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::SpanChangeListener>, id<YMKPanoramaSpanChangeDelegate>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::SpanChangeListener> from(
        id<YMKPanoramaSpanChangeDelegate> platformSpanChangeListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::SpanChangeListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::SpanChangeListener> from(
        PlatformType platformSpanChangeListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::SpanChangeListener>, id<YMKPanoramaSpanChangeDelegate>>::from(
            platformSpanChangeListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::SpanChangeListener>> {
    static id<YMKPanoramaSpanChangeDelegate> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::SpanChangeListener>& nativeSpanChangeListener);
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::ErrorListener>, id<YMKPanoramaErrorDelegate>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::ErrorListener> from(
        id<YMKPanoramaErrorDelegate> platformErrorListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::ErrorListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::places::panorama::ErrorListener> from(
        PlatformType platformErrorListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::places::panorama::ErrorListener>, id<YMKPanoramaErrorDelegate>>::from(
            platformErrorListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::places::panorama::ErrorListener>> {
    static id<YMKPanoramaErrorDelegate> from(
        const std::shared_ptr<::yandex::maps::mapkit::places::panorama::ErrorListener>& nativeErrorListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
