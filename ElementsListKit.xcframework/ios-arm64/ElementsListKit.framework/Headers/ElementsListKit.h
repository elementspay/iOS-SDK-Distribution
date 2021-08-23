//
//  ElementsListKit.h
//  ElementsListKit
//
//  Created by Tengqi Zhan on 2021-07-29.
//

#import <Foundation/Foundation.h>

//! Project version number for ElementsListKit.
FOUNDATION_EXPORT double ElementsListKitVersionNumber;

//! Project version string for ElementsListKit.
FOUNDATION_EXPORT const unsigned char ElementsListKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ElementsListKit/PublicHeader.h>

#import <ElementsListKit/BDListCompatibility.h>
#import <ElementsListKit/BDListAssert.h>
#import <ElementsListKit/BDListBatchUpdateData.h>
#import <ElementsListKit/BDListDiff.h>
#import <ElementsListKit/BDListDiffable.h>
#import <ElementsListKit/BDListExperiments.h>
#import <ElementsListKit/BDListIndexPathResult.h>
#import <ElementsListKit/BDListIndexSetResult.h>
#import <ElementsListKit/BDListMoveIndex.h>
#import <ElementsListKit/BDListMoveIndexPath.h>
#import <ElementsListKit/NSNumber+BDListDiffable.h>
#import <ElementsListKit/NSString+BDListDiffable.h>
#if TARGET_OS_EMBEDDED || TARGET_OS_SIMULATOR

// iOS and tvOS only:

#import <ElementsListKit/BDListAdapter.h>
#import <ElementsListKit/BDListAdapterDataSource.h>
#import <ElementsListKit/BDListAdapterDelegate.h>
#import <ElementsListKit/BDListAdapterUpdateListener.h>
#import <ElementsListKit/BDListAdapterUpdater.h>
#import <ElementsListKit/BDListAdapterUpdaterDelegate.h>
#import <ElementsListKit/BDListBatchContext.h>
#import <ElementsListKit/BDListBindable.h>
#import <ElementsListKit/BDListBindingSectionController.h>
#import <ElementsListKit/BDListBindingSectionControllerDataSource.h>
#import <ElementsListKit/BDListBindingSectionControllerSelectionDelegate.h>
#import <ElementsListKit/BDListCollectionContext.h>
#import <ElementsListKit/BDListCollectionView.h>
#import <ElementsListKit/BDListCollectionViewLayout.h>
#import <ElementsListKit/BDListDisplayDelegate.h>
#import <ElementsListKit/BDListGenericSectionController.h>
#import <ElementsListKit/BDListCollectionViewDelegateLayout.h>
#import <ElementsListKit/BDListReloadDataUpdater.h>
#import <ElementsListKit/BDListScrollDelegate.h>
#import <ElementsListKit/BDListSectionController.h>
#import <ElementsListKit/BDListSingleSectionController.h>
#import <ElementsListKit/BDListSupplementaryViewSource.h>
#import <ElementsListKit/BDListTransitionDelegate.h>
#import <ElementsListKit/BDListUpdatingDelegate.h>
#import <ElementsListKit/BDListWorkingRangeDelegate.h>
#import <ElementsListKit/BDListCollectionViewDelegateLayout.h>

#endif
