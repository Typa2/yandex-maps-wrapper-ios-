#import <Foundation/Foundation.h>

@class YMKSearchBusinessPhotoObjectMetadata;
@class YMKSearchBusinessRating1xObjectMetadata;
@class YMKSearchCurrencyExchangeMetadata;
@class YMKSearchDiscovery2xObjectMetadata;
@class YMKSearchEncyclopediaObjectMetadata;
@class YMKSearchFuelMetadata;
@class YMKSearchGoods1xObjectMetadata;
@class YMKSearchMassTransit1xObjectMetadata;
@class YMKSearchPanoramasObjectMetadata;
@class YMKSearchRelatedAdvertsObjectMetadata;
@class YMKSearchRelatedPlacesObjectMetadata;
@class YMKSearchRouteDistancesObjectMetadata;
@class YMKSearchRoutePointMetadata;
@class YMKSearchShowtimesObjectMetadata;
@class YMKSearchSubtitleMetadata;
@class YMKSearchVisualHintsObjectMetadata;

/**
 * Precision for matching house numbers (response vs. request).
 */
typedef NS_ENUM(NSUInteger, YMKSearchPrecision) {
    /**
     * The house number in the response is exactly the same as requested
     * (3/2 vs. 3/2)
     */
    YMKSearchPrecisionExact,
    /**
     * The house number in the response has the same number part as the
     * requested one (5 vs. 5a).
     */
    YMKSearchPrecisionNumber,
    /**
     * The house number and coordinates are restored from the house range.
     * This means that there is no information about this specific house,
     * but there is information about a range of houses to infer house
     * position from.
     */
    YMKSearchPrecisionRange,
    /**
     * The house number in the response is close to the requested one (13
     * vs. 11).
     */
    YMKSearchPrecisionNearby
};

/**
 * Bitmask for requested search types.
 */
typedef NS_OPTIONS(NSUInteger, YMKSearchType) {
    /**
     * :nodoc:
     * Default value: all types requested.
     */
    YMKSearchTypeNone = 0,
    /**
     * Toponyms.
     */
    YMKSearchTypeGeo = 1,
    /**
     * Companies.
     */
    YMKSearchTypeBiz = 1 << 1,
    /**
     * :nodoc:
     * Mass transit routes.
     */
    YMKSearchTypeTransit = 1 << 2,
    /**
     * :nodoc:
     * Collections.
     */
    YMKSearchTypeCollections = 1 << 3,
    /**
     * :nodoc:
     * Direct advertisements.
     */
    YMKSearchTypeDirect = 1 << 4,
    /**
     * :nodoc:
     * Goods.
     */
    YMKSearchTypeGoods = 1 << 5,
    /**
     * :nodoc:
     * Points of interest (POI).
     */
    YMKSearchTypePointsOfInterest = 1 << 6,
    /**
     * :nodoc:
     * Masstransit.
     */
    YMKSearchTypeMassTransit = 1 << 7
};

/**
 * Requested snippets bitmask.
 *
 * Snippets are additional pieces of information (possibly from
 * different services) which are not directly stored in object metadata
 * but may be requested separately based on client needs.
 *
 * Different snippets are applicable to different objects: some of the
 * snippets can be provided only for toponyms, some for businesses and
 * some for all object types.
 */
typedef NS_OPTIONS(NSUInteger, YMKSearchSnippet) {
    /**
     * Default value: no snippets requested.
     */
    YMKSearchSnippetNone = 0,
    /**
     * :nodoc:
     * Related photos snippet (can be requested for a business or toponym).
     * See YMKSearchBusinessPhotoObjectMetadata.
     */
    YMKSearchSnippetPhotos = 1,
    /**
     * :nodoc:
     * Information about ratings (can be requested for a business). See
     * YMKSearchBusinessRating1xObjectMetadata.
     */
    YMKSearchSnippetBusinessRating1x = 1 << 1,
    /**
     * :nodoc:
     * Nearest panoramas to this point. See
     * YMKSearchPanoramasObjectMetadata.
     */
    YMKSearchSnippetPanoramas = 1 << 5,
    /**
     * Nearest mass transit stops to this point. See
     * YMKSearchMassTransit1xObjectMetadata.
     */
    YMKSearchSnippetMassTransit = 1 << 6,
    /**
     * :nodoc:
     * Experimental snippets. Do not use.
     */
    YMKSearchSnippetExperimental = 1 << 7,
    /**
     * :nodoc:
     * Route times and distances for different transport types for this
     * point. See YMKSearchRouteDistancesObjectMetadata.
     */
    YMKSearchSnippetRouteDistances = 1 << 8,
    /**
     * Related businesses (can be requested for a business). See
     * YMKSearchRelatedPlacesObjectMetadata.
     */
    YMKSearchSnippetRelatedPlaces = 1 << 9,
    /**
     * :nodoc:
     * Related images (can be requested for a business).
     */
    YMKSearchSnippetBusinessImages = 1 << 10,
    /**
     * References to external IDs.
     */
    YMKSearchSnippetReferences = 1 << 11,
    /**
     * Fuel snippet. See YMKSearchFuelMetadata.
     */
    YMKSearchSnippetFuel = 1 << 12,
    /**
     * Currency exchange snippet. See YMKSearchCurrencyExchangeMetadata.
     */
    YMKSearchSnippetExchange = 1 << 13,
    /**
     * Nearest mass transit stops. Provides more detailed information about
     * mass transit lines compared to the Masstransit snippet.
     */
    YMKSearchSnippetNearbyStops = 1 << 14,
    /**
     * Subtitle snippet. See YMKSearchSubtitleMetadata.
     */
    YMKSearchSnippetSubtitle = 1 << 15,
    /**
     * RoutePoint snippet. See YMKSearchRoutePointMetadata.
     */
    YMKSearchSnippetRoutePoint = 1 << 16,
    /**
     * Showtimes snippet. See YMKSearchShowtimesObjectMetadata.
     */
    YMKSearchSnippetShowtimes = 1 << 17,
    /**
     * :nodoc:
     * Related advertized businesses to show on map (can be requested for a
     * business or toponym). See YMKSearchRelatedAdvertsObjectMetadata.
     */
    YMKSearchSnippetRelatedAdvertsOnMap = 1 << 18,
    /**
     * Goods snippet. See YMKSearchGoods1xObjectMetadata.
     */
    YMKSearchSnippetGoods1x = 1 << 19,
    /**
     * Discovery snippet. See YMKSearchDiscovery2xObjectMetadata.
     */
    YMKSearchSnippetDiscovery2x = 1 << 20,
    /**
     * :nodoc:
     * Related advertized businesses to show on card (can be requested for a
     * business). See YMKSearchRelatedAdvertsObjectMetadata.
     */
    YMKSearchSnippetRelatedAdvertsOnCard = 1 << 21,
    /**
     * :nodoc:
     * Hints for search results' visual representation. See
     * YMKSearchVisualHintsObjectMetadata.
     */
    YMKSearchSnippetVisualHints = 1 << 22,
    /**
     * :nodoc:
     * Encyclopedia entry for given object. See
     * YMKSearchEncyclopediaObjectMetadata.
     */
    YMKSearchSnippetEncyclopedia = 1 << 23
};
