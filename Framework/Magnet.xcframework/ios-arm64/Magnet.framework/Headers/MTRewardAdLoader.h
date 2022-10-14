//
//  MTRewardAdLoader.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/16.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"

NS_ASSUME_NONNULL_BEGIN

@class MTRewardAdLoader;
@protocol MTRewardAdLoaderDelegate <NSObject>

@optional

/// 激励广告加载成功
/// @param loader 激励广告加载器
- (void)rewardAdLoadSuccess:(MTRewardAdLoader *)loader;

/// 激励广告加载出错
/// @param loader 激励广告加载器
/// @param error 错误
- (void)rewardAdLoadFail:(MTRewardAdLoader *)loader error:(NSError *)error;

/// 点击激励广告
/// @param loader 激励广告加载器
- (void)rewardAdDidClick:(MTRewardAdLoader *)loader;

/// 激励广告出现
/// @param loader 激励广告加载器
- (void)rewardAdDidPresent:(MTRewardAdLoader *)loader;

/// 激励广告消失
/// @param loader 激励广告加载器
- (void)rewardAdDidDismiss:(MTRewardAdLoader *)loader;

/// 激励广告完成激励事件
/// @param loader 激励广告加载器
- (void)rewardAdDidReward:(MTRewardAdLoader *)loader;

@end

@interface MTRewardAdLoader : NSObject

/// 激励广告加载器初始化
/// @param adSpaceId 广告位 ID
- (instancetype)initWithAdSpaceId:(NSString *)adSpaceId;

/// 当前加载器广告位 ID
@property (nonatomic, copy, readonly) NSString *adSpaceId;

/// 广告事件代理
@property (nonatomic, weak) id<MTRewardAdLoaderDelegate> delegate;

/// 加载已缓存的广告。若存在缓存，会直接展示。同时再次预缓存广告。
- (void)loadCacheAd:(UIViewController *)showVC;

/// 加载广告。若存在缓存，会直接展示。否则等广告加载成功后展示。同时再次预缓存广告。
- (void)loadAd:(UIViewController *)showVC;

@end

NS_ASSUME_NONNULL_END
