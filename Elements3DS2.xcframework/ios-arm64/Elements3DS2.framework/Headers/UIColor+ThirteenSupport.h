//
//  UIColor+ThirteenSupport.h
//  Stripe3DS2
//
//  Created by David Estes on 8/21/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (ETDSThirteenSupport)

+ (UIColor *)_etds_colorWithDynamicProvider:(UIColor * _Nonnull (^)(UITraitCollection *traitCollection))dynamicProvider;
+ (UIColor *)_etds_systemGray5Color;
+ (UIColor *)_etds_systemGray2Color;
+ (UIColor *)_etds_systemBackgroundColor;
+ (UIColor *)_etds_labelColor;


@end

NS_ASSUME_NONNULL_END

void _etds_import_uicolor_thirteensupport(void);
