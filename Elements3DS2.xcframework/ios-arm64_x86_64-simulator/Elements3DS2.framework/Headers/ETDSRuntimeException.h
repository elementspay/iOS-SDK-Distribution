//
//  ETDSRuntimeException.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 1/22/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import "ETDSException.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `ETDSRuntimeException` represents an exception that will be thrown by the
 Stripe3DS2 SDK if it encounters an internal error.
 */
@interface ETDSRuntimeException : ETDSException

@end

NS_ASSUME_NONNULL_END
