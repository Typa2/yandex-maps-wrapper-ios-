#import <Foundation/Foundation.h>

/**
 * :nodoc:
 * Type of title string to show.
 */
typedef NS_ENUM(NSUInteger, YMKSearchSerpHintsTitleType) {
    /**
     * Short title. Usually based on short name.
     */
    YMKSearchSerpHintsTitleTypeShortTitle,
    /**
     * Long title. Usually based on GeoObjects's name.
     */
    YMKSearchSerpHintsTitleTypeLongTitle
};

/**
 * :nodoc:
 * Type of address string to show.
 */
typedef NS_ENUM(NSUInteger, YMKSearchSerpHintsAddressType) {
    /**
     * Do not display address string.
     */
    YMKSearchSerpHintsAddressTypeNoAddress,
    /**
     * Display short address string.
     */
    YMKSearchSerpHintsAddressTypeShortAddress,
    /**
     * Display long address string.
     */
    YMKSearchSerpHintsAddressTypeLongAddress
};

/**
 * :nodoc:
 * Type of category string to show.
 */
typedef NS_ENUM(NSUInteger, YMKSearchSerpHintsCategoryType) {
    /**
     * Do not display category string.
     */
    YMKSearchSerpHintsCategoryTypeNoCategory,
    /**
     * Display organization's main category.
     */
    YMKSearchSerpHintsCategoryTypeSingleCategory,
    /**
     * Display all organization's categories.
     */
    YMKSearchSerpHintsCategoryTypeAllCategories
};

/**
 * :nodoc:
 * Type of rating string to show.
 */
typedef NS_ENUM(NSUInteger, YMKSearchSerpHintsRatingType) {
    /**
     * Do not display rating string.
     */
    YMKSearchSerpHintsRatingTypeNoRating,
    /**
     * Display stars for rating.
     */
    YMKSearchSerpHintsRatingTypeFiveStarRating,
    /**
     * Display only numeric rating.
     */
    YMKSearchSerpHintsRatingTypeNumericRating
};

/**
 * :nodoc:
 * Type of photos to show.
 */
typedef NS_ENUM(NSUInteger, YMKSearchSerpHintsPhotoType) {
    /**
     * Do not display any photos.
     */
    YMKSearchSerpHintsPhotoTypeNoPhoto,
    /**
     * Show available photos as a gallery.
     */
    YMKSearchSerpHintsPhotoTypeGallery,
    /**
     * Show logo as single photo.
     */
    YMKSearchSerpHintsPhotoTypeLogo,
    /**
     * Show single photo.
     */
    YMKSearchSerpHintsPhotoTypeSinglePhoto
};

/**
 * :nodoc:
 * Available action buttons.
 */
typedef NS_ENUM(NSUInteger, YMKSearchSerpHintsActionButton) {
    /**
     * Make phone call button.
     */
    YMKSearchSerpHintsActionButtonMakeCall,
    /**
     * Make route button.
     */
    YMKSearchSerpHintsActionButtonMakeRoute,
    /**
     * Open primary URL button.
     */
    YMKSearchSerpHintsActionButtonOpenPrimaryUrl
};

/**
 * :nodoc:
 * Hints for displaying organization in SERP.
 */
@interface YMKSearchSerpHints : NSObject

/**
 * Type of title string to show.
 */
@property (nonatomic, readonly) YMKSearchSerpHintsTitleType showTitle;

/**
 * Type of address string to show.
 */
@property (nonatomic, readonly) YMKSearchSerpHintsAddressType showAddress;

/**
 * Type of category string to show.
 */
@property (nonatomic, readonly) YMKSearchSerpHintsCategoryType showCategory;

/**
 * Type of rating string to show.
 */
@property (nonatomic, readonly) YMKSearchSerpHintsRatingType showRating;

/**
 * Type of photos to show.
 */
@property (nonatomic, readonly) YMKSearchSerpHintsPhotoType showPhoto;

/**
 * Available action buttons.
 */
@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> *actionButtons;

/**
 * Whether to show work hours for the organization.
 */
@property (nonatomic, readonly) BOOL showWorkHours;

/**
 * Whether to show if the organization is verified (aka
 * "Заботливая галка").
 */
@property (nonatomic, readonly) BOOL showVerified;

/**
 * Whether to show distance from transit for the organization.
 */
@property (nonatomic, readonly) BOOL showDistanceFromTransit;

/**
 * Whether to show user's bookmark for the organization.
 */
@property (nonatomic, readonly) BOOL showBookmark;

/**
 * Whether to show estimated time of arrival (ETA) for the organization.
 */
@property (nonatomic, readonly) BOOL showEta;

/**
 * Whether to show geoproduct offer for the organization.
 */
@property (nonatomic, readonly) BOOL showGeoproductOffer;


+ (nonnull YMKSearchSerpHints *)serpHintsWithShowTitle:( YMKSearchSerpHintsTitleType)showTitle
                                           showAddress:( YMKSearchSerpHintsAddressType)showAddress
                                          showCategory:( YMKSearchSerpHintsCategoryType)showCategory
                                            showRating:( YMKSearchSerpHintsRatingType)showRating
                                             showPhoto:( YMKSearchSerpHintsPhotoType)showPhoto
                                         actionButtons:(nonnull NSArray<NSNumber *> *)actionButtons
                                         showWorkHours:( BOOL)showWorkHours
                                          showVerified:( BOOL)showVerified
                               showDistanceFromTransit:( BOOL)showDistanceFromTransit
                                          showBookmark:( BOOL)showBookmark
                                               showEta:( BOOL)showEta
                                   showGeoproductOffer:( BOOL)showGeoproductOffer;


@end

/**
 * :nodoc:
 * Hints for displaying organization modular card.
 */
@interface YMKSearchCardHints : NSObject

/**
 * Whether to show the organization ownership confirmation module.
 */
@property (nonatomic, readonly) BOOL showClaimOrganization;

/**
 * Whether to show "Order taxi" button.
 */
@property (nonatomic, readonly) BOOL showTaxiButton;

/**
 * Whether to show "Edit information" button.
 */
@property (nonatomic, readonly) BOOL showFeedbackButton;

/**
 * Whether to show reviews in the card.
 */
@property (nonatomic, readonly) BOOL showReviews;

/**
 * Whether to show "Add photo" button.
 */
@property (nonatomic, readonly) BOOL showAddPhotoButton;


+ (nonnull YMKSearchCardHints *)cardHintsWithShowClaimOrganization:( BOOL)showClaimOrganization
                                                    showTaxiButton:( BOOL)showTaxiButton
                                                showFeedbackButton:( BOOL)showFeedbackButton
                                                       showReviews:( BOOL)showReviews
                                                showAddPhotoButton:( BOOL)showAddPhotoButton;


@end

/**
 * :nodoc:
 * Snippet data to get visual hints info.
 */
@interface YMKSearchVisualHintsObjectMetadata : NSObject

/**
 * Hints for SERP items display.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchSerpHints *serpHints;

/**
 * Hints for modular card display.
 *
 * Optional field, can be nil.
 */
@property (nonatomic, readonly, nullable) YMKSearchCardHints *cardHints;


+ (nonnull YMKSearchVisualHintsObjectMetadata *)visualHintsObjectMetadataWithSerpHints:(nullable YMKSearchSerpHints *)serpHints
                                                                             cardHints:(nullable YMKSearchCardHints *)cardHints;


@end
