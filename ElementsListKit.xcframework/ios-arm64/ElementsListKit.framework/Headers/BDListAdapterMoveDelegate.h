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
 Conform to `BDListAdapterMoveDelegate` to receive interactive reordering requests.
 */
NS_SWIFT_NAME(ListAdapterMoveDelegate)
@protocol BDListAdapterMoveDelegate <NSObject>

/**
 Asks the delegate to move a section object as the result of interactive reordering.

 @param listAdapter The list adapter sending this information.
 @param object the object that was moved
 @param previousObjects The array of objects prior to the move.
 @param objects The array of objects after the move.
 */
- (void)listAdapter:(BDListAdapter *)listAdapter
         moveObject:(id)object
               from:(NSArray *)previousObjects
                 to:(NSArray *)objects;

@end

NS_ASSUME_NONNULL_END
