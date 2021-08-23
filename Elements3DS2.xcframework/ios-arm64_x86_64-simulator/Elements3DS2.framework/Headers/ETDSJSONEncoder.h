//
//  ETDSJSONEncoder.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ETDSJSONEncodable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `ETDSJSONEncoder` is a utility class to help with converting API objects into JSON
 */
@interface ETDSJSONEncoder : NSObject

/**
 Method to convert an ETDSJSONEncodable object into a JSON dictionary.
 */
+ (NSDictionary *)dictionaryForObject:(NSObject<ETDSJSONEncodable> *)object;

@end

NS_ASSUME_NONNULL_END
