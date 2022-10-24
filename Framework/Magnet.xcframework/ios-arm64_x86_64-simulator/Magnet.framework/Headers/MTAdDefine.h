//
//  MTAdDefine.h
//  Magnet
//
//  Created by Magnet on 2020/6/30.
//

#import <Foundation/Foundation.h>

/// 广告类型
typedef NS_ENUM(NSUInteger, MTAdSourceType) {
    MTAdSourceTypeNone = 0, // Default None
    MTAdSourceTypeBP = 1, // BP Ad
    MTAdSourceTypeGoogle = 2, // Google Ad
    MTAdSourceTypeFacebook = 3, // Facebook Ad
    MTAdSourceTypeGoogleMediation = 4, // Google Mediation Ad
};

/// 聚合广告下具体的广告类型
typedef NS_ENUM(NSUInteger, MTAdGMediationSource) {
    MTAdGMediationSourceNone = 0, // Unknown
    MTAdGMediationSourceGoogle = 1, // Google
    MTAdGMediationSourceFacebook = 2 // Facebook
};

/// 广告格式
typedef NS_ENUM(NSUInteger, MTAdFormat) {
    MTAdFormatNative = 1, // Native Ad 原生广告
    MTAdFormatInterstitial = 2, // Interstitial Ad 插页广告
    MTAdFormatRewarded = 3, // Rewarded Ad 激励视频广告
    MTAdFormatBanner = 4, // Banner Ad banner广告
    MTAdFormatAppOpen = 5 // AppOpen Ad 开屏广告
};

/// 广告位请求方式
typedef NS_ENUM(NSUInteger, MTAdProcessMode) {
    MTAdProcessModeWaterfall = 1, // request serial mode 串行
    MTAdProcessModeFanout = 2// request parallel mode 并行
};

FOUNDATION_EXPORT NSString *const MTAdErrorDomain;

typedef NS_ENUM(NSInteger, MTAdDisplayingError) {
    /// 未知错误
    MTAdDisplayingErrorUnknown = 0,
    /// adsource 为空
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
