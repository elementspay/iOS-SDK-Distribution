//
//  ETDSChallengeResponseSelectionInfoObject.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 2/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ETDSChallengeResponseSelectionInfo.h"

NS_ASSUME_NONNULL_BEGIN

/// An object used to represent information about an individual selection inside of a challenge response.
@interface ETDSChallengeResponseSelectionInfoObject: NSObject <ETDSChallengeResponseSelectionInfo>

- (instancetype)initWithName:(NSString *)name value:(NSString *)value;

@end

NS_ASSUME_NONNULL_END
