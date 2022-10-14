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

/// 插屏广告加载成功
/// @param loader 插屏广告加载器
- (void)interstitialAdLoadSuccess:(MTInterstitialAdLoader *)loader;

/// 插屏广告加载出错
/// @param loader 插屏广告加载器
/// @param error 错误
- (void)interstitialAdLoadFail:(MTInterstitialAdLoader *)loader error:(NSError *)error;

/// 点击插屏广告
/// @param loader 插屏广告加载器
- (void)interstitialAdDidClick:(MTInterstitialAdLoader *)loader;

/// 插屏广告出现
/// @param loader 插屏广告加载器
- (void)interstitialAdDidPresent:(MTInterstitialAdLoader *)loader;

/// 插屏广告消失
/// @param loader 插屏广告加载器
- (void)interstitialAdDidDismiss:(MTInterstitialAdLoader *)loader;

@end

@interface MTInterstitialAdLoader : NSObject

/// 插屏广告加载器初始化
/// @param adSpaceId 广告位 ID
- (instancetype)initWithAdSpaceId:(NSString *)adSpaceId;

/// 当前加载器广告位 ID
@property (nonatomic, copy, readonly) NSString *adSpaceId;

/// 广告事件代理
@property (nonatomic, weak) id<MTInterstitialAdLoaderDelegate> delegate;

/// 加载已缓存的广告。若存在缓存，会直接展示。同时再次预缓存广告。
- (void)loadCacheAd;

/// 加载广告。若存在缓存，会直接展示。否则等广告加载成功后展示。同时再次预缓存广告。
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
