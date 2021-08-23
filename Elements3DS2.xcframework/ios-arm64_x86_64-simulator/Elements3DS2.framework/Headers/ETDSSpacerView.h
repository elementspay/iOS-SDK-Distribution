//
//  ETDSSpacerView.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/4/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ETDSStackView.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETDSSpacerView : UIView

- (instancetype)initWithLayoutAxis:(ETDSStackViewLayoutAxis)layoutAxis dimension:(CGFloat)dimension;

@end

NS_ASSUME_NONNULL_END
