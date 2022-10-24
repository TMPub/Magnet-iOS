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

/// the source of ad unit
/// 广告源类型
@property (nonatomic, assign) MTAdSourceType sourceType;

/// ad unit id
/// 广告位ID
@property (nonatomic, copy) NSString *placementId;

/// priority in parallel mode
/// 并行时的展示优先级  (排序)
@property (nonatomic, assign) NSInteger priority;

/// timeout in serial mode
/// 串行请求的超时时间（毫秒）
@property (nonatomic, assign) int64_t waterfallWaitTime;

/// cache timeout of ad unit
/// 广告位的缓存过期时间（毫秒）
@property (nonatomic, assign) int64_t cacheTime;

/// width of banner ad view
/// banner广告的宽度
@property (nonatomic, assign) NSUInteger adWidth;

/// height of banner ad view
/// banner广告的高度
@property (nonatomic, assign) NSUInteger adHeight;

@end

NS_ASSUME_NONNULL_END
