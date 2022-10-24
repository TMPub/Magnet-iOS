//
//  MTAppOpenAdLoader.h
//  MTAdsMediation
//
//  Created by Magnet on 2022/6/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MTAppOpenAdLoader;
@protocol MTAppOpenAdLoaderDelegate <NSObject>

@optional

/// appOpen ad load success
- (void)appOpenAdLoadSuccess;

/// appOpen ad load fail
/// @param error error
- (void)appOpenAdLoadFail:(NSError *)error;

// appOpen ad clicked
- (void)appOpenAdDidClick;

// appOpen ad presented
- (void)appOpenAdDidPresent;

// appOpen ad dismissed
- (void)appOpenAdDidDismiss;

@end

@interface MTAppOpenAdLoader : NSObject

/// load the appOpen ad
/// @param spaceId spaceId of  appOpen ad space
/// @param delegate delegate  of  appOpen ad space
/// @param showRank is the array of number that tell which rank of the app open ad can be shown, starts from 1
/// @param countdown the countdown seconds of ad (sorce: MTAdSourceTypeBP)
+ (void)loadAppOpenAdWithSpaceId:(NSString *)spaceId
                        delegate:(id<MTAppOpenAdLoaderDelegate>)delegate
                        showRank:(NSArray<NSNumber *> *)showRank
                       countdown:(NSInteger)countdown;

@end

NS_ASSUME_NONNULL_END
