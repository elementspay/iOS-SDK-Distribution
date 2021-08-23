/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ElementsListKit/BDListMacros.h>
#import <ElementsListKit/BDListSectionController.h>

NS_ASSUME_NONNULL_BEGIN


/**
 A block used to configure cells.

 @param item The model with which to configure the cell.
 @param cell The cell to configure.
 */
NS_SWIFT_NAME(ListSingleSectionCellConfigureBlock)
typedef void (^BDListSingleSectionCellConfigureBlock)(id item, __kindof UICollectionViewCell *cell);

/**
 A block that returns the size for the cell given the collection context.

 @param item The model for the section.
 @param collectionContext The collection context for the section.

 @return The size for the cell.
 */
NS_SWIFT_NAME(ListSingleSectionCellSizeBlock)
typedef CGSize (^BDListSingleSectionCellSizeBlock)(id item, id<BDListCollectionContext> _Nullable collectionContext);

@class BDListSingleSectionController;

/**
 A delegate that can receive selection events on an `BDListSingleSectionController`.
 */
NS_SWIFT_NAME(ListSingleSectionControllerDelegate)
@protocol BDListSingleSectionControllerDelegate <NSObject>

/**
 Tells the delegate that the section controller was selected.

 @param sectionController The section controller that was selected.
 @param object The model for the given section.
 */
- (void)didSelectSectionController:(BDListSingleSectionController *)sectionController
                        withObject:(id)object;

@optional

/**
 Tells the delegate that the section controller was deselected.

 @param sectionController The section controller that was deselected.
 @param object The model for the given section.

 @note Method is `@optional` until the 4.0.0 release where it will become required.
 */
- (void)didDeselectSectionController:(BDListSingleSectionController *)sectionController
                          withObject:(id)object;

@end

/**
 This section controller is meant to make building simple, single-cell lists easier. By providing the type of cell, a block
 to configure the cell, and a block to return the size of a cell, you can use an `BDListAdapter`-powered list with a
 simpler architecture.
 */
IGLK_SUBCLASSING_RESTRICTED
NS_SWIFT_NAME(ListSingleSectionController)
@interface BDListSingleSectionController : BDListSectionController

/**
 Creates a new section controller for a given cell type that will always have only one cell when present in a list.

 @param cellClass The `UICollectionViewCell` subclass for the single cell.
 @param configureBlock A block that configures the cell with the item given to the section controller.
 @param sizeBlock A block that returns the size for the cell given the collection context.

 @return A new section controller.

 @warning Be VERY CAREFUL not to create retain cycles by holding strong references to: the object that owns the adapter
 (usually `self`) or the `BDListAdapter`. Pass in locally scoped objects or use `weak` references!
 */
- (instancetype)initWithCellClass:(Class)cellClass
                   configureBlock:(BDListSingleSectionCellConfigureBlock)configureBlock
                        sizeBlock:(BDListSingleSectionCellSizeBlock)sizeBlock;

/**
 Creates a new section controller for a given nib name and bundle that will always have only one cell when present in a list.

 @param nibName The name of the nib file for the single cell.
 @param bundle The bundle in which to search for the nib file. If `nil`, this method looks for the file in the main bundle.
 @param configureBlock A block that configures the cell with the item given to the section controller.
 @param sizeBlock A block that returns the size for the cell given the collection context.

 @return A new section controller.

 @warning Be VERY CAREFUL not to create retain cycles by holding strong references to: the object that owns the adapter
 (usually `self`) or the `BDListAdapter`. Pass in locally scoped objects or use `weak` references!
 */
- (instancetype)initWithNibName:(NSString *)nibName
                         bundle:(nullable NSBundle *)bundle
                 configureBlock:(BDListSingleSectionCellConfigureBlock)configureBlock
                      sizeBlock:(BDListSingleSectionCellSizeBlock)sizeBlock;

/**
 Creates a new section controller for a given storyboard cell identifier that will always have only one cell when present in a list.

 @param identifier The identifier of the cell prototype in storyboard.
 @param configureBlock A block that configures the cell with the item given to the section controller.
 @param sizeBlock A block that returns the size for the cell given the collection context.

 @return A new section controller.

 @warning Be VERY CAREFUL not to create retain cycles by holding strong references to: the object that owns the adapter
 (usually `self`) or the `BDListAdapter`. Pass in locally scoped objects or use `weak` references!
 */
- (instancetype)initWithStoryboardCellIdentifier:(NSString *)identifier
                                  configureBlock:(BDListSingleSectionCellConfigureBlock)configureBlock
                                       sizeBlock:(BDListSingleSectionCellSizeBlock)sizeBlock;

/**
 An optional delegate that handles selection and deselection.
 */
@property (nonatomic, weak, nullable) id<BDListSingleSectionControllerDelegate> selectionDelegate;

/**
 :nodoc:
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 */
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
