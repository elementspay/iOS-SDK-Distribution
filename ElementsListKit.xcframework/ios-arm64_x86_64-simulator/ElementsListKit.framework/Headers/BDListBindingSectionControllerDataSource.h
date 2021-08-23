/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

@class BDListBindingSectionController;

@protocol BDListBindable;
@protocol BDListDiffable;

NS_ASSUME_NONNULL_BEGIN

/**
 A protocol that returns data to power cells in an `BDListBindingSectionController`.
 */
NS_SWIFT_NAME(ListBindingSectionControllerDataSource)
@protocol BDListBindingSectionControllerDataSource <NSObject>

/**
 Create an array of view models given a top-level object.

 @param sectionController The section controller requesting view models.
 @param object The top-level object that powers the section controller.

 @return A new array of view models.
 */
- (NSArray<id<BDListDiffable>> *)sectionController:(BDListBindingSectionController *)sectionController
                               viewModelsForObject:(id)object;

/**
 Return a dequeued cell for a given view model.

 @param sectionController The section controller requesting a cell.
 @param viewModel The view model for the cell.
 @param index The index of the view model.

 @return A dequeued cell.

 @note The section controller will call `-bindViewModel:` with the provided view model after the cell is dequeued. You
 should handle cell configuration using this method. However, you can do additional configuration at this stage as well.
 */
- (UICollectionViewCell<BDListBindable> *)sectionController:(BDListBindingSectionController *)sectionController
                                           cellForViewModel:(id)viewModel
                                                    atIndex:(NSInteger)index;

/**
 Return a cell size for a given view model.

 @param sectionController The section controller requesting a size.
 @param viewModel The view model for the cell.
 @param index The index of the view model.

 @return A size for the view model.
 */
- (CGSize)sectionController:(BDListBindingSectionController *)sectionController
           sizeForViewModel:(id)viewModel
                    atIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END