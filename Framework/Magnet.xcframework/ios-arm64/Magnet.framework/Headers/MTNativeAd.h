//
//  MTNativeAd.h
//  Magnet
//
//  Created by John Zhuang on 2022/7/8.
//

#import <Foundation/Foundation.h>
@class MTMediationAd, MTAdSource;

NS_ASSUME_NONNULL_BEGIN

@interface MTNativeAd : NSObject

/// 标题
@property (nonatomic, readonly, copy, nullable) NSString *adTitle;
/// 跳转按钮文字
@property (nonatomic, readonly, copy, nullable) NSString *callToAction;
/// Google 广告的媒体内容数据
@property (nonatomic, readonly, strong, nullable) id mediaContent;
/// 具体平台的广告数据
@property (nonatomic, strong, readonly) id adData;
/// 当前广告的广告源
@property (nonatomic, strong, readonly) MTAdSource *adSource;

@end

NS_ASSUME_NONNULL_END
