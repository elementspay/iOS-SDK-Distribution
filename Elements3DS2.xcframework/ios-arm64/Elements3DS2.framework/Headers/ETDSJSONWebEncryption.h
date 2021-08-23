//
//  ETDSJSONWebEncryption.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 1/24/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ETDSDirectoryServer.h"

@class ETDSDirectoryServerCertificate;
@class ETDSJSONWebSignature;

NS_ASSUME_NONNULL_BEGIN

@interface ETDSJSONWebEncryption : NSObject

+ (nullable NSString *)encryptJSON:(NSDictionary *)json
                forDirectoryServer:(ETDSDirectoryServer)directoryServer
                             error:(out NSError * _Nullable *)error;

+ (nullable NSString *)encryptJSON:(NSDictionary *)json
                   withCertificate:(ETDSDirectoryServerCertificate *)certificate
                 directoryServerID:(NSString *)directoryServerID
                       serverKeyID:(nullable NSString *)serverKeyID
                             error:(out NSError * _Nullable *)error;

+ (nullable NSString *)directEncryptJSON:(NSDictionary *)json
                withContentEncryptionKey:(NSData *)contentEncryptionKey
                     forACSTransactionID:(NSString *)acsTransactionID
                                   error:(out NSError * _Nullable *)error;

+ (nullable NSDictionary *)decryptData:(NSData *)data
              withContentEncryptionKey:(NSData *)contentEncryptionKey
                                 error:(out NSError * _Nullable *)error;

+ (BOOL)verifyJSONWebSignature:(ETDSJSONWebSignature *)jws forDirectoryServer:(ETDSDirectoryServer)directoryServer;

+ (BOOL)verifyJSONWebSignature:(ETDSJSONWebSignature *)jws withCertificate:(ETDSDirectoryServerCertificate *)certificate rootCertificates:(NSArray<NSString *> *)rootCertificates;

@end

NS_ASSUME_NONNULL_END
