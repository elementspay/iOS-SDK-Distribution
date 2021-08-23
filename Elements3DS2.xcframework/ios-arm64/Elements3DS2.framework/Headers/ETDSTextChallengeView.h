//
//  ETDSTextChallengeView.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/5/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ETDSTextFieldCustomization.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETDSTextField: UITextField

@end

@interface ETDSTextChallengeView : UIView

@property (nonatomic, strong, nullable) ETDSTextFieldCustomization *textFieldCustomization;
@property (nonatomic, copy, readonly, nullable) NSString *inputText;
@property (nonatomic, strong) ETDSTextField *textField;

@end

NS_ASSUME_NONNULL_END
