/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ElementsListKit/BDListDiffable.h>

@class BDListAdapter;
@class BDListSectionController;

NS_ASSUME_NONNULL_BEGIN

/**
 Implement this protocol to provide data to an `BDListAdapter`.
 */
NS_SWIFT_NAME(ListAdapterDataSource)
@protocol BDListAdapterDataSource <NSObject>

/**
 Asks the data source for the objects to display in the list.

 @param listAdapter The list adapter requesting this information.

 @return An array of objects for the list.
 */
- (NSArray<id <BDListDiffable>> *)objectsForListAdapter:(BDListAdapter *)listAdapter;

/**
 Asks the data source for a section controller for the specified object in the list.

 @param listAdapter The list adapter requesting this information.
 @param object An object in the list.

 @return A new section controller instance that can be displayed in the list.

 @note New section controllers should be initialized here for objects when asked. You may pass any other data to
 the section controller at this time.

 Section controllers are initialized for all objects whenever the `BDListAdapter` is created, updated, or reloaded.
 Section controllers are reused when objects are moved or updated. Maintaining the `-[BDListDiffable diffIdentifier]`
 guarantees this.
 */
- (BDListSectionController *)listAdapter:(BDListAdapter *)listAdapter sectionControllerForObject:(id)object;

/**
 Asks the data source for a view to use as the collection view background when the list is empty.

 @param listAdapter The list adapter requesting this information.

 @return A view to use as the collection view background, or `nil` if you don't want a background view.

 @note This method is called every time the list adapter is updated. You are free to return new views every time,
 but for performance reasons you may want to retain the view and return it here. The infra is only responsible for
 adding the background view and maintaining its visibility.
 */
- (nullable UIView *)emptyViewForListAdapter:(BDListAdapter *)listAdapter;

@end

NS_ASSUME_NONNULL_END
