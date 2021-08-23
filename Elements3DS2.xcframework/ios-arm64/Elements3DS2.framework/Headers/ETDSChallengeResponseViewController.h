//
//  ETDSChallengeResponseViewController.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/4/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ETDSChallengeResponse.h"
#import "ETDSUICustomization.h"
#import "ETDSImageLoader.h"
#import "ETDSDirectoryServer.h"

@class ETDSChallengeResponseViewController;

NS_ASSUME_NONNULL_BEGIN

@protocol ETDSChallengeResponseViewControllerDelegate

/**
 Called when the user taps the Submit button after entering text in the Text flow (ETDSACSUITypeText)
 */
- (void)challengeResponseViewController:(ETDSChallengeResponseViewController *)viewController didSubmitInput:(NSString *)userInput;

/**
 Called when the user taps the Submit button after selecting one or more options in the Single-Select (ETDSACSUITypeSingleSelect) or Multi-Select (ETDSACSUITypeMultiSelect) flow.
 */
- (void)challengeResponseViewController:(ETDSChallengeResponseViewController *)viewController didSubmitSelection:(NSArray<id<ETDSChallengeResponseSelectionInfo>> *)selection;

/**
 Called when the user submits an HTML form.
 */
- (void)challengeResponseViewController:(ETDSChallengeResponseViewController *)viewController didSubmitHTMLForm:(NSString *)form;

/**
 Called when the user taps the Continue button from an Out-of-Band flow (ETDSACSUITypeOOB).
 */
- (void)challengeResponseViewControllerDidOOBContinue:(ETDSChallengeResponseViewController *)viewController;

/**
 Called when the user taps the Cancel button.
 */
- (void)challengeResponseViewControllerDidCancel:(ETDSChallengeResponseViewController *)viewController;

/**
 Called when the user taps the Resend button.
 */
- (void)challengeResponseViewControllerDidRequestResend:(ETDSChallengeResponseViewController *)viewController;

@end

@protocol ETDSChallengeResponseViewControllerPresentationDelegate

- (void)dismissChallengeResponseViewController:(ETDSChallengeResponseViewController *)viewController;

@end

@interface ETDSChallengeResponseViewController : UIViewController

@property (nonatomic, weak) id<ETDSChallengeResponseViewControllerDelegate> delegate;

@property (nonatomic, nullable, weak) id<ETDSChallengeResponseViewControllerPresentationDelegate> presentationDelegate;

/// Use setChallengeResponser:animated: to update this value
@property (nonatomic, strong, readonly) id<ETDSChallengeResponse> response;

- (instancetype)initWithUICustomization:(ETDSUICustomization * _Nullable)uiCustomization imageLoader:(ETDSImageLoader *)imageLoader directoryServer:(ETDSDirectoryServer)directoryServer;

/// If `setLoading` was called beforehand, this waits until the loading spinner has been shown for at least 1 second before displaying the challenge responseself.processingView.isHidden.
- (void)setChallengeResponse:(id<ETDSChallengeResponse>)response animated:(BOOL)animated;

- (void)setLoading;

- (void)dismiss;

@end

NS_ASSUME_NONNULL_END
