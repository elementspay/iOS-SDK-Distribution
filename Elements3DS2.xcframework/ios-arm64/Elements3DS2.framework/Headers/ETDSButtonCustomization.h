//
//  ETDSButtonCustomization.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/14/19.
//  Copyright © 2019 Stripe. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "ETDSCustomization.h"

/// An enum that defines the different types of buttons that are able to be customized.
typedef NS_ENUM(NSInteger, ETDSUICustomizationButtonType) {
    
    /// The submit button type.
    ETDSUICustomizationButtonTypeSubmit = 0,
    
    /// The continue button type.
    ETDSUICustomizationButtonTypeContinue = 1,
    
    /// The next button type.
    ETDSUICustomizationButtonTypeNext = 2,
    
    /// The cancel button type.
    ETDSUICustomizationButtonTypeCancel = 3,
    
    /// The resend button type.
    ETDSUICustomizationButtonTypeResend = 4,
};

/// An enumeration of the case transformations that can be applied to the button's title
typedef NS_ENUM(NSInteger, ETDSButtonTitleStyle) {
    /// Default style, doesn't modify the title
    ETDSButtonTitleStyleDefault,
    
    /// Applies localizedUppercaseString to the title
    ETDSButtonTitleStyleUppercase,
    
    /// Applies localizedLowercaseString to the title
    ETDSButtonTitleStyleLowercase,
    
    /// Applies localizedCapitalizedString to the title
    ETDSButtonTitleStyleSentenceCapitalized,
};

NS_ASSUME_NONNULL_BEGIN

/// A customization object to use to configure the UI of a button.
@interface ETDSButtonCustomization: ETDSCustomization

/// The default settings for the provided button type.
+ (instancetype)defaultSettingsForButtonType:(ETDSUICustomizationButtonType)type;

/**
 Initializes an instance of ETDSButtonCustomization with the given backgroundColor and colorRadius.
 */
- (instancetype)initWithBackgroundColor:(UIColor *)backgroundColor cornerRadius:(CGFloat)cornerRadius;

/**
 This is unavailable because there are no sensible default property values without a button type.
 Use `defaultSettingsForButtonType:` or `initWithBackgroundColor:cornerRadius:` instead.
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 The background color of the button.
 The default for .resend and .cancel is clear.
 The default for .submit, .continue, and .next is blue.
 */
@property (nonatomic) UIColor *backgroundColor;

/// The corner radius of the button. Defaults to 8.
@property (nonatomic) CGFloat cornerRadius;

/**
 The capitalization style of the button title
 */
@property (nonatomic) ETDSButtonTitleStyle titleStyle;

@end

NS_ASSUME_NONNULL_END
