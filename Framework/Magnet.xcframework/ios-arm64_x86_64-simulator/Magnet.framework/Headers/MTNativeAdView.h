//
//  MTNativeAdView.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/18.
//

#import <UIKit/UIKit.h>
#import "MTNativeAd.h"
@class MTAdSource;

NS_ASSUME_NONNULL_BEGIN

@class MTNativeAdView, MTMediationAd;
@protocol MTNativeAdViewDelegate <NSObject>

@optional

/// 原生广告已经展示
/// @param adView 原生广告视图
- (void)nativeAdDidImpress:(MTNativeAdView *)adView;

/// 点击了原生广告
/// @param adView 原生广告视图
- (void)nativeAdDidClick:(MTNativeAdView *)adView;

/// 点击了原生广告，再点击完成
/// @param adView 原生广告视图
- (void)nativeAdDidFinishHandlingClick:(MTNativeAdView *)adView;

@end

@interface MTMediaView : UIView

/// Google 广告的媒体内容数据
@property (nonatomic, strong, nullable) id mediaContent;

@end

@interface MTNativeAdView : UIView

/// 原生广告数据源
@property (nonatomic, strong) MTNativeAd *nativeAd;

/// 原生广告视图事件代理
@property (nonatomic, weak) id<MTNativeAdViewDelegate> delegate;

/// 标题
@property (nonatomic, strong) IBOutlet UILabel *titleLabel;
/// 跳转按钮
@property (nonatomic, strong) IBOutlet UILabel *callToActionLabel;
/// 媒体视图
@property (nonatomic, strong) IBOutlet MTMediaView *mediaView;

@end

NS_ASSUME_NONNULL_END
