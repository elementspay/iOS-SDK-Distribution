//
//  ETDSChallengeResponseImageObject.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 2/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ETDSChallengeResponseImage.h"

#import "ETDSJSONDecodable.h"

NS_ASSUME_NONNULL_BEGIN

/// An object used to represent information about an individual image resource inside of a challenge response.
@interface ETDSChallengeResponseImageObject: NSObject <ETDSChallengeResponseImage, ETDSJSONDecodable>

- (instancetype)initWithMediumDensityURL:(NSURL * _Nullable)mediumDensityURL highDensityURL:(NSURL * _Nullable)highDensityURL extraHighDensityURL:(NSURL * _Nullable)extraHighDensityURL;

@end

NS_ASSUME_NONNULL_END
