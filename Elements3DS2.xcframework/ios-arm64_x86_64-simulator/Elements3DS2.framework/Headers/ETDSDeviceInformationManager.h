//
//  ETDSDeviceInformationManager.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 1/23/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ETDSDeviceInformation;
@class ETDSWarning;

NS_ASSUME_NONNULL_BEGIN

@interface ETDSDeviceInformationManager : NSObject

+ (ETDSDeviceInformation *)deviceInformationWithWarnings:(NSArray<ETDSWarning *> *)warnings
                                    ignoringRestrictions:(BOOL)ignoreRestrictions;

@end

NS_ASSUME_NONNULL_END
