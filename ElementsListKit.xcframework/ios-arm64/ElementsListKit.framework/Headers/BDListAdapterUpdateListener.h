/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class BDListAdapter;

NS_ASSUME_NONNULL_BEGIN

/**
 The type of update that was performed by an `BDListAdapter`.
 */
NS_SWIFT_NAME(ListAdapterUpdateType)
typedef NS_ENUM(NSInteger, BDListAdapterUpdateType) {
    /**
     `-[BDListAdapter performUpdatesAnimated:completion:]` was executed.
     */
    BDListAdapterUpdateTypePerformUpdates,
    /**
     `-[BDListAdapter reloadDataWithCompletion:]` was executed.
     */
    BDListAdapterUpdateTypeReloadData,
    /**
     `-[BDListCollectionContext performBatchAnimated:updates:completion:]` was executed by an `BDListSectionController`.
     */
    BDListAdapterUpdateTypeItemUpdates,
};

/**
 Conform to this protocol to receive events about `BDListAdapter` updates.
 */
NS_SWIFT_NAME(ListAdapterUpdateListener)
@protocol BDListAdapterUpdateListener <NSObject>

/**
 Notifies a listener that the listAdapter was updated.

 @param listAdapter The `BDListAdapter` that updated.
 @param update The type of update executed.
 @param animated A flag indicating if the update was animated. Always `NO` for `BDListAdapterUpdateTypeReloadData`.

 @note This event is sent before the completion block in `-[BDListAdapter performUpdatesAnimated:completion:]` and
 `-[BDListAdapter reloadDataWithCompletion:]` is executed. This event is also delivered when an
 `BDListSectionController` updates via `-[BDListCollectionContext performBatchAnimated:updates:completion:]`.
 */
- (void)listAdapter:(BDListAdapter *)listAdapter
    didFinishUpdate:(BDListAdapterUpdateType)update
           animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
