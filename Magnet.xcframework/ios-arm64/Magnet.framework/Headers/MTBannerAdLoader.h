//
//  MTBannerAdLoader.h
//  Magnet
//
//  Created by Magnet on 2022/1/11.
//  Copyright © 2022 Magnet. All rights reserved.
//  

#import <Foundation/Foundation.h>
#import "MTBannerView.h"

NS_ASSUME_NONNULL_BEGIN

@class MTBannerAdLoader;
@protocol MTBannerAdLoaderDelegate <NSObject>

@optional

/// banner ad load success  悬浮广告加载成功
/// @param loader banner ad loader 悬浮广告加载器
/// @param bannerView banner ad view 悬浮广告视图
- (void)bannerAdLoadSuccess:(MTBannerAdLoader *)loader bannerView:(MTBannerView *)bannerView;

/// banner ad load fail 悬浮广告加载出错
/// @param loader banner ad loader 悬浮广告加载器
/// @param bannerView banner ad view 悬浮广告视图
/// @param error 错误
- (void)bannerAdLoadFail:(MTBannerAdLoader *)loader bannerView:(nullable MTBannerView *)bannerView error:(NSError *)error;

/// banner ad present 悬浮广告展示
/// @param loader banner ad loader 悬浮广告加载器
/// @param bannerView banner ad view 悬浮广告视图
- (void)bannerAdDidImpress:(MTBannerAdLoader *)loader bannerView:(MTBannerView *)bannerView;

/// banner ad click 悬浮广告点击
/// @param loader banner ad loader 悬浮广告加载器
/// @param bannerView banner ad view 悬浮广告视图
- (void)bannerAdDidClick:(MTBannerAdLoader *)loader bannerView:(MTBannerView *)bannerView;

/// banner ad close 悬浮广告关闭
/// @param loader banner ad loader 悬浮广告加载器
/// @param bannerView banner ad view 悬浮广告视图
- (void)bannerAdDidClose:(MTBannerAdLoader *)loader bannerView:(MTBannerView *)bannerView;

@end

@interface MTBannerAdLoader : NSObject

/// banner ad loader initialization 悬浮广告加载器初始化
/// @param adSpaceId 广告位 ID
- (instancetype)initWithAdSpaceId:(NSString *)adSpaceId;

/// current Native ad space ID
/// 当前加载器广告位 ID
@property (nonatomic, copy, readonly) NSString *adSpaceId;

/// ad lifeCycle delegate
/// 广告事件代理
@property (nonatomic, weak) id<MTBannerAdLoaderDelegate> delegate;

/// Load a cached ad. If there is a cache, it will be displayed directly. Also pre-cache ads again.
/// 加载已缓存的广告。若存在缓存，会直接展示。同时再次预缓存广告。
- (void)loadCacheAd;

/// Load ad. If there is a cache, it will be displayed directly. Otherwise, it will be displayed after the ad is loaded successfully. Also pre-cache ads again.
/// 加载广告。若存在缓存，会直接展示。否则等广告加载成功后展示。同时再次预缓存广告。
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
