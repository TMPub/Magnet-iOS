//
//  MTAdSource.h
//  Magnet
//
//  Created by Magnet on 2020/9/28.
//  广告位

#import <Foundation/Foundation.h>
#import "MTAdDefine.h"
@class MTAdSpace, MTMediationAd;
@import TMKit;

NS_ASSUME_NONNULL_BEGIN

@interface MTAdSource : TMModelBase

/// 广告源类型，取值：GO:Admob,GM:AdmobMediation,FB:Facebook
@property (nonatomic, assign) MTAdSourceType sourceType;

/// 广告位ID
@property (nonatomic, copy) NSString *placementId;

/// 并行时的展示优先级  (排序)
@property (nonatomic, assign) NSInteger priority;

/// 串行请求的超时时间（毫秒）
@property (nonatomic, assign) int64_t waterfallWaitTime;

/// 广告位的缓存过期时间（毫秒）
@property (nonatomic, assign) int64_t cacheTime;

/// banner广告的宽度
@property (nonatomic, assign) NSUInteger adWidth;

/// banner广告的高度
@property (nonatomic, assign) NSUInteger adHeight;

/// 广告位所属的 adSpace
@property (nonatomic, strong) MTAdSpace *beSpace;

/// 倒计时
@property (nonatomic, assign) NSInteger autoCloseTime;

/// 用于缓存的 key 值（source拼接placementId）
- (NSString *)cachePlacementId;

/// 用于请求的 key 值（proprity拼接placementId）
- (NSString *)requestPlacementId;

@end

NS_ASSUME_NONNULL_END
