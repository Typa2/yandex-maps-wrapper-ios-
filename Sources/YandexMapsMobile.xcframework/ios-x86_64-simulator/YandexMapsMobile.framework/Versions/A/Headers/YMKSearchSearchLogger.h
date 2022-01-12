#import <YandexMapsMobile/YMKGeoObject.h>

/**
 * :nodoc:
 * The way search request was initiated.
 */
typedef NS_ENUM(NSUInteger, YMKSearchSearchSource) {
    /**
     * Primary search via manually typed-in text.
     */
    YMKSearchSearchSourceText,
    /**
     * Primary search via voice input.
     */
    YMKSearchSearchSourceVoice,
    /**
     * Primary search via suggest.
     */
    YMKSearchSearchSourceSuggest,
    /**
     * Primary search via buttons from menu.
     */
    YMKSearchSearchSourceCategories,
    /**
     * Primary search via rubric selection in showcase.
     */
    YMKSearchSearchSourceShowcase,
    /**
     * Primary search via history tab.
     */
    YMKSearchSearchSourceHistory,
    /**
     * Primary search via disabling misspell correction from last search.
     */
    YMKSearchSearchSourceCorrectMisspell,
    /**
     * Primary search via "all affiliates" button.
     */
    YMKSearchSearchSourceChains,
    /**
     * Primary search via push message.
     */
    YMKSearchSearchSourcePush,
    /**
     * Primary search via other application, web search link, etc.
     */
    YMKSearchSearchSourceExternal,
    /**
     * Secondary search via set filters on search results.
     */
    YMKSearchSearchSourceChangeFilters,
    /**
     * Secondary search via request more results.
     */
    YMKSearchSearchSourceFetchNextPage,
    /**
     * Secondary search via automatic map drag by zooming in/out,
     * self-tracking, etc.
     */
    YMKSearchSearchSourceAppMapDrag,
    /**
     * Secondary search via user map drag by gesture.
     */
    YMKSearchSearchSourceMapDrag
};

/**
 * :nodoc:
 * Type of displayed GeoObject card.
 */
typedef NS_ENUM(NSUInteger, YMKSearchGeoObjectCardType) {
    /**
     * Basic card (shown by default in mobile clients).
     */
    YMKSearchGeoObjectCardTypeBasic,
    /**
     * Main card view which allows all the deep use actions.
     */
    YMKSearchGeoObjectCardTypeMain
};

/**
 * :nodoc:
 * Source of displayed card.
 */
