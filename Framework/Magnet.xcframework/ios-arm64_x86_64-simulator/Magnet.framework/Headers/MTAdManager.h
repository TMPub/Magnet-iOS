//
//  MTAdManager.h
//  Magnet
//
//  Created by Magnet on 2020/9/29.
//  

#import "MTAdDefine.h"
#import "UIKit/UIKit.h"
@class MTAdSpace;

NS_ASSUME_NONNULL_BEGIN

typedef void (^MTPaidEventHandler)(NSString *_Nonnull eventId, NSDictionary *data);

@interface MTAdManager : NSObject

+ (instancetype)shareInstance;

/// 初始化SDK
/// @param appId 开发者在Magnet官网申请的appId.
/// @param channel 渠道标识，可设置nil表示"AppStore".
/// @param rootViewController app的入口控制器
- (void)startWithAppId:(NSString *)appId channel:(NSString *)channel rootViewController:(UIViewController *)rootViewController;

/// 入口控制器
@property (nonatomic, strong) UIViewController *rootViewController;

/// 渠道标识
@property (nonatomic, copy, readonly) NSString *channel;

/// 应用Id
@property (nonatomic, copy, readonly) NSString *appId;

/// Google 太极产生的打点数据回调
@property(nonatomic, nullable, copy) MTPaidEventHandler paidEventHandler;

/// 当前SDK版本
@property (nonatomic, readonly, copy) NSString *sdkVersion;

/// 当前从后台API取得的广告位数据
@property (nonatomic, strong, readonly) NSArray<MTAdSpace *> *adSpaces;

/// 预缓存广告位
/// @param adSpaceId 广告位 ID
- (void)startCacheAdSpace:(NSString *)adSpaceId;

@end

NS_ASSUME_NONNULL_END
