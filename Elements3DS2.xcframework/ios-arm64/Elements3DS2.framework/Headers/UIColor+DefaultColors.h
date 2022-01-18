//
//  UIColor+DefaultColors.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/18/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (ElementsDefaultColors)

/// The challenge view footer background color
+ (UIColor *)_etds_defaultFooterBackgroundColor;
+ (UIColor *)_etds_blueColor;

@end

NS_ASSUME_NONNULL_END

void _etds_import_uicolor_defaultcolors(void);
