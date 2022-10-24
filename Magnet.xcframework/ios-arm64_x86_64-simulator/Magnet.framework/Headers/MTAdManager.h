//
//  MTAdManager.h
//  Magnet
//
//  Created by Magnet on 2020/9/29.
//  

#import "UIKit/UIKit.h"
@class MTAdSpace;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const MTAdSpaceUpdateNotificationName;

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

/// The current ad space data obtained from the backend API 当前从后台API取得的广告位数据
@property (nonatomic, strong, readonly) NSArray<MTAdSpace *> *adSpaces;

/// Whether a fullscreen ad is currently loading
@property (nonatomic, assign) BOOL isShowingFullScreenAd;

/// YES means use the test environment and turn on NSLog YES 代表使用测试环境，且打开 NSLog
@property (nonatomic, assign) BOOL debugMode;

/// Pre-cached ad spaces 预缓存广告位
/// @param adSpaceId ad space ID 广告位 ID
- (void)startCacheAdSpace:(NSString *)adSpaceId;

@end

NS_ASSUME_NONNULL_END
