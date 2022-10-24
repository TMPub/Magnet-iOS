//
//  MTNativeAdView.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/18.
//

#import <UIKit/UIKit.h>
#import "MTNativeAd.h"
@class MTMediaView;
@class MTAdSource;

NS_ASSUME_NONNULL_BEGIN

@class MTNativeAdView, MTMediationAd;
@protocol MTNativeAdViewDelegate <NSObject>

@optional

/// native Ad view displayed
/// @param adView native Ad view
- (void)nativeAdDidImpress:(MTNativeAdView *)adView;

///  native Ad view click
/// @param adView native Ad view
- (void)nativeAdDidClick:(MTNativeAdView *)adView;

///  native Ad view finish handling
/// @param adView native Ad view
- (void)nativeAdDidFinishHandlingClick:(MTNativeAdView *)adView;

@end

@interface MTNativeAdView : UIView

/// native Ad view's dataSource
@property (nonatomic, strong) MTNativeAd *nativeAd;
/// native Ad view's delegate
@property (nonatomic, weak) id<MTNativeAdViewDelegate> delegate;
/// label to show title
@property (nonatomic, strong) IBOutlet UILabel *titleLabel;
/// label to show action text
@property (nonatomic, strong) IBOutlet UILabel *callToActionLabel;
/// media view
@property (nonatomic, strong) IBOutlet MTMediaView *mediaView;

@end

NS_ASSUME_NONNULL_END
