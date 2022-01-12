#import <YandexMapsMobile/YMKSearchBusinessFilter.h>

#import <yandex/maps/mapkit/search/business_filter.h>
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
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::BooleanValue, YMKSearchBusinessFilterBooleanValue, void> {
    static ::yandex::maps::mapkit::search::BusinessFilter::BooleanValue from(
        YMKSearchBusinessFilterBooleanValue* platformBooleanValue);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::BooleanValue, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchBusinessFilterBooleanValue*>::value>::type> {
    static ::yandex::maps::mapkit::search::BusinessFilter::BooleanValue from(
        PlatformType platformBooleanValue)
    {
        return ToNative<::yandex::maps::mapkit::search::BusinessFilter::BooleanValue, YMKSearchBusinessFilterBooleanValue>::from(
            platformBooleanValue);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::BusinessFilter::BooleanValue> {
    static YMKSearchBusinessFilterBooleanValue* from(
        const ::yandex::maps::mapkit::search::BusinessFilter::BooleanValue& booleanValue);
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
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::EnumValue, YMKSearchBusinessFilterEnumValue, void> {
    static ::yandex::maps::mapkit::search::BusinessFilter::EnumValue from(
        YMKSearchBusinessFilterEnumValue* platformEnumValue);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::EnumValue, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchBusinessFilterEnumValue*>::value>::type> {
    static ::yandex::maps::mapkit::search::BusinessFilter::EnumValue from(
        PlatformType platformEnumValue)
    {
        return ToNative<::yandex::maps::mapkit::search::BusinessFilter::EnumValue, YMKSearchBusinessFilterEnumValue>::from(
            platformEnumValue);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::BusinessFilter::EnumValue> {
    static YMKSearchBusinessFilterEnumValue* from(
        const ::yandex::maps::mapkit::search::BusinessFilter::EnumValue& enumValue);
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
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::RangeValue, YMKSearchBusinessFilterRangeValue, void> {
    static ::yandex::maps::mapkit::search::BusinessFilter::RangeValue from(
        YMKSearchBusinessFilterRangeValue* platformRangeValue);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::RangeValue, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchBusinessFilterRangeValue*>::value>::type> {
    static ::yandex::maps::mapkit::search::BusinessFilter::RangeValue from(
        PlatformType platformRangeValue)
    {
        return ToNative<::yandex::maps::mapkit::search::BusinessFilter::RangeValue, YMKSearchBusinessFilterRangeValue>::from(
            platformRangeValue);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::BusinessFilter::RangeValue> {
    static YMKSearchBusinessFilterRangeValue* from(
        const ::yandex::maps::mapkit::search::BusinessFilter::RangeValue& rangeValue);
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
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::DateValue, YMKSearchBusinessFilterDateValue, void> {
    static ::yandex::maps::mapkit::search::BusinessFilter::DateValue from(
        YMKSearchBusinessFilterDateValue* platformDateValue);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::DateValue, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, YMKSearchBusinessFilterDateValue*>::value>::type> {
    static ::yandex::maps::mapkit::search::BusinessFilter::DateValue from(
        PlatformType platformDateValue)
    {
        return ToNative<::yandex::maps::mapkit::search::BusinessFilter::DateValue, YMKSearchBusinessFilterDateValue>::from(
            platformDateValue);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::BusinessFilter::DateValue> {
    static YMKSearchBusinessFilterDateValue* from(
        const ::yandex::maps::mapkit::search::BusinessFilter::DateValue& dateValue);
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
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::Values, id, void> {
    static ::yandex::maps::mapkit::search::BusinessFilter::Values from(
        id platformValues);
};

template <typename PlatformType>
struct ToNative<::yandex::maps::mapkit::search::BusinessFilter::Values, PlatformType,
        typename std::enable_if<
            std::is_convertible<PlatformType, id>::value>::type> {
    static ::yandex::maps::mapkit::search::BusinessFilter::Values from(
        PlatformType platformValues)
    {
        return ToNative<::yandex::maps::mapkit::search::BusinessFilter::Values, id>::from(
            platformValues);
    }
};

template <>
struct ToPlatform<::yandex::maps::mapkit::search::BusinessFilter::Values> {
    static id from(
        const ::yandex::maps::mapkit::search::BusinessFilter::Values& values);
};

} // namespace internal
} // namespace ios
} // namespace bindings
} // namespace runtime
} // namespace maps
} // namespace yandex


