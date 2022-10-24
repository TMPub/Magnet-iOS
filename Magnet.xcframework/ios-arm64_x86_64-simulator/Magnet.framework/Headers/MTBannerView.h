//
//  MTBannerView.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/21.
//

#import <UIKit/UIKit.h>
@class MTBannerView;

NS_ASSUME_NONNULL_BEGIN

@protocol MTBannerViewDelegate <NSObject>

@optional

/// banner Ad view displayed
/// @param bannerAdView banner Ad view
- (void)bannerAdViewDidImpress:(MTBannerView *)bannerAdView;

/// banner Ad view clicked
/// @param bannerAdView banner Ad view
- (void)bannerAdViewDidRecordClick:(MTBannerView *)bannerAdView;

/// banner Ad view closed
/// @param bannerAdView banner Ad view
- (void)bannerAdViewDidClose:(MTBannerView *)bannerAdView;

@end

@interface MTBannerView : UIView

/// delegate of banner Ad view  lifeCycle
@property (nonatomic, weak) id<MTBannerViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
