//
//  ETDSStripe3DS2Error.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/27/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const ETDSStripe3DS2ErrorDomain;

/**
 NSError.userInfo contains this key if we received an ErrorMessage instead of the expected response object.
 The value of this key is the ErrorMessage.
 */
FOUNDATION_EXPORT NSString * const ETDSStripe3DS2ErrorMessageErrorKey;

/**
 NSError.userInfo contains this key if we errored parsing JSON.
 The value of this key is the invalid or missing field.
 */
FOUNDATION_EXPORT NSString * const ETDSStripe3DS2ErrorFieldKey;

/**
 NSError.userInfo contains this key if we couldn't recognize critical message extension(s)
 The value of this key is an array of identifiers.
 */
FOUNDATION_EXPORT NSString * const ETDSStripe3DS2UnrecognizedCriticalMessageExtensionsKey;


typedef NS_ENUM(NSInteger, ETDSErrorCode) {

    /// Code triggered an assertion
    ETDSErrorCodeAssertionFailed = 204,
    
    // JSON Parsing
    /// Received invalid or malformed data
    ETDSErrorCodeJSONFieldInvalid = 203,
    /// Expected field missing
    ETDSErrorCodeJSONFieldMissing = 201,

    /// Critical message extension not recognised
    ETDSErrorCodeUnrecognizedCriticalMessageExtension = 202,
    
    /// Decryption or verification error
    ETDSErrorCodeDecryptionVerification = 302,

    /// Error code corresponding to a `ETDSRuntimeErrorEvent` for an unparseable network response
    ETDSErrorCodeRuntimeParsing = 400,
    /// Error code corresponding to a `ETDSRuntimeErrorEvent` for an error with decrypting or verifying a network response
    ETDSErrorCodeRuntimeEncryption = 401,
    
    // Networking
    /// We received an ErrorMessage instead of the expected response object.  `userInfo[ETDSStripe3DS2ErrorMessageErrorKey]` will contain the ErrorMessage object.
    ETDSErrorCodeReceivedErrorMessage = 1000,
    /// We received an unknown message type.
    ETDSErrorCodeUnknownMessageType = 1001,
    /// Request timed out
    ETDSErrorCodeTimeout = 1002,
    
    /// Unknown
    ETDSErrorCodeUnknownError = 2000,
};

NS_ASSUME_NONNULL_END
