//
//  ETDSChallengeInformationView.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/4/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ETDSLabelCustomization.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETDSChallengeInformationView: UIView

@property (nonatomic, strong, nullable) NSString *headerText;
@property (nonatomic, strong, nullable) UIImage *textIndicatorImage;
@property (nonatomic, strong, nullable) NSString *challengeInformationText;
@property (nonatomic, strong, nullable) NSString *challengeInformationLabel;

@property (nonatomic, strong, nullable) ETDSLabelCustomization *labelCustomization;

@end

NS_ASSUME_NONNULL_END
