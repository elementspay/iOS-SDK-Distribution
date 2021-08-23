//
//  ETDSTransaction+Private.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/22/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import "ETDSTransaction.h"

@class ETDSDeviceInformation;
@class ETDSDirectoryServerCertificate;

#import "ETDSDirectoryServer.h"
#import "ETDSThreeDSProtocolVersion+Private.h"
#import "ETDSUICustomization.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETDSTransaction ()

- (instancetype)initWithDeviceInformation:(ETDSDeviceInformation *)deviceInformation
                          directoryServer:(ETDSDirectoryServer)directoryServer
                          protocolVersion:(ETDSThreeDSProtocolVersion)protocolVersion
                          uiCustomization:(ETDSUICustomization *)uiCustomization;

- (instancetype)initWithDeviceInformation:(ETDSDeviceInformation *)deviceInformation
                        directoryServerID:(NSString *)directoryServerID
                              serverKeyID:(nullable NSString *)serverKeyID
               directoryServerCertificate:(ETDSDirectoryServerCertificate *)directoryServerCertificate
                   rootCertificateStrings:(NSArray<NSString *> *)rootCertificateStrings
                          protocolVersion:(ETDSThreeDSProtocolVersion)protocolVersion
                          uiCustomization:(ETDSUICustomization *)uiCustomization;

@property (nonatomic, strong) NSTimer *timeoutTimer;
@property (nonatomic) BOOL bypassTestModeVerification; // Should be used during internal testing ONLY
@property (nonatomic) BOOL useULTestLOA; // Should only be used when running tests with the UL reference app

@end

NS_ASSUME_NONNULL_END
