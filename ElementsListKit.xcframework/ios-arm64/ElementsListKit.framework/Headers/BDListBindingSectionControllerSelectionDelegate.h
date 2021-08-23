/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class BDListBindingSectionController;

NS_ASSUME_NONNULL_BEGIN

/**
 A protocol that handles cell selection events in an `BDListBindingSectionController`.
 */
NS_SWIFT_NAME(ListBindingSectionControllerSelectionDelegate)
@protocol BDListBindingSectionControllerSelectionDelegate <NSObject>

/**
 Tells the delegate that a cell at a given index was selected.

 @param sectionController The section controller the selection occurred in.
 @param index The index of the selected cell.
 @param viewModel The view model that was bound to the cell.
 */
- (void)sectionController:(BDListBindingSectionController *)sectionController
     didSelectItemAtIndex:(NSInteger)index
                viewModel:(id)viewModel;

/**
 Tells the delegate that a cell at a given index was deselected.

 @param sectionController The section controller the deselection occurred in.
 @param index The index of the deselected cell.
 @param viewModel The view model that was bound to the cell.
 */
- (void)sectionController:(BDListBindingSectionController *)sectionController
   didDeselectItemAtIndex:(NSInteger)index
                viewModel:(id)viewModel;

/**
 Tells the delegate that a cell at a given index was highlighted.

 @param sectionController The section controller the highlight occurred in.
 @param index The index of the highlighted cell.
 @param viewModel The view model that was bound to the cell.
 */
- (void)sectionController:(BDListBindingSectionController *)sectionController
  didHighlightItemAtIndex:(NSInteger)index
                viewModel:(id)viewModel;

/**
 Tells the delegate that a cell at a given index was unhighlighted.

 @param sectionController The section controller the unhighlight occurred in.
 @param index The index of the unhighlighted cell.
 @param viewModel The view model that was bound to the cell.
 */
- (void)sectionController:(BDListBindingSectionController *)sectionController
didUnhighlightItemAtIndex:(NSInteger)index
                viewModel:(id)viewModel;

@end

NS_ASSUME_NONNULL_END
