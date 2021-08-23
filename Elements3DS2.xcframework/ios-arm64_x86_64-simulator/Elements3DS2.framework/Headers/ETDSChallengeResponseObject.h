//
//  ETDSChallengeResponseObject.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 2/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ETDSChallengeResponse.h"
#import "ETDSJSONDecodable.h"

NS_ASSUME_NONNULL_BEGIN

/// An object used to represent a challenge response from the ACS.
@interface ETDSChallengeResponseObject: NSObject <ETDSChallengeResponse, ETDSJSONDecodable>

- (instancetype)initWithThreeDSServerTransactionID:(NSString *)threeDSServerTransactionID
                                acsCounterACStoSDK:(NSString *)acsCounterACStoSDK
                                  acsTransactionID:(NSString *)acsTransactionID
                                           acsHTML:(NSString * _Nullable)acsHTML
                                    acsHTMLRefresh:(NSString * _Nullable)acsHTMLRefresh
                                         acsUIType:(ETDSACSUIType)acsUIType
                      challengeCompletionIndicator:(BOOL)challengeCompletionIndicator
                               challengeInfoHeader:(NSString * _Nullable)challengeInfoHeader
                                challengeInfoLabel:(NSString * _Nullable)challengeInfoLabel
                                 challengeInfoText:(NSString * _Nullable)challengeInfoText
                       challengeAdditionalInfoText:(NSString * _Nullable)challengeAdditionalInfoText
                    showChallengeInfoTextIndicator:(BOOL)showChallengeInfoTextIndicator
                               challengeSelectInfo:(NSArray<id<ETDSChallengeResponseSelectionInfo>> * _Nullable)challengeSelectInfo
                                   expandInfoLabel:(NSString * _Nullable)expandInfoLabel
                                    expandInfoText:(NSString * _Nullable)expandInfoText
                                       issuerImage:(id<ETDSChallengeResponseImage> _Nullable)issuerImage
                                 messageExtensions:(NSArray<id<ETDSChallengeResponseMessageExtension>> * _Nullable)messageExtensions
                                    messageVersion:(NSString *)messageVersion
                                         oobAppURL:(NSURL * _Nullable)oobAppURL
                                       oobAppLabel:(NSString * _Nullable)oobAppLabel
                                  oobContinueLabel:(NSString * _Nullable)oobContinueLabel
                                paymentSystemImage:(id<ETDSChallengeResponseImage> _Nullable)paymentSystemImage
                            resendInformationLabel:(NSString * _Nullable)resendInformationLabel
                                  sdkTransactionID:(NSString *)sdkTransactionID
                         submitAuthenticationLabel:(NSString * _Nullable)submitAuthenticationLabel
                              whitelistingInfoText:(NSString * _Nullable)whitelistingInfoText
                                      whyInfoLabel:(NSString * _Nullable)whyInfoLabel
                                       whyInfoText:(NSString * _Nullable)whyInfoText
                                 transactionStatus:(NSString * _Nullable)transactionStatus;
@end

NS_ASSUME_NONNULL_END
