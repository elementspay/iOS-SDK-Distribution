//
//  ETDSProgressViewController.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 5/6/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ETDSDirectoryServer.h"

@class ETDSImageLoader, ETDSUICustomization;

NS_ASSUME_NONNULL_BEGIN

@interface ETDSProgressViewController : UIViewController

- (instancetype)initWithDirectoryServer:(ETDSDirectoryServer)directoryServer uiCustomization:(ETDSUICustomization * _Nullable)uiCustomization didCancel:(void (^)(void))didCancel;

@end

NS_ASSUME_NONNULL_END
