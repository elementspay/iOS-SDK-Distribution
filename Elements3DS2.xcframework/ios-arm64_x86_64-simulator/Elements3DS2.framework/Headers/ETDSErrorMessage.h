//
//  ETDSErrorMessage.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/21/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ETDSJSONEncodable.h"
#import "ETDSJSONDecodable.h"

NS_ASSUME_NONNULL_BEGIN

/// Error codes as defined by the 3DS2 spec.
typedef NS_ENUM(NSInteger, ETDSErrorMessageCode) {
    /// The SDK received a message that is not an ARes, CRes, or ErrorMessage.
    ETDSErrorMessageCodeInvalidMessage = 101,
    
    /// A required data element is missing from the network response.
    ETDSErrorMessageCodeRequiredDataElementMissing = 201,
    
    // Critical message extension not recognised
    ETDSErrorMessageCodeUnrecognizedCriticalMessageExtension = 202,
    
    /// A data element is not in the required format or the value is invalid.
    ETDSErrorMessageErrorInvalidDataElement = 203,
    
    // Transaction ID not recognized
    ETDSErrorMessageErrorTransactionIDNotRecognized = 301,
    
    /// A network response could not be decrypted or verified.
    ETDSErrorMessageErrorDataDecryptionFailure = 302,
    
    /// The SDK timed out
    ETDSErrorMessageErrorTimeout = 402,
};

/**
 `ETDSErrorMessage` represents an error message that is returned by the ACS or to be sent to the ACS.
 */
@interface ETDSErrorMessage : NSObject <ETDSJSONEncodable, ETDSJSONDecodable>

/**
 Designated initializer for `ETDSErrorMessage`.
 
 @param errorCode               The error code.
 @param errorComponent          The component that identified the error.
 @param errorDescription        Text describing the error.
 @param errorDetails            Additional error details.  Optional.
 */
- (instancetype)initWithErrorCode:(NSString *)errorCode
                   errorComponent:(NSString *)errorComponent
                 errorDescription:(NSString *)errorDescription
                     errorDetails:(nullable NSString *)errorDetails
                   messageVersion:(NSString *)messageVersion
         acsTransactionIdentifier:(nullable NSString *)acsTransactionIdentifier
                 errorMessageType:(NSString *)errorMessageType;

/**
 The error code.
 */
@property (nonatomic, readonly) NSString *errorCode;

/**
 The 3-D Secure component that identified the error.
 */
@property (nonatomic, readonly) NSString *errorComponent;

/**
 Text describing the error.
 */
@property (nonatomic, readonly) NSString *errorDescription;

/**
 Additional error details.
 */
@property (nonatomic, nullable, readonly) NSString *errorDetails;

/**
 The protocol version identifier.
 */
@property (nonatomic, readonly) NSString *messageVersion;

/**
 The ACS transaction identifier.
 */
@property (nonatomic, readonly, nullable) NSString *acsTransactionIdentifier;

/**
 The message type that was identified as erroneous.
 */
@property (nonatomic, readonly, nullable) NSString *errorMessageType;

/**
 A representation of the `ETDSErrorMessage` as an `NSError`
 */
- (NSError *)NSErrorValue;

@end

NS_ASSUME_NONNULL_END
