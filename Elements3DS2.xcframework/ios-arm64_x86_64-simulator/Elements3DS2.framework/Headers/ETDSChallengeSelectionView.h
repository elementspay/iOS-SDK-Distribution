//
//  ETDSChallengeSelectionView.h
//  Stripe3DS2
//
//  Created by Andrew Harrison on 3/6/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ETDSChallengeResponseSelectionInfo.h"
#import "ETDSLabelCustomization.h"
#import "ETDSSelectionCustomization.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ETDSChallengeSelectionStyle) {
    
    /// A display style for selecting a single option.
    ETDSChallengeSelectionStyleSingle = 0,
    
    /// A display style for selection multiple options.
    ETDSChallengeSelectionStyleMulti = 1,
};

@interface ETDSChallengeSelectionView : UIView

@property (nonatomic, strong, readonly) NSArray<id<ETDSChallengeResponseSelectionInfo>> *currentlySelectedChallengeInfo;
@property (nonatomic, strong) ETDSLabelCustomization *labelCustomization;
@property (nonatomic, strong) ETDSSelectionCustomization *selectionCustomization;

- (instancetype)initWithChallengeSelectInfo:(NSArray<id<ETDSChallengeResponseSelectionInfo>> *)challengeSelectInfo selectionStyle:(ETDSChallengeSelectionStyle)selectionStyle;

@end

NS_ASSUME_NONNULL_END
