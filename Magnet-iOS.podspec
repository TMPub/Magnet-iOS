Pod::Spec.new do |s|
  s.name             = 'Magnet-iOS'
  s.version          = '2.1.1'
  s.summary          = 'Magnet used for mediation with the Google Mobile Ads SDK and Meta Audience Network'
  s.description      = <<-DESC
                      The Magnet SDK is the latest generation advertising featuring refined ad formats and streamlined APIs for access to mobile ad networks and advertising solutions. Magnet helps maximize your fill rate and increase your monetization by sending ad requests to multiple networks to ensure you find the best available network to serve ads.
                       DESC
  s.homepage         = 'https://gitlab.boomplaymusic.com:8000/FED/iOS/Magnet-iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Magnet' => 'Magnet' }

  # s.source           = { http: "https://github.com/TMPub/DIY/releases/download/#{s.version}frameworks.zip" }
  s.source            = { :http => 'file:' + __dir__ + '/Framework.zip' }
  s.vendored_frameworks = 'Framework/Magnet.xcframework'
  s.resource_bundles      = {
    'Magnet' => ['Assets/*.png']
  }
  s.ios.deployment_target = '11.0'

  s.dependency 'TMKit-iOS'
  s.dependency 'SDWebImage'
  s.dependency 'ZFPlayer/AVPlayer', '3.3.2'
    
  s.dependency 'Google-Mobile-Ads-SDK', '9.8.0'
  s.dependency 'GoogleMobileAdsMediationFacebook'
  s.dependency 'FBAudienceNetwork', '6.11.2'
  s.dependency 'FBSDKCoreKit'

  s.dependency 'AppLovinSDK', '11.6.1'
  s.dependency 'MintegralAdSDK/BidNativeAd', '7.2.9'
  s.dependency 'MintegralAdSDK/BidNativeAdvancedAd', '7.2.9'
  s.dependency 'MintegralAdSDK/BidRewardVideoAd', '7.2.9'
  s.dependency 'MintegralAdSDK/BidSplashAd', '7.2.9'
  s.dependency 'MintegralAdSDK/BidNewInterstitialAd', '7.2.9'
  s.dependency 'MintegralAdSDK/BidBannerAd', '7.2.9'
  s.dependency 'UnityAds'
  s.dependency 'MintegralAdSDKAdapterForAdmob/RewardVideoAdAdapter'
  s.dependency 'MintegralAdSDKAdapterForAdmob/InterstitialVideoAdAdapter'
  s.dependency 'MintegralAdSDKAdapterForAdmob/InterstitialAdAdapter'
  s.dependency 'MintegralAdSDKAdapterForAdmob/BannerAdAdapter'
  s.dependency 'MintegralAdSDKAdapterForAdmob/NativeAdAdapter'
  s.dependency 'GoogleMobileAdsMediationMintegral', '7.2.9.0'
  s.dependency 'GoogleMobileAdsMediationAppLovin', '11.6.1.0'
  s.dependency 'GoogleMobileAdsMediationUnity', '4.5.0.0'
    
  s.static_framework = true
  
end
