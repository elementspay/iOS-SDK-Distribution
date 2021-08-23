//
//  ETDSAlreadyInitializedException.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 1/22/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import "ETDSException.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `ETDSAlreadyInitializedException` represents an exception that will be thrown in the `ETDSThreeDS2Service` instance has already been initialized.

 @see ETDSThreeDS2Service
 */
@interface ETDSAlreadyInitializedException : ETDSException

@end

NS_ASSUME_NONNULL_END
