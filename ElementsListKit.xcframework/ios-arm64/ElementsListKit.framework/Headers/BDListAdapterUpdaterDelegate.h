/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ElementsListKit/BDListBatchUpdateData.h>

@class BDListAdapterUpdater;
@class BDListIndexSetResult;
@protocol BDListDiffable;

NS_ASSUME_NONNULL_BEGIN

/**
 A protocol that receives events about `BDListAdapterUpdater` operations.
 */
NS_SWIFT_NAME(ListAdapterUpdaterDelegate)
@protocol BDListAdapterUpdaterDelegate <NSObject>

/**
 Notifies the delegate that the updater is about to beging diffing.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param fromObjects The items transitioned from in the batch updates, if any.
 @param toObjects The items transitioned to in the batch updates, if any.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
       willDiffFromObjects:(nullable NSArray <id<BDListDiffable>> *)fromObjects
                 toObjects:(nullable NSArray <id<BDListDiffable>> *)toObjects;

/**
 Notifies the delegate that the updater finished diffing.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param listIndexSetResults The diffing result of indices to be inserted/removed/updated/moved/etc.
 @param onBackgroundThread Was the diffing performed on a background thread
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
        didDiffWithResults:(nullable BDListIndexSetResult *)listIndexSetResults
        onBackgroundThread:(BOOL)onBackgroundThread;

/**
 Notifies the delegate that the updater will call `-[UICollectionView performBatchUpdates:completion:]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param collectionView The collection view that will perform the batch updates.
 @param fromObjects The items transitioned from in the batch updates, if any.
 @param toObjects The items transitioned to in the batch updates, if any.
 @param listIndexSetResults The diffing result of indices to be inserted/removed/updated/moved/etc.
 @param animated Is the cell transtion animated
 */
- (void)               listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
willPerformBatchUpdatesWithCollectionView:(UICollectionView *)collectionView
                              fromObjects:(nullable NSArray <id<BDListDiffable>> *)fromObjects
                                toObjects:(nullable NSArray <id<BDListDiffable>> *)toObjects
                       listIndexSetResult:(nullable BDListIndexSetResult *)listIndexSetResults
                                 animated:(BOOL)animated;

/**
 Notifies the delegate that the updater successfully finished `-[UICollectionView performBatchUpdates:completion:]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param updates The batch updates that were applied to the collection view.
 @param collectionView The collection view that performed the batch updates.

 @note This event is called in the completion block of the batch update.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
    didPerformBatchUpdates:(BDListBatchUpdateData *)updates
            collectionView:(UICollectionView *)collectionView;

/**
 Notifies the delegate that the updater will call `-[UICollectionView insertItemsAtIndexPaths:]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param indexPaths An array of index paths that will be inserted.
 @param collectionView The collection view that will perform the insert.

 @note This event is only sent when outside of `-[UICollectionView performBatchUpdates:completion:]`.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
      willInsertIndexPaths:(NSArray<NSIndexPath *> *)indexPaths
            collectionView:(UICollectionView *)collectionView;

/**
 Notifies the delegate that the updater will call `-[UICollectionView deleteItemsAtIndexPaths:]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param indexPaths An array of index paths that will be deleted.
 @param collectionView The collection view that will perform the delete.

 @note This event is only sent when outside of `-[UICollectionView performBatchUpdates:completion:]`.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
      willDeleteIndexPaths:(NSArray<NSIndexPath *> *)indexPaths
            collectionView:(UICollectionView *)collectionView;

/**
 Notifies the delegate that the updater will call `-[UICollectionView moveItemAtIndexPath:toIndexPath:]`

 @param listAdapterUpdater The adapter updater owning the transition.
 @param fromIndexPath The index path of the item that will be moved.
 @param toIndexPath The index path to move the item to.
 @param collectionView The collection view that will perform the move.

 @note This event is only sent when outside of `-[UICollectionView performBatchUpdates:completion:]`.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
     willMoveFromIndexPath:(NSIndexPath *)fromIndexPath
               toIndexPath:(NSIndexPath *)toIndexPath
            collectionView:(UICollectionView *)collectionView;

/**
 Notifies the delegate that the updater will call `-[UICollectionView reloadItemsAtIndexPaths:]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param indexPaths An array of index paths that will be reloaded.
 @param collectionView The collection view that will perform the reload.

 @note This event is only sent when outside of `-[UICollectionView performBatchUpdates:completion:]`.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
      willReloadIndexPaths:(NSArray<NSIndexPath *> *)indexPaths
            collectionView:(UICollectionView *)collectionView;

/**
 Notifies the delegate that the updater will call `-[UICollectionView reloadSections:]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param sections The sections that will be reloaded
 @param collectionView The collection view that will perform the reload.

 @note This event is only sent when outside of `-[UICollectionView performBatchUpdates:completion:]`.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
        willReloadSections:(NSIndexSet *)sections
            collectionView:(UICollectionView *)collectionView;

/**
 Notifies the delegate that the updater will call `-[UICollectionView reloadData]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param collectionView The collection view that will be reloaded.
 @param isFallbackReload The reload was a fallback because we could not performBatchUpdate
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater willReloadDataWithCollectionView:(UICollectionView *)collectionView isFallbackReload:(BOOL)isFallbackReload;

/**
 Notifies the delegate that the updater successfully called `-[UICollectionView reloadData]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param collectionView The collection view that reloaded.
 @param isFallbackReload The reload was a fallback because we could not performBatchUpdate
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater didReloadDataWithCollectionView:(UICollectionView *)collectionView isFallbackReload:(BOOL)isFallbackReload;

/**
 Notifies the delegate that the collection view threw an exception in `-[UICollectionView performBatchUpdates:completion:]`.

 @param listAdapterUpdater The adapter updater owning the transition.
 @param collectionView The collection view being updated.
 @param exception The exception thrown by the collection view.
 @param fromObjects The items transitioned from in the diff, if any.
 @param toObjects The items transitioned to in the diff, if any.
 @param diffResult The diff result that were computed from `fromObjects` and `toObjects`.
 @param updates The batch updates that were applied to the collection view.
 */
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater
            collectionView:(UICollectionView *)collectionView
    willCrashWithException:(NSException *)exception
               fromObjects:(nullable NSArray *)fromObjects
                 toObjects:(nullable NSArray *)toObjects
                diffResult:(BDListIndexSetResult *)diffResult
                   updates:(BDListBatchUpdateData *)updates;

/**
Notifies the delegate that the updater finished without performing any batch updates or reloads

@param listAdapterUpdater The adapter updater owning the transition.
@param collectionView The collection view that reloaded.
*/
- (void)listAdapterUpdater:(BDListAdapterUpdater *)listAdapterUpdater didFinishWithoutUpdatesWithCollectionView:(nullable UICollectionView *)collectionView;

@end

NS_ASSUME_NONNULL_END
