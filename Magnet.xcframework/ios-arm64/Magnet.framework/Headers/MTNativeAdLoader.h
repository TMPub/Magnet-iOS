//
//  MTNativeAdLoader.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MTNativeAdLoader, MTNativeAd;
@protocol MTNativeAdLoaderDelegate <NSObject>

@optional

/// native ad load success 原生广告加载成功
/// @param loader native ad loader 原生广告加载器
/// @param adData native ad data 原生广告数据
- (void)nativeAdLoadSuccess:(MTNativeAdLoader *)loader adData:(MTNativeAd *)adData;

/// native ad load fail 原生广告加载出错
/// @param loader native ad loader 原生广告加载器
/// @param adData native ad data 原生广告数据
/// @param error error error 错误
- (void)nativeAdLoadFail:(MTNativeAdLoader *)loader adData:(nullable MTNativeAd *)adData error:(NSError *)error;

@end

@interface MTNativeAdLoader : NSObject

/// native ad loader initialization 原生广告加载器初始化
/// @param adSpaceId native ad space ID 广告位 ID
- (instancetype)initWithAdSpaceId:(NSString *)adSpaceId;

/// current native ad space ID
/// 当前加载器广告位 ID
@property (nonatomic, copy, readonly) NSString *adSpaceId;

/// ad lifeCycle delegate
/// 广告事件代理
@property (nonatomic, weak) id<MTNativeAdLoaderDelegate> delegate;

/// Load a cached ad. If there is a cache, it will be displayed directly. Also pre-cache ads again.
/// 加载已缓存的广告。若存在缓存，会直接展示。同时再次预缓存广告。
- (void)loadCacheAd;

/// Load ad. If there is a cache, it will be displayed directly. Otherwise, it will be displayed after the ad is loaded successfully. Also pre-cache ads again.
/// 加载广告。若存在缓存，会直接展示。否则等广告加载成功后展示。同时再次预缓存广告。
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
