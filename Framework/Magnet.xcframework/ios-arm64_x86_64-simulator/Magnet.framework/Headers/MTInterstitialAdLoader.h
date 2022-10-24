//
//  MTInterstitialAdLoader.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MTInterstitialAdLoader;
@protocol MTInterstitialAdLoaderDelegate <NSObject>

@optional

/// Interstitial ad load success 插屏广告加载成功
/// @param loader Interstitial ad loader  插屏广告加载器
- (void)interstitialAdLoadSuccess:(MTInterstitialAdLoader *)loader;

/// Interstitial ad load fail 插屏广告加载出错
/// @param loader Interstitial ad loader  插屏广告加载器
/// @param error 错误
- (void)interstitialAdLoadFail:(MTInterstitialAdLoader *)loader error:(NSError *)error;

/// Interstitial ad click 点击插屏广告
/// @param loader Interstitial ad loader  插屏广告加载器
- (void)interstitialAdDidClick:(MTInterstitialAdLoader *)loader;

/// Interstitial ad present 插屏广告出现
/// @param loader Interstitial ad loader  插屏广告加载器
- (void)interstitialAdDidPresent:(MTInterstitialAdLoader *)loader;

/// Interstitial ad dismiss 插屏广告消失
/// @param loader Interstitial ad loader  插屏广告加载器
- (void)interstitialAdDidDismiss:(MTInterstitialAdLoader *)loader;

@end

@interface MTInterstitialAdLoader : NSObject

/// Interstitial ad loader initialization 插屏广告加载器初始化
/// @param adSpaceId Interstitial  ad space ID 广告位 ID
- (instancetype)initWithAdSpaceId:(NSString *)adSpaceId;

/// current Native ad space ID
/// 当前加载器广告位 ID
@property (nonatomic, copy, readonly) NSString *adSpaceId;

/// ad lifeCycle delegate
/// 广告事件代理
@property (nonatomic, weak) id<MTInterstitialAdLoaderDelegate> delegate;

/// Load a cached ad. If there is a cache, it will be displayed directly. Also pre-cache ads again.
/// 加载已缓存的广告。若存在缓存，会直接展示。同时再次预缓存广告。
- (void)loadCacheAd;

/// Load ad. If there is a cache, it will be displayed directly. Otherwise, it will be displayed after the ad is loaded successfully. Also pre-cache ads again.
/// 加载广告。若存在缓存，会直接展示。否则等广告加载成功后展示。同时再次预缓存广告。
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
