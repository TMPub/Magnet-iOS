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

/// 悬浮广告视图已展示
/// @param bannerAdView 悬浮广告视图
- (void)bannerAdViewDidImpress:(MTBannerView *)bannerAdView;

/// 悬浮广告视图已点击
/// @param bannerAdView 悬浮广告视图
- (void)bannerAdViewDidRecordClick:(MTBannerView *)bannerAdView;

@end

@interface MTBannerView : UIView

/// 悬浮广告视图事件代理
@property (nonatomic, weak) id<MTBannerViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
