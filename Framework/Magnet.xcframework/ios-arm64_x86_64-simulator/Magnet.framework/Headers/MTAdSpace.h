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

/// ad space id
/// 广告位 ID
@property (nonatomic, copy) NSString *spaceId;

/// ad space name
/// 广告位名称
@property (nonatomic, copy) NSString *spaceName;

/// ad space format
/// 广告位格式，广告位格式，1=Native原生，2=Interstitial插屏，3=Rewarded激励视频，4=Banner5-AppOpen
@property (nonatomic, assign) MTAdFormat format;

/// the mode to request ad unit of adSources
/// 请求模式，1-waterfall2-fanout
@property (nonatomic, assign) MTAdProcessMode requestMode;

/// timeout of fanout request mode
/// 并行等待时间，只有在fanout模式下才会返回该值，单位：毫秒
@property (nonatomic, assign) int64_t fanoutWaitTime;

/// whether need to precache the ad unit
/// 缓存开关，1-开启 2-关闭
@property (nonatomic, assign) NSInteger cacheSwitch;

/// list of ad sources
/// 广告源列表
@property (nonatomic, copy) NSArray<MTAdSource *> *adSources;

@end

NS_ASSUME_NONNULL_END
