//
//  ETDSWhitelistView.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/11/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ETDSChallengeResponseSelectionInfo.h"
#import "ETDSLabelCustomization.h"
#import "ETDSSelectionCustomization.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETDSWhitelistView : UIView

@property (nonatomic, strong, nullable) NSString *whitelistText;
@property (nonatomic, readonly, nullable) id<ETDSChallengeResponseSelectionInfo> selectedResponse;
@property (nonatomic, strong, nullable) ETDSLabelCustomization *labelCustomization;
@property (nonatomic, strong, nullable) ETDSSelectionCustomization *selectionCustomization;

@end

NS_ASSUME_NONNULL_END
