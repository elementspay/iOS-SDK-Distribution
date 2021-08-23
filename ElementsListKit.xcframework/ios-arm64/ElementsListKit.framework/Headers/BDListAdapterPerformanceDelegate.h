/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

@class BDListAdapter;
@class BDListSectionController;

NS_ASSUME_NONNULL_BEGIN

/**
 `BDListAdapterPerformanceDelegate` can be used to measure cell dequeue, display, size, and scroll callbacks.
 */
NS_SWIFT_NAME(ListAdapterPerformanceDelegate)
@protocol BDListAdapterPerformanceDelegate <NSObject>

/**
 Will call `-[BDListAdapter collectionView:cellForItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 */
- (void)listAdapterWillCallDequeueCell:(BDListAdapter *)listAdapter;

/**
 Did finish calling `-[BDListAdapter collectionView:cellForItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 @param cell A cell that was dequeued.
 @param sectionController The section controller providing the cell.
 @param index Item index of the cell.
 */
- (void)listAdapter:(BDListAdapter *)listAdapter didCallDequeueCell:(UICollectionViewCell *)cell onSectionController:(BDListSectionController *)sectionController atIndex:(NSInteger)index;

/**
 Will call `-[BDListAdapter collectionView:willDisplayCell:forItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 */
- (void)listAdapterWillCallDisplayCell:(BDListAdapter *)listAdapter;

/**
 Did finish calling `-[BDListAdapter collectionView:willDisplayCell:forItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 @param cell A cell that will be displayed.
 @param sectionController The section controller for that cell.
 @param index Item index of the cell.

 @note Keep in mind this also includes calling the `BDListAdapter`'s collectionViewDelegate and workingRangeHandler.
 */
- (void)listAdapter:(BDListAdapter *)listAdapter didCallDisplayCell:(UICollectionViewCell *)cell onSectionController:(BDListSectionController *)sectionController atIndex:(NSInteger)index;

/**
 Will call `-[BDListAdapter collectionView:didEndDisplayingCell:forItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 */
- (void)listAdapterWillCallEndDisplayCell:(BDListAdapter *)listAdapter;

/**
 Did finish calling `-[BDListAdapter collectionView:didEndDisplayingCell:forItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 @param cell A cell that was displayed.
 @param sectionController The section controller for that cell.
 @param index Item index of the cell.

 @note Keep in mind this also includes calling the `BDListAdapter`'s collectionViewDelegate and workingRangeHandler.
 */
- (void)listAdapter:(BDListAdapter *)listAdapter didCallEndDisplayCell:(UICollectionViewCell *)cell onSectionController:(BDListSectionController *)sectionController atIndex:(NSInteger)index;

/**
 Will call `-[BDListAdapter collectionView:collectionViewLayout:sizeForItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 */
- (void)listAdapterWillCallSize:(BDListAdapter *)listAdapter;

/**
 Did finish calling `-[BDListAdapter collectionView:collectionViewLayout:sizeForItemAtIndexPath:]`.

 @param listAdapter The list adapter sending this information.
 @param sectionController The section controller providing the size.
 @param index Item index used to calculate the size.
 */
- (void)listAdapter:(BDListAdapter *)listAdapter didCallSizeOnSectionController:(BDListSectionController *)sectionController atIndex:(NSInteger)index;

/**
 Will call `-[BDListAdapter scrollViewDidScroll:]`.

 @param listAdapter The list adapter sending this information.
 */
- (void)listAdapterWillCallScroll:(BDListAdapter *)listAdapter;

/**
 Did finish calling `-[BDListAdapter scrollViewDidScroll:]`.

 @param listAdapter The list adapter sending this information.
 @param scrollView The scroll view backing the UICollectionView.

 @note Keep in mind this also includes calling the `BDListAdapter`'s scrollViewDelegate and all visible `BDListSectioControllers`.
 */
- (void)listAdapter:(BDListAdapter *)listAdapter didCallScroll:(UIScrollView *)scrollView;

@end

NS_ASSUME_NONNULL_END
