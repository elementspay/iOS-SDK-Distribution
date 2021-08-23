//
//  ETDSJSONEncodable.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ETDSJSONEncodable <NSObject>

/**
 Returns a map of property names to their JSON representation's key value. For example, `ETDSChallengeParameters` has a property called `acsTransactionID`, but the 3DS2 JSON spec expects a field called `acsTransID`. This dictionary represents a mapping from the former to the latter (in other words, [ETDSChallengeParameters propertyNamesToJSONKeysMapping][@"acsTransactionID"] == @"acsTransID".)
 */
+ (NSDictionary *)propertyNamesToJSONKeysMapping;

@end

NS_ASSUME_NONNULL_END
