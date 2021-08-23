//
//  UIViewController+Stripe3DS2.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 5/6/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class ETDSUICustomization;

@interface UIViewController (Stripe3DS2)

- (void)_etds_setupNavigationBarElementsWithCustomization:(ETDSUICustomization *)customization cancelButtonSelector:(SEL)cancelButtonSelector;

@end

NS_ASSUME_NONNULL_END

void _etds_import_uiviewcontroller_stripe3ds2(void);
