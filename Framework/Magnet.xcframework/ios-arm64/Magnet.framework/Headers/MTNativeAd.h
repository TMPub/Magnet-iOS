//
//  MTNativeAd.h
//  Magnet
//
//  Created by Magnet on 2022/7/8.
//

#import <Foundation/Foundation.h>
@class MTMediationAd, MTAdSource;

NS_ASSUME_NONNULL_BEGIN

@interface MTNativeAd : NSObject

/// 标题
@property (nonatomic, readonly, copy, nullable) NSString *adTitle;
/// 跳转按钮文字
@property (nonatomic, readonly, copy, nullable) NSString *callToAction;
/// 具体平台的广告数据
@property (nonatomic, strong, readonly) MTMediationAd *mediationAd;

@end

NS_ASSUME_NONNULL_END
