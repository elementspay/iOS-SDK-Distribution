Pod::Spec.new do |spec|
  framework_filename = "Elements.xcframework"

  spec.name = "Elements"
  spec.version = "1.0.3"
  spec.summary = "Elements iOS SDK"
  spec.description = <<-DESC
    Elements official SDK
                   DESC
  spec.homepage = "https://github.com/elementspay/Elements-iOS-Demo"
  spec.license = { :type => 'MIT', :file => 'LICENSE' }
  spec.author = { "Marvin Zhan" => "marvin@elements.io" }
  spec.platform = :ios
  spec.ios.deployment_target = "11.0"
  spec.swift_version = '5.1'

  spec.source = { :git => "https://github.com/elementspay/ios-sdk-distribution.git", :tag => spec.version }

  spec.frameworks = 'Foundation'
  spec.default_subspecs = 'Core'
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'SWIFT_SUPPRESS_WARNINGS' => 'YES' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  spec.subspec 'Core' do |plugin|
    plugin.vendored_frameworks = 'Elements.xcframework'
  end

  spec.subspec 'Card' do |plugin|
    plugin.dependency 'Elements/Core'
    plugin.vendored_frameworks = 'ElementsCard.xcframework'
  end

  spec.subspec 'Actions' do |plugin|
    plugin.dependency 'Elements/Core'
    plugin.vendored_frameworks = 'ElementsActions.xcframework'
  end
end
