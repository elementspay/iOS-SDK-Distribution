//
//  ETDSACSNetworkingManager.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 4/3/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ETDSChallengeRequestParameters;
@class ETDSErrorMessage;
@protocol ETDSChallengeResponse;

NS_ASSUME_NONNULL_BEGIN

@interface ETDSACSNetworkingManager : NSObject

- (instancetype)initWithURL:(NSURL *)acsURL
    sdkContentEncryptionKey:(NSData *)sdkCEK
    acsContentEncryptionKey:(NSData *)acsCEK
   acsTransactionIdentifier:(NSString *)acsTransactionID;

- (void)submitChallengeRequest:(ETDSChallengeRequestParameters *)request withCompletion:(void (^)(id<ETDSChallengeResponse> _Nullable, NSError * _Nullable))completion;

- (void)sendErrorMessage:(ETDSErrorMessage *)errorMessage;

@end

NS_ASSUME_NONNULL_END