typedef NS_ENUM(NSUInteger, YMKSearchGeoObjectCardSource) {
    /**
     * Card to card transitions – basic to main, main to full, etc.
     */
    YMKSearchGeoObjectCardSourceCard,
    /**
     * Automatic opening of business card from search (single result, etc).
     */
    YMKSearchGeoObjectCardSourceSearchAuto,
    /**
     * SERP (mobile maps, web maps).
     */
    YMKSearchGeoObjectCardSourceSearchResultsList,
    /**
     * Click on pin.
     */
    YMKSearchGeoObjectCardSourceSearchResultsPin,
    /**
     * Click on poi.
     */
    YMKSearchGeoObjectCardSourcePoi,
    /**
     * Click on list item in bookmarks list (mobile maps, web maps).
     */
    YMKSearchGeoObjectCardSourceBookmarkList,
    /**
     * Click on bookmark placemark on map.
     */
    YMKSearchGeoObjectCardSourceBookmarkPin,
    /**
     * Click on list item from collection card (mobile maps, web maps).
     */
    YMKSearchGeoObjectCardSourceCollectionList,
    /**
     * Click on pin from collection (mobile maps, web maps).
     */
    YMKSearchGeoObjectCardSourceCollectionPin,
    /**
     * Click on entrance on map.
     */
    YMKSearchGeoObjectCardSourceEntrances,
    /**
     * Click on affiliate from business card (mobile maps).
     */
    YMKSearchGeoObjectCardSourceChains,
    /**
     * Click on nearby org list item from toponym card (mobile maps, web
     * maps).
     */
    YMKSearchGeoObjectCardSourceNearbyBusiness,
    /**
     * Click on item in 'related places' list from business card or search
     * results (web maps).
     */
    YMKSearchGeoObjectCardSourceRelatedPlaces,
    /**
     * Click on item in 'organizations in the house' list from business card
     * (shopping centers, etc) (web maps).
     */
    YMKSearchGeoObjectCardSourceOrgInHouse,
    /**
     * Click on start/via/finish route point (mobile maps, Navi).
     */
    YMKSearchGeoObjectCardSourceRoutePin,
    /**
     * Click on advert along route (mobile maps, Navi).
     */
    YMKSearchGeoObjectCardSourceAdvertPin,
    /**
     * Click on org from discovery showcase (mobile maps, web maps).
     */
    YMKSearchGeoObjectCardSourceShowcase,
    /**
     * Click on UGC list item (menu -> personal account -> click on org)
     * (mobile maps).
     */
    YMKSearchGeoObjectCardSourcePersonalAccount,
    /**
     * Click on house.
     */
    YMKSearchGeoObjectCardSourceTappableHouse,
    /**
     * Click on user location.
     */
    YMKSearchGeoObjectCardSourceUserLocate,
    /**
     * Long tap on map.
     */
    YMKSearchGeoObjectCardSourceWhatsHere,
    /**
     * Direct card opening from other app, browser SERP, etc.
     */
    YMKSearchGeoObjectCardSourceExternal,
    /**
     * Direct card opening from push.
     */
    YMKSearchGeoObjectCardSourcePush
};

/**
 * :nodoc:
 * Some action performed on object card.
 */
typedef NS_ENUM(NSUInteger, YMKSearchCardActionEvent) {
    /**
     * Bookmark geo object.
     */
    YMKSearchCardActionEventBookmark,
    /**
     * Copy info about geo object.
     */
    YMKSearchCardActionEventCopyInfo,
    /**
     * Search for organization affiliates.
     */
    YMKSearchCardActionEventFindBranches,
    /**
     * Get phone number for organization.
     */
    YMKSearchCardActionEventMakePhoneCall,
    /**
     * Make route to/from geo object.
     */
    YMKSearchCardActionEventMakeRoute,
    /**
     * Make transit route to/from geo object.
     */
    YMKSearchCardActionEventMakeRouteToTransit,
    /**
     * Open affiliate organization.
     */
    YMKSearchCardActionEventOpenBranch,
    /**
     * Open collection the geo object belongs to.
     */
    YMKSearchCardActionEventOpenCollection,
    /**
     * Open organization's site.
     */
    YMKSearchCardActionEventOpenSite,
    /**
     * Share info about geo object.
     */
    YMKSearchCardActionEventShare,
    /**
     * Show extended details about geo object.
     */
    YMKSearchCardActionEventShowDetails,
    /**
     * Show organization's work hours.
     */
    YMKSearchCardActionEventShowHours,
    /**
     * Show organization's goods register.
     */
    YMKSearchCardActionEventShowGoods,
    /**
     * Show geo object's nearby transit.
     */
    YMKSearchCardActionEventShowNearbyTransit,
    /**
     * Show extra reviews for geo object.
     */
    YMKSearchCardActionEventShowMoreReviews,
    /**
     * Show panoramas for geo object.
     */
    YMKSearchCardActionEventShowPanoramas,
    /**
     * Rate organization (UGC action).
     */
    YMKSearchCardActionEventAddRating,
    /**
     * Write review for the organization (UGC action).
     */
    YMKSearchCardActionEventAddReview,
    /**
     * Buy ticket (CTA).
     */
    YMKSearchCardActionEventBuyTicket,
    /**
     * Order food delivery (CTA).
     */
    YMKSearchCardActionEventOrderFoodDelivery,
    /**
     * Request doctor visit (CTA).
     */
    YMKSearchCardActionEventRequestDoctor,
    /**
     * Order a taxi ride (CTA).
     */
    YMKSearchCardActionEventRequestTaxi,
    /**
     * Make medicine reservation (CTA).
     */
    YMKSearchCardActionEventReserveMedicine,
    /**
     * Make "quest room" reservation (CTA).
     */
    YMKSearchCardActionEventReserveQuest,
    /**
     * Make table reservation (CTA).
     */
    YMKSearchCardActionEventReserveTable
};

