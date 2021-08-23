//
//  ETDSRuntimeErrorEvent.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/20/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString * const kETDSRuntimeErrorCodeParsingError;
FOUNDATION_EXTERN NSString * const kETDSRuntimeErrorCodeEncryptionError;

/**
 `ETDSRuntimeErrorEvent` contains details about run-time errors encountered during authentication.
 
 The following are examples of run-time errors:
 - ACS is unreachable
 - Unparseable message
 - Network issues
 */
@interface ETDSRuntimeErrorEvent : NSObject

/**
 A code corresponding to the type of error this represents.
 */
@property (nonatomic, readonly) NSString *errorCode;

/**
 Details about the error.
 */
@property (nonatomic, readonly) NSString *errorMessage;

/**
 Designated initializer for `ETDSRuntimeErrorEvent`.
 */
- (instancetype)initWithErrorCode:(NSString *)errorCode errorMessage:(NSString *)errorMessage NS_DESIGNATED_INITIALIZER;

/**
 A representation of the `ETDSRuntimeErrorEvent` as an `NSError`
 */
- (NSError *)NSErrorValue;

/**
 `ETDSRuntimeErrorEvent` should not be directly initialized.
 */
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
