#import <YandexMapsMobile/YMKSearchLayer.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/search/search_layer/search_layer.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>

namespace yandex {
namespace maps {
namespace mapkit {
namespace search {
namespace search_layer {
namespace ios {

class SearchResultListenerBinding : public ::yandex::maps::mapkit::search::search_layer::SearchResultListener {
public:
    explicit SearchResultListenerBinding(
        id<YMKSearchLayerResponseHandler> platformListener);

    virtual void onSearchStart(
        ::yandex::maps::mapkit::search::search_layer::RequestType requestType) override;

    virtual void onSearchSuccess(
        ::yandex::maps::mapkit::search::search_layer::RequestType requestType) override;

    virtual void onSearchError(
        ::yandex::maps::runtime::Error* error,
        ::yandex::maps::mapkit::search::search_layer::RequestType requestType) override;

    virtual void onPresentedResultsUpdate() override;

    virtual void onAllResultsClear() override;

    id<YMKSearchLayerResponseHandler> platformReference() const { return platformListener_; }

private:
    __weak id<YMKSearchLayerResponseHandler> platformListener_;
};

class PlacemarkListenerBinding : public ::yandex::maps::mapkit::search::search_layer::PlacemarkListener {
public:
    explicit PlacemarkListenerBinding(
        id<YMKSearchLayerTapHandler> platformListener);

    virtual bool onTap(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultItem>& searchResultItem) override;

    id<YMKSearchLayerTapHandler> platformReference() const { return platformListener_; }

private:
    __weak id<YMKSearchLayerTapHandler> platformListener_;
};

} // namespace ios
} // namespace search_layer
} // namespace search
} // namespace mapkit
} // namespace maps
} // namespace yandex

@interface YMKSearchLayer ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchLayer>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchLayer>)nativeSearchLayer;
- (std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchLayer>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultListener>, id<YMKSearchLayerResponseHandler>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultListener> from(
        id<YMKSearchLayerResponseHandler> platformSearchResultListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultListener> from(
        PlatformType platformSearchResultListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultListener>, id<YMKSearchLayerResponseHandler>>::from(
            platformSearchResultListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultListener>> {
    static id<YMKSearchLayerResponseHandler> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::SearchResultListener>& nativeSearchResultListener);
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
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::PlacemarkListener>, id<YMKSearchLayerTapHandler>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::search::search_layer::PlacemarkListener> from(
        id<YMKSearchLayerTapHandler> platformPlacemarkListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::PlacemarkListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::search::search_layer::PlacemarkListener> from(
        PlatformType platformPlacemarkListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::PlacemarkListener>, id<YMKSearchLayerTapHandler>>::from(
            platformPlacemarkListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::search::search_layer::PlacemarkListener>> {
    static id<YMKSearchLayerTapHandler> from(
        const std::shared_ptr<::yandex::maps::mapkit::search::search_layer::PlacemarkListener>& nativePlacemarkListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
