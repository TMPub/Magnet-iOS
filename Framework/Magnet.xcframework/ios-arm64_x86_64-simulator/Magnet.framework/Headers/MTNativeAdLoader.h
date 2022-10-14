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

/// 原生广告加载成功
/// @param loader 原生广告加载器
/// @param adData 原生广告数据
- (void)nativeAdLoadSuccess:(MTNativeAdLoader *)loader adData:(MTNativeAd *)adData;

/// 原生广告加载出错
/// @param loader 原生广告加载器
/// @param adData 原生广告数据
/// @param error 错误
- (void)nativeAdLoadFail:(MTNativeAdLoader *)loader adData:(nullable MTNativeAd *)adData error:(NSError *)error;

@end

@interface MTNativeAdLoader : NSObject

/// 原生广告加载器初始化
/// @param adSpaceId 广告位 ID
- (instancetype)initWithAdSpaceId:(NSString *)adSpaceId;

/// 当前加载器广告位 ID
@property (nonatomic, copy, readonly) NSString *adSpaceId;

/// 广告事件代理
@property (nonatomic, weak) id<MTNativeAdLoaderDelegate> delegate;

/// 加载已缓存的广告。若存在缓存，会直接展示。同时再次预缓存广告。
- (void)loadCacheAd;

/// 加载广告。若存在缓存，会直接展示。否则等广告加载成功后展示。同时再次预缓存广告。
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
