Pod::Spec.new do |s|
  s.name             = 'Magnet-iOS'
  s.version          = '1.0.0'
  s.summary          = 'Magnet used for mediation with the Google Mobile Ads SDK and Meta Audience Network'
  s.description      = <<-DESC
                      The Magnet SDK is the latest generation advertising featuring refined ad formats and streamlined APIs for access to mobile ad networks and advertising solutions. Magnet helps maximize your fill rate and increase your monetization by sending ad requests to multiple networks to ensure you find the best available network to serve ads.
                       DESC
  s.homepage         = 'https://github.com/TMPub/Magnet-iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Magnet' => 'Magnet' }

  s.author              = { 'jieyuan.zhuang' => 'jieyuan.zhuang@transsnet.com' }
  s.source              = { :http => 'https://github.com/TMPub/Magnet-iOS/archive/refs/tags/1.0.0.zip' }
  s.vendored_frameworks = 'Magnet-iOS-1.0.0/Framework/Magnet.xcframework'
  s.ios.deployment_target = '11.0'

  s.dependency 'TMKit-iOS'
  s.dependency 'Google-Mobile-Ads-SDK'
  s.dependency 'GoogleMobileAdsMediationFacebook'
  s.dependency 'FBAudienceNetwork'
  s.dependency 'FBSDKCoreKit'
    
  s.static_framework = true
  
end
