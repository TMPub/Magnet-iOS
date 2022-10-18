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
    MTAdSourceTypeBP = 1, // BP广告
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

/// BP 广告素材类型
typedef NS_ENUM(NSUInteger, BPAdMaterialType) {
    BPAdMaterialTypeImage = 1, // 素材类型为图片
    BPAdMaterialTypeVideo = 2, // 素材类型为视频
    BPAdMaterialTypeAudio = 3, // 素材类型为音频
    BPAdMaterialTypeScript = 4, // 素材类型为script脚本
    BPAdMaterialTypeRichMedia = 5, // 素材类型为richMedia
};

/// BP 视频广告播放进度
typedef NS_ENUM(NSUInteger,  BPPlayingProgressType) {
    BPPlayingThird2s = 1, // 播放到 2
    BPPlayingThird30s = 2, // 播放到 30s
    BPPlayingFirstQuartile = 3, // 播放到 1/4
    BPPlayingMidpoint = 4, // 播放到 1/2
    BPPlayingThirdQuartile = 5, // 播放到 3/4
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
