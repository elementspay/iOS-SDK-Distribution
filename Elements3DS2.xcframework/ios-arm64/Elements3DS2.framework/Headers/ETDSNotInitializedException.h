//
//  ETDSNotInitializedException.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 2/13/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import "ETDSException.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `ETDSNotInitializedException` represents an exception that will be thrown by
 the the Stripe3DS2 SDK if methods are called without initializing `ETDSThreeDS2Service`.

 @see ETDSThreeDS2Service
 */
@interface ETDSNotInitializedException : ETDSException

@end

NS_ASSUME_NONNULL_END