/**
 * :nodoc:
 * Known types of lists/carousels where organization could be shown.
 */
typedef NS_ENUM(NSUInteger, YMKSearchGeoObjectListItemEvent) {
    /**
     * List of organizations in house (web maps, mobile maps).
     */
    YMKSearchGeoObjectListItemEventOrgInToponym,
    /**
     * Shopping centers, etc (web maps).
     */
    YMKSearchGeoObjectListItemEventOrgInBusiness,
    /**
     * Org in collections (mobile maps, web maps).
     */
    YMKSearchGeoObjectListItemEventOrgInCollection,
    /**
     * Org in search results list (mobile maps, web maps).
     */
    YMKSearchGeoObjectListItemEventSearchResults,
    /**
     * Org in other org related places (web maps).
     */
    YMKSearchGeoObjectListItemEventRelatedPlaces,
    /**
     * Org shown as affiliate of other org (mobile maps).
     */
    YMKSearchGeoObjectListItemEventChains,
    /**
     * Org inside bookmarks (mobile maps, web maps, Navi).
     */
    YMKSearchGeoObjectListItemEventBookmarks,
    /**
     * Org shown in user's "Личный кабинет" (mobile maps).
     */
    YMKSearchGeoObjectListItemEventPersonalAccount,
    /**
     * Org shown in showcase.
     */
    YMKSearchGeoObjectListItemEventShowcase
};

/**
 * :nodoc:
 * Source of displayed collection "card".
 */
typedef NS_ENUM(NSUInteger, YMKSearchCollectionCardSource) {
    /**
     * Open collection from discovery showcase.
     */
    YMKSearchCollectionCardSourceShowcase,
    /**
     * Open from search results.
     */
    YMKSearchCollectionCardSourceSearchResults,
    /**
     * Open collection from 'Organization in collections' section on
     * business card.
     */
    YMKSearchCollectionCardSourceCard,
    /**
     * Open collection from 'Related collections' section on collection
     * card.
     */
    YMKSearchCollectionCardSourceCollection,
    /**
     * Open from external source (Zen, etc).
     */
    YMKSearchCollectionCardSourceExternal,
    /**
     * Open from app push.
     */
    YMKSearchCollectionCardSourcePush
};

/**
 * :nodoc:
 * Some action performed on collection card.
 */
typedef NS_ENUM(NSUInteger, YMKSearchCollectionActionEvent) {
    /**
     * Open link to partner who provided the collection.
     */
    YMKSearchCollectionActionEventOpenPartnerLink,
    /**
     * Open one of the relataed collections.
     */
    YMKSearchCollectionActionEventOpenRelatedCollection,
    /**
     * Share collection via share block.
     */
    YMKSearchCollectionActionEventShare
};

/**
 * :nodoc:
 * Known types of lists/carousels where collection could be shown.
 */
typedef NS_ENUM(NSUInteger, YMKSearchCollectionListItemEvent) {
    /**
     * Collection shown in search results.
     */
    YMKSearchCollectionListItemEventSearchResults,
    /**
     * Collection shown inside org main/full card.
     */
    YMKSearchCollectionListItemEventCollectionInOrg,
    /**
     * Collection shown inside other collection.
     */
    YMKSearchCollectionListItemEventRelatedCollections,
    /**
     * Collection shown in showcase.
     */
    YMKSearchCollectionListItemEventShowcase
};

/**
 * :nodoc:
 * Event logger.
 */
@interface YMKSearchLogger : NSObject

