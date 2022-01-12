#import <YandexMapsMobile/YMKMasstransitRoute.h>
#import <YandexMapsMobile/YRTSubscription.h>

#import <yandex/maps/mapkit/transport/masstransit/route.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_native_fwd.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/bindings/ios/to_platform_fwd.h>
#import <yandex/maps/runtime/ios/object.h>

#import <memory>
#import <type_traits>

namespace yandex {
namespace maps {
namespace mapkit {
namespace transport {
namespace masstransit {
namespace ios {

class RouteJamsListenerBinding : public ::yandex::maps::mapkit::transport::masstransit::RouteJamsListener {
public:
    explicit RouteJamsListenerBinding(
        id<YMKMasstransitRouteJamsListener> platformListener);

    virtual void onJamsUpdated(
        std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Route>& route) override;

    virtual void onJamsOutdated(
        std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Route>& route) override;

    id<YMKMasstransitRouteJamsListener> platformReference() const { return platformListener_; }

private:
    __weak id<YMKMasstransitRouteJamsListener> platformListener_;
};

} // namespace ios
} // namespace masstransit
} // namespace transport
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Wait, YMKMasstransitWait, void> {
    static ::yandex::maps::mapkit::transport::masstransit::Wait from(
        YMKMasstransitWait* platformWait);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::Wait, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitWait*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::Wait from(
        PlatformType platformWait)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::Wait, YMKMasstransitWait>::from(
            platformWait);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::Wait> {
    static YMKMasstransitWait* from(
        const ::yandex::maps::mapkit::transport::masstransit::Wait& wait);
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::ConstructionSegment, YMKMasstransitConstructionSegment, void> {
    static ::yandex::maps::mapkit::transport::masstransit::ConstructionSegment from(
        YMKMasstransitConstructionSegment* platformConstructionSegment);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::ConstructionSegment, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKMasstransitConstructionSegment*>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::ConstructionSegment from(
        PlatformType platformConstructionSegment)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::ConstructionSegment, YMKMasstransitConstructionSegment>::from(
            platformConstructionSegment);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::ConstructionSegment> {
    static YMKMasstransitConstructionSegment* from(
        const ::yandex::maps::mapkit::transport::masstransit::ConstructionSegment& constructionSegment);
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
struct ToNative<::yandex::maps::mapkit::transport::masstransit::SectionMetadata::SectionData, id, void> {
    static ::yandex::maps::mapkit::transport::masstransit::SectionMetadata::SectionData from(
        id platformSectionData);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::transport::masstransit::SectionMetadata::SectionData, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, id>::value>::type> {
    static ::yandex::maps::mapkit::transport::masstransit::SectionMetadata::SectionData from(
        PlatformType platformSectionData)
    {
        return ToNative<::yandex::maps::mapkit::transport::masstransit::SectionMetadata::SectionData, id>::from(
            platformSectionData);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::transport::masstransit::SectionMetadata::SectionData> {
    static id from(
        const ::yandex::maps::mapkit::transport::masstransit::SectionMetadata::SectionData& sectionData);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex











@interface YMKMasstransitRoute ()

- (id)initWithWrappedNative:(NSValue *)native;
- (id)initWithNative:(const std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Route>&)native;

- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Route>)nativeRoute;
- (std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::Route>)native;

@end

namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::RouteJamsListener>, id<YMKMasstransitRouteJamsListener>, void> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::RouteJamsListener> from(
        id<YMKMasstransitRouteJamsListener> platformRouteJamsListener);
};
template <typename PlatformType>
struct ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::RouteJamsListener>, PlatformType> {
    static std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::RouteJamsListener> from(
        PlatformType platformRouteJamsListener)
    {
        return ToNative<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::RouteJamsListener>, id<YMKMasstransitRouteJamsListener>>::from(
            platformRouteJamsListener);
    }
};

template <>
struct ToPlatform<std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::RouteJamsListener>> {
    static id<YMKMasstransitRouteJamsListener> from(
        const std::shared_ptr<::yandex::maps::mapkit::transport::masstransit::RouteJamsListener>& nativeRouteJamsListener);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
