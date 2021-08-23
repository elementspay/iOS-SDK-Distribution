//
//  ETDSLocalizedString.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 7/9/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import "ETDSBundleLocator.h"

#ifndef ETDSLocalizedString_h
#define ETDSLocalizedString_h

#define ETDSLocalizedString(key, comment) \
[[ETDSBundleLocator ETDSResourcesBundle] localizedStringForKey:(key) value:@"" table:nil]


#endif /* ETDSLocalizedString_h */
