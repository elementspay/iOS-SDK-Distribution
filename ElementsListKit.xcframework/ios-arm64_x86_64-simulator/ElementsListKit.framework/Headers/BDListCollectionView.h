/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

@protocol BDListCollectionViewLayoutCompatible;

NS_ASSUME_NONNULL_BEGIN

/**
 This `UICollectionView` subclass allows for partial layout invalidation using `BDListCollectionViewLayout`,
 or custom layout classes that conform to BDListCollectionViewLayoutCompatible.

 @note When updating a collection view (ex: calling `-insertSections`), `-invalidateLayoutWithContext` gets called on
 the layout object. However, the invalidation context doesn't provide details on which index paths are being modified,
 which typically forces a full layout re-calculation. `BDListCollectionView` gives `BDListCollectionViewLayout` the
 missing information to re-calculate only the modified layout attributes.
 */
NS_SWIFT_NAME(ListCollectionView)
@interface BDListCollectionView : UICollectionView

/**
 Create a new view with an `BDListcollectionViewLayout` class or subclass.

 @param frame The frame to initialize with.
 @param collectionViewLayout The layout to use with the collection view. You can use BDListCollectionViewLayout
 here, or a custom layout class that conforms to BDListCollectionViewLayoutCompatible.

 @note You can initialize a new view with a base layout by simply calling `-[BDListCollectionView initWithFrame:]`.
 */
- (instancetype)initWithFrame:(CGRect)frame listCollectionViewLayout:(UICollectionViewLayout<BDListCollectionViewLayoutCompatible> *)collectionViewLayout NS_DESIGNATED_INITIALIZER;

/**
 :nodoc:
 */
- (instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout *)collectionViewLayout NS_UNAVAILABLE;

/**
 :nodoc:
 */
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
