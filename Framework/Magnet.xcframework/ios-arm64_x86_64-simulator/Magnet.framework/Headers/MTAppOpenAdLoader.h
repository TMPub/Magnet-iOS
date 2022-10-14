//
//  MTAppOpenAdLoader.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MTAppOpenAdLoader;
@protocol MTAppOpenAdLoaderDelegate <NSObject>

@optional

/// 开屏广告加载成功
- (void)appOpenAdLoadSuccess;

/// 开屏广告加载出错
/// @param error 错误
- (void)appOpenAdLoadFail:(NSError *)error;

// 点击开屏广告
- (void)appOpenAdDidClick;

// 开屏广告即将出现
- (void)appOpenAdWillPresent;

// 开屏广告已经出现
- (void)appOpenAdDidPresent;

// 开屏广告消失
- (void)appOpenAdDidDismiss;

@end

@interface MTAppOpenAdLoader : NSObject

/// 初始化开屏广告
/// @param spaceId 广告位 ID
/// @param delegate 广告事件代理
/// @param showRank 第几次热启动事件显示广告的次数数组，例如 [1，3] 代表第1，3次热启动时显示开屏广告
+ (void)loadAppOpenAdWithSpaceId:(NSString *)spaceId
                        delegate:(id<MTAppOpenAdLoaderDelegate>)delegate
                        showRank:(NSArray<NSNumber *> *)showRank;

@end

NS_ASSUME_NONNULL_END
