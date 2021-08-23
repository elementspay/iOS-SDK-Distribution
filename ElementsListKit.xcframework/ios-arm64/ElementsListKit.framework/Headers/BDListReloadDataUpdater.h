/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ElementsListKit/BDListMacros.h>
#import <ElementsListKit/BDListUpdatingDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An `BDListReloadDataUpdater` is a concrete type that conforms to `BDListUpdatingDelegate`.
 It is an out-of-box updater for `BDListAdapter` objects to use.

 @note This updater performs simple, synchronous updates using `-[UICollectionView reloadData]`.
 */
IGLK_SUBCLASSING_RESTRICTED
NS_SWIFT_NAME(ListReloadDataUpdater)
@interface BDListReloadDataUpdater : NSObject <BDListUpdatingDelegate>

@end

NS_ASSUME_NONNULL_END
