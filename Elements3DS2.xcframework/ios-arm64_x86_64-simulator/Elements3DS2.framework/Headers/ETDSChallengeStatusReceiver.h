//
//  ETDSChallengeStatusReceiver.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/20/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ETDSTransaction, ETDSCompletionEvent, ETDSRuntimeErrorEvent, ETDSProtocolErrorEvent;

NS_ASSUME_NONNULL_BEGIN

/**
 Implement the `ETDSChallengeStatusReceiver` protocol to receive challenge status notifications at the end of the challenge process.
 @see `ETDSTransaction.doChallenge`
 */
@protocol ETDSChallengeStatusReceiver <NSObject>

/**
 Called when the challenge process is completed.
 
 @param completionEvent Information about the completion of the challenge process.  @see `ETDSCompletionEvent`
 */
- (void)transaction:(ETDSTransaction *)transaction didCompleteChallengeWithCompletionEvent:(ETDSCompletionEvent *)completionEvent;

/**
 Called when the user selects the option to cancel the transaction on the challenge screen.
 */
- (void)transactionDidCancel:(ETDSTransaction *)transaction;

/**
 Called when the challenge process reaches or exceeds the timeout interval that was passed to `ETDSTransaction.doChallenge`
 */
- (void)transactionDidTimeOut:(ETDSTransaction *)transaction;

/**
 Called when the 3DS SDK receives an EMV 3-D Secure protocol-defined error message from the ACS.
 
 @param protocolErrorEvent The error code and details.  @see `ETDSProtocolErrorEvent`
 */
- (void)transaction:(ETDSTransaction *)transaction didErrorWithProtocolErrorEvent:(ETDSProtocolErrorEvent *)protocolErrorEvent;

/**
 Called when the 3DS SDK encounters errors during the challenge process. These errors include all errors except those covered by `didErrorWithProtocolErrorEvent`.
 
 @param runtimeErrorEvent The error code and details.  @see `ETDSRuntimeErrorEvent`
 */
- (void)transaction:(ETDSTransaction *)transaction didErrorWithRuntimeErrorEvent:(ETDSRuntimeErrorEvent *)runtimeErrorEvent;

@optional

/**
 Optional method that will be called when the transaction displays a new challenge screen.
 */
- (void)transactionDidPresentChallengeScreen:(ETDSTransaction *)transaction;

/**
 Optional method for custom dismissal of the challenge view controller. Meant only for internal use by Stripe SDK.
 */
- (void)dismissChallengeViewController:(UIViewController *)challengeViewController forTransaction:(ETDSTransaction *)transaction;

@end

NS_ASSUME_NONNULL_END
