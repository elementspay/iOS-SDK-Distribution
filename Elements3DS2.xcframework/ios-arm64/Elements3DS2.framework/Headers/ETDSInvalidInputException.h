//
//  ETDSInvalidInputException.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 1/22/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import "ETDSException.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `ETDSInvalidInputException` represents an exception that will be thrown by
 Stripe3DS2 SDK methods that are called with invalid input arguments.
 */
@interface ETDSInvalidInputException : ETDSException

@end

NS_ASSUME_NONNULL_END
