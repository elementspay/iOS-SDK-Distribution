//
//  ETDSSecTypeUtilities.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 1/28/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ETDSDirectoryServer.h"

NS_ASSUME_NONNULL_BEGIN

/// Returns the SecCertificateRef for the specified server or NULL if there's an error
SecCertificateRef _Nullable ETDSCertificateForServer(ETDSDirectoryServer server);

/// Returns the public key in the certificate or NULL if there's an error
SecKeyRef _Nullable ETDSSecCertificateCopyPublicKey(SecCertificateRef certificate);

/// Returns one of the values defined for kSecAttrKeyType in <Security/SecItem.h> or NULL
CFStringRef _Nullable ETDSSecCertificateCopyPublicKeyType(SecCertificateRef certificate);

/// Returns the hashed secret or nil
NSData * _Nullable ETDSCreateConcatKDFWithSHA256(NSData *sharedSecret, NSUInteger keyLength, NSString *apv);

/// Verifies the signature and payload using the Elliptic Curve P-256 with coordinateX and coordinateY
BOOL ETDSVerifyEllipticCurveP256Signature(NSData *coordinateX, NSData *coordinateY, NSData *payload, NSData *signature);

/// Verifies the signature and payload using RSA-PSS
BOOL ETDSVerifyRSASignature(SecCertificateRef certificate, NSData *payload, NSData *signature);

/// Returns data of length numBytes generated using CommonCrypto's CCRandomGenerateBytes or nil on failure
NSData * _Nullable ETDSCryptoRandomData(size_t numBytes);

/// Creates a certificate from base64encoded data
SecCertificateRef _Nullable ETDSSecCertificateFromData(NSData *data);

/// Creates a certificate from a PEM or DER encoded certificate string
SecCertificateRef _Nullable ETDSSecCertificateFromString(NSString *certificateString);

// Creates a public key using Elliptic Curve P-256 with coordinateX and coordinateY
SecKeyRef _Nullable ETDSSecKeyRefFromCoordinates(NSData *coordinateX, NSData *coordinateY);

// Creates a private key using Elliptic Curve P-256 with x, y, and d
SecKeyRef _Nullable ETDSPrivateSecKeyRefFromCoordinates(NSData *x, NSData *y, NSData *d);


NS_ASSUME_NONNULL_END
