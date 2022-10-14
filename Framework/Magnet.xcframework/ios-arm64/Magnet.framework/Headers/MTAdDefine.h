//
//  MTAdDefine.h
//  Magnet
//
//  Created by Magnet on 2020/6/30.
//

#import <Foundation/Foundation.h>

/// 广告类型
typedef NS_ENUM(NSUInteger, MTAdSourceType) {
    MTAdSourceTypeNone = 0, // 默认无
    MTAdSourceTypeGoogle = 2, // Google 广告
    MTAdSourceTypeFacebook = 3, // Facebook 广告
    MTAdSourceTypeGoogleMediation = 4, // Google 聚合广告
};

/// 聚合广告下具体的广告类型
typedef NS_ENUM(NSUInteger, MTAdGMediationSource) {
    MTAdGMediationSourceNone = 0, // 未知
    MTAdGMediationSourceGoogle = 1, // Google
    MTAdGMediationSourceFacebook = 2 // FaceBook
};

/// 广告格式
typedef NS_ENUM(NSUInteger, MTAdFormat) {
    MTAdFormatNative = 1, //原生广告
    MTAdFormatInterstitial = 2, //插页广告
    MTAdFormatRewarded = 3, //激励视频广告
    MTAdFormatBanner = 4, //banner广告
    MTAdFormatAppOpen = 5 // AppOpen 开屏广告
};

/// 广告位请求方式
typedef NS_ENUM(NSUInteger, MTAdProcessMode) {
    MTAdProcessModeWaterfall = 1, // 串行
    MTAdProcessModeFanout = 2// 并行
};

#pragma mark - Placement Type

FOUNDATION_EXPORT NSString *const MTAdDisplayingErrorDomain;

typedef NS_ENUM(NSInteger, MTAdDisplayingErrors) {
    /// 未知错误
    MTAdDisplayingErrorUnknown = 0,
    /// Placement 为空
    MTAdDisplayingErrorNoAdSource = -100,
    /// 返回的广告格式和请求的不一致
    MTAdDisplayingErrorAdFormat = -101,
    /// Space 为空
    MTAdDisplayingErrorNoSpace = -102,
    /// 广告数据 为空
    MTAdDisplayingErrorNoAdData = -103,
    /// 无广告缓存（displayCache 会遇到）
    MTAdDisplayingErrorNoCache = -200,
    // 广告被取消
    MTAdDisplayingErrorCancel = -302,
    /// 已经在显示全屏广告了（请求全屏广告会遇到）
    MTAdDisplayingErrorFullScreenAdShowing = -400,
    /// 广告已过期
    MTAdDisplayingErrorAdExpired = -500,
};
