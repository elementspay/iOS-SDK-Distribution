//
//  ETDSDirectoryServerCertificate.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 3/27/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ETDSJSONWebSignature;

#import "ETDSDirectoryServer.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ETDSDirectoryServerKeyType) {
    ETDSDirectoryServerKeyTypeRSA,
    ETDSDirectoryServerKeyTypeEC,
    ETDSDirectoryServerKeyTypeUnknown,
};

@interface ETDSDirectoryServerCertificate : NSObject

+ (nullable instancetype)certificateForDirectoryServer:(ETDSDirectoryServer)directoryServer;

+ (nullable instancetype)customCertificateWithData:(NSData *)certificateData;

+ (nullable instancetype)customCertificateWithString:(NSString *)certificateString;

@property (nonatomic, readonly) ETDSDirectoryServerKeyType keyType;

@property (nonatomic, readonly) SecKeyRef publicKey;

@property (nonatomic, readonly, copy) NSString *certificateString;

- (nullable NSData *)encryptDataUsingRSA_OAEP_SHA256:(NSData *)plaintext;

+ (BOOL)verifyJSONWebSignature:(ETDSJSONWebSignature *)jws withRootCertificates:(NSArray<NSString *> *)rootCertificates;

@end

NS_ASSUME_NONNULL_END
