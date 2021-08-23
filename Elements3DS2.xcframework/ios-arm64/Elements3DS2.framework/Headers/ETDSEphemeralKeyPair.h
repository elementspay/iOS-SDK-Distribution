//
//  ETDSEphemeralKeyPair.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 3/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ETDSDirectoryServerCertificate;
@class ETDSEllipticCurvePoint;

#import "ETDSDirectoryServer.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETDSEphemeralKeyPair : NSObject

/// Creates a returns a new elliptic curve key pair using curve P-256
+ (nullable instancetype)ephemeralKeyPair;

- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic, readonly) NSString *publicKeyJWK;
@property (nonatomic, readonly) ETDSEllipticCurvePoint *publicKeyCurvePoint;

/**
 Creates and returns a new secret key derived using Elliptic Curve Diffie-Hellman
 and the certificate's public key (return nil on failure).
 Per OpenSSL documentation: Never use a derived secret directly. Typically it is passed through some
 hash function to produce a key (e.g. pass the secret as the first argument to ETDSCreateConcatKDFWithSHA256)
 */
- (nullable NSData *)createSharedSecretWithEllipticCurveKey:(ETDSEllipticCurvePoint *)ecKey;
- (nullable NSData *)createSharedSecretWithCertificate:(ETDSDirectoryServerCertificate *)certificate;

@end

NS_ASSUME_NONNULL_END
