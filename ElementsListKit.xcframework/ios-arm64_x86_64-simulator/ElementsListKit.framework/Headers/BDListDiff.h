/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <ElementsListKit/BDListDiffable.h>
#import <ElementsListKit/BDListIndexPathResult.h>
#import <ElementsListKit/BDListIndexSetResult.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An option for how to do comparisons between similar objects.
 */
NS_SWIFT_NAME(ListDiffOption)
typedef NS_ENUM(NSInteger, BDListDiffOption) {
    /**
     Compare objects using pointer personality.
     */
    BDListDiffPointerPersonality,
    /**
     Compare objects using `-[BDListDiffable isEqualToDiffableObject:]`.
     */
    BDListDiffEquality
};

/**
 Creates a diff using indexes between two collections.

 @param oldArray The old objects to diff against.
 @param newArray The new objects.
 @param option An option on how to compare objects.

 @return A result object containing affected indexes.
 */
NS_SWIFT_NAME(ListDiff(oldArray:newArray:option:))
FOUNDATION_EXTERN  BDListIndexSetResult *BDListDiff(NSArray<id<BDListDiffable>> *_Nullable oldArray,
                                                   NSArray<id<BDListDiffable>> *_Nullable newArray,
                                                   BDListDiffOption option);

/**
 Creates a diff using index paths between two collections.

 @param fromSection The old section.
 @param toSection The new section.
 @param oldArray The old objects to diff against.
 @param newArray The new objects.
 @param option An option on how to compare objects.

 @return A result object containing affected indexes.
 */
NS_SWIFT_NAME(ListDiffPaths(fromSection:toSection:oldArray:newArray:option:))
FOUNDATION_EXTERN BDListIndexPathResult *BDListDiffPaths(NSInteger fromSection,
                                                         NSInteger toSection,
                                                         NSArray<id<BDListDiffable>> *_Nullable oldArray,
                                                         NSArray<id<BDListDiffable>> *_Nullable newArray,
                                                         BDListDiffOption option);

NS_ASSUME_NONNULL_END
