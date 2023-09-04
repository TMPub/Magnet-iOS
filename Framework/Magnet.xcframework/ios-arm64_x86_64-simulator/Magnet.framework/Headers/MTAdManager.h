//
//  MTAdManager.h
//  Magnet
//
//  Created by Magnet on 2020/9/29.
//  

#import "UIKit/UIKit.h"
#import "MTAdDefine.h"
@class MTAdSpace;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const MTAdSpaceUpdateNotificationName;

typedef void (^MTPaidEventHandler)(NSString *_Nonnull eventId, NSDictionary *data);

@interface MTAdManager : NSObject

+ (instancetype)shareInstance;

/// Initialize SDK 初始化SDK
/// @param appId The appId applied by the developer 应用 ID
/// @param channel Channel ID, can be set to nil to indicate "AppStore". 渠道标识，可设置nil表示"AppStore".
/// @param rootViewController rootViewController of keyWindow 入口控制器
- (void)startWithAppId:(NSString *)appId channel:(nullable NSString *)channel rootViewController:(UIViewController *)rootViewController;

/// The appId applied by the developer 应用Id
@property (nonatomic, copy, readonly) NSString *appId;

/// Channel ID, can be set to nil to indicate "AppStore". 渠道标识
@property (nonatomic, copy, readonly) NSString *channel;

///  rootViewController of keyWindow 入口控制器
@property (nonatomic, strong, readonly) UIViewController *rootViewController;

/// Current SDK version 当前SDK版本
@property (nonatomic, readonly, copy) NSString *sdkVersion;

/// Whether a fullscreen ad is currently loading
@property (nonatomic, assign) BOOL isShowingFullScreenAd;

/// Indicates whether the logger should display debug messages. 是否打开调试信息
@property (nonatomic, assign) BOOL debugMode;

/// Google 太极产生的打点数据回调
@property (nonatomic, nullable, copy) MTPaidEventHandler paidEventHandler;

/// Pre-cached ad spaces 预缓存广告位
/// @param adSpaceId ad space ID 广告位 ID
- (void)startCacheAdSpace:(NSString *)adSpaceId;

/// The ad space data for specific adFromat
/// @param adFromat adFormat (Native Banner Reward etc.)
- (nullable MTAdSpace *)adSpaceForAdFormat:(MTAdFormat)adFromat;

- (NSString *)deviceId;

@end

NS_ASSUME_NONNULL_END
