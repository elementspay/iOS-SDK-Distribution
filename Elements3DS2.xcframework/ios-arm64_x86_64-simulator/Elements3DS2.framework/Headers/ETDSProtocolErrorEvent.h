//
//  ETDSProtocolErrorEvent.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/20/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ETDSErrorMessage;

NS_ASSUME_NONNULL_BEGIN

/**
 `ETDSProtocolErrorEvent` contains details about erorrs received from or sent to the ACS.
 */
@interface ETDSProtocolErrorEvent : NSObject

/**
 Designated initializer for `ETDSProtocolErrorEvent`.
 */
- (instancetype)initWithSDKTransactionIdentifier:(NSString *)identifier errorMessage:(ETDSErrorMessage *)errorMessage;

/**
 `ETDSProtocolErrorEvent` should not be directly initialized.
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 Details about the error.
 */
@property (nonatomic, readonly) ETDSErrorMessage *errorMessage;

/**
 The SDK Transaction Identifier.
 */
@property (nonatomic, readonly) NSString *sdkTransactionIdentifier;

@end

NS_ASSUME_NONNULL_END
