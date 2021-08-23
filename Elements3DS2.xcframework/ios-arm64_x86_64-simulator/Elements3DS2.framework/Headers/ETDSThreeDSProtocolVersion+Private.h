//
//  ETDSThreeDSProtocolVersion+Private.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 3/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import "ETDSThreeDSProtocolVersion.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, ETDSThreeDSProtocolVersion) {
    ETDSThreeDSProtocolVersion2_1_0,
    ETDSThreeDSProtocolVersion2_2_0,
    ETDSThreeDSProtocolVersionUnknown,
    ETDSThreeDSProtocolVersionFallbackTest,
};

static NSString * const kThreeDS2ProtocolVersion2_1_0 = @"2.1.0";
static NSString * const kThreeDS2ProtocolVersion2_2_0 = @"2.2.0";
static NSString * const kThreeDSProtocolVersionFallbackTest = @"2.0.0";

NS_INLINE ETDSThreeDSProtocolVersion ETDSThreeDSProtocolVersionForString(NSString *stringValue) {
    if ([stringValue isEqualToString:kThreeDS2ProtocolVersion2_1_0]) {
        return ETDSThreeDSProtocolVersion2_1_0;
    } else if ([stringValue isEqualToString:kThreeDS2ProtocolVersion2_2_0]) {
        return ETDSThreeDSProtocolVersion2_2_0;
    } else if ([stringValue isEqualToString:kThreeDSProtocolVersionFallbackTest]) {
        return ETDSThreeDSProtocolVersionFallbackTest;
    } else {
        return ETDSThreeDSProtocolVersionUnknown;
    }
}

NS_INLINE NSString * _Nullable ETDSThreeDSProtocolVersionStringValue(ETDSThreeDSProtocolVersion protocolVersion) {
    switch (protocolVersion) {
        case ETDSThreeDSProtocolVersion2_1_0:
            return kThreeDS2ProtocolVersion2_1_0;

        case ETDSThreeDSProtocolVersion2_2_0:
            return kThreeDS2ProtocolVersion2_2_0;

        case ETDSThreeDSProtocolVersionFallbackTest:
            return kThreeDSProtocolVersionFallbackTest;

        case ETDSThreeDSProtocolVersionUnknown:
            return nil;
    }
}

NS_ASSUME_NONNULL_END
