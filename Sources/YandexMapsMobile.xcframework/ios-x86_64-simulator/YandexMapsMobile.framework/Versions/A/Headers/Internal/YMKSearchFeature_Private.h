#import <YandexMapsMobile/YMKSearchFeature.h>

#import <yandex/maps/mapkit/search/feature.h>
#import <yandex/maps/runtime/bindings/ios/to_native.h>
#import <yandex/maps/runtime/bindings/ios/to_native_fwd.h>
#import <yandex/maps/runtime/bindings/ios/to_platform.h>
#import <yandex/maps/runtime/bindings/ios/to_platform_fwd.h>

#import <type_traits>



namespace yandex {
namespace maps {
namespace runtime {
namespace bindings {
namespace ios {
namespace internal {

template <>
struct ToNative<::yandex::maps::mapkit::search::Feature::EnumValue, YMKSearchFeatureEnumValue, void> {
    static ::yandex::maps::mapkit::search::Feature::EnumValue from(
        YMKSearchFeatureEnumValue* platformEnumValue);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Feature::EnumValue, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchFeatureEnumValue*>::value>::type> {
    static ::yandex::maps::mapkit::search::Feature::EnumValue from(
        PlatformType platformEnumValue)
    {
        return ToNative<::yandex::maps::mapkit::search::Feature::EnumValue, YMKSearchFeatureEnumValue>::from(
            platformEnumValue);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Feature::EnumValue> {
    static YMKSearchFeatureEnumValue* from(
        const ::yandex::maps::mapkit::search::Feature::EnumValue& enumValue);
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
struct ToNative<::yandex::maps::mapkit::search::Feature::VariantValue, id, void> {
    static ::yandex::maps::mapkit::search::Feature::VariantValue from(
        id platformVariantValue);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::Feature::VariantValue, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, id>::value>::type> {
    static ::yandex::maps::mapkit::search::Feature::VariantValue from(
        PlatformType platformVariantValue)
    {
        return ToNative<::yandex::maps::mapkit::search::Feature::VariantValue, id>::from(
            platformVariantValue);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::Feature::VariantValue> {
    static id from(
        const ::yandex::maps::mapkit::search::Feature::VariantValue& variantValue);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex
