//
//  MTAdSpace.h
//  Magnet
//
//  Created by Magnet on 2020/9/28.
//  展示位

#import <Foundation/Foundation.h>
#import "MTAdDefine.h"
#import "MTAdSource.h"

NS_ASSUME_NONNULL_BEGIN

@interface MTAdSpace : TMModelBase

/// 广告位 ID
@property (nonatomic, copy) NSString *spaceId;

/// 广告位名称
@property (nonatomic, copy) NSString *spaceName;

/// 广告位格式，广告位格式，1=Native原生，2=Interstitial插屏，3=Rewarded激励视频，4=Banner5-AppOpen
@property (nonatomic, assign) MTAdFormat format;

/// 策略组 ID
@property (nonatomic, assign) NSInteger groupId;

/// 模板 ID，打点相关
@property (nonatomic, assign) NSInteger templateId;

/// 请求模式，1-waterfall2-fanout
@property (nonatomic, assign) MTAdProcessMode requestMode;

/// 并行等待时间，只有在fanout模式下才会返回该值，单位：毫秒
@property (nonatomic, assign) int64_t fanoutWaitTime;

/// 缓存开关，1-开启 2-关闭
@property (nonatomic, assign) NSInteger cacheSwitch;

/// 广告源列表
@property (nonatomic, copy) NSArray<MTAdSource *> *adSources;

@end

NS_ASSUME_NONNULL_END
