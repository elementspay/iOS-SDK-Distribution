//
//  UIButton+CustomInitialization.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/18/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ETDSUICustomization.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (ElementsCustomInitialization)

+ (UIButton *)_etds_buttonWithTitle:(NSString * _Nullable)title customization:(ETDSButtonCustomization * _Nullable)customization;

@end

NS_ASSUME_NONNULL_END

void _etds_import_uibutton_custominitialization(void);