/**
 * Log results shown from search request.
 *
 * @param source the way the search was initiated. Since there are many
 * ways to start a search, we want to be able to distinguish between
 * these ways.
 * @param reqid `reqid` value from the response.
 */
- (void)logSearchResultsWithSource:(YMKSearchSearchSource)source
                             reqid:(nonnull NSString *)reqid;

/**
 * Log card opening.
 *
 * @param cardType Type of opened card.
 * @param source Source of opened card.
 * @param geoObject GeoObject which card was opened.
 */
- (void)logGeoObjectCardShownWithCardType:(YMKSearchGeoObjectCardType)cardType
                                   source:(YMKSearchGeoObjectCardSource)source
                                geoObject:(nonnull YMKGeoObject *)geoObject;

/**
 * Log action on opened card.
 *
 * @param event Type of action.
 * @param geoObject GeoObject which card was subject of the action.
 */
- (void)logGeoObjectCardActionWithEvent:(YMKSearchCardActionEvent)event
                              geoObject:(nonnull YMKGeoObject *)geoObject;

/**
 * Log advert action on opened card.
 *
 * @param type Type of action. Value from
 * BussinesMetadata.advert.actions.type.
 * @param geoObject GeoObject which card was subject of the action.
 */
- (void)logGeoObjectCardAdvertActionWithType:(nonnull NSString *)type
                                   geoObject:(nonnull YMKGeoObject *)geoObject;

/**
 * Log geo object in different lists/carousels.
 *
 * @param event Type of list/carousel.
 * @param geoObject GeoObject which position is logged.
 * @param position Position in list/carousel. Starts from 1, from top
 * for top-down lists, from left/right for LTR/RTL carousels.
 */
- (void)logGeoObjectListItemShownWithEvent:(YMKSearchGeoObjectListItemEvent)event
                                 geoObject:(nonnull YMKGeoObject *)geoObject
                                  position:(NSUInteger)position;

/**
 * Log geo object in different lists/carousels. Should be used only when
 * you have lone URI instead of full fledged `GeoObject` (e.g. for
 * snippets with `PlaceInfo` data).
 *
 * @param event Type of list/carousel.
 * @param uri URI for geo object which position is logged.
 * @param position Position in list/carousel. Starts from 1, from top
 * for top-down lists, from left/right for LTR/RTL carousels.
 */
- (void)logGeoObjectListItemShownWithEvent:(YMKSearchGeoObjectListItemEvent)event
                                       uri:(nonnull NSString *)uri
                                  position:(NSUInteger)position;

/**
 * Log showcase when opened by user.
 */
- (void)logShowcaseShown;

/**
 * Log opening collection card.
 *
 * @param source Source of opened card.
 * @param collectionId Collection identifier.
 */
- (void)logCollectionCardShownWithSource:(YMKSearchCollectionCardSource)source
                            collectionId:(nonnull NSString *)collectionId;

/**
 * Log closing collection card.
 *
 * Need this because user can open collection from another collection
 * (by clicking on collection in 'related collections' section in the
 * bottom of collection card) and after closing the second one user will
 * return to the first collection and will be able to perform actions
 * with it.
 *
 * @param collectionId Collection identifier.
 */
- (void)logCollectionCardClosedWithCollectionId:(nonnull NSString *)collectionId;

/**
 * Log user action on opened collection card.
 *
 * @param event Type of action.
 * @param collectionId Collection identifier.
 */
- (void)logCollectionCardActionWithEvent:(YMKSearchCollectionActionEvent)event
                            collectionId:(nonnull NSString *)collectionId;

/**
 * Log collection in different lists/carousels.
 *
 * @param event Type of list/carousel.
 * @param collectionId Collection identifier.
 * @param position Position in list/carousel. Starts from 1, from top
 * for top-down lists, from left/right for LTR/RTL carousels.
 */
- (void)logCollectionListItemShownWithEvent:(YMKSearchCollectionListItemEvent)event
                               collectionId:(nonnull NSString *)collectionId
                                   position:(NSUInteger)position;

@end
