//
//  NSString+JWEHelpers.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 1/29/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (ElementsJWEHelpers)

- (nullable NSString *)_etds_base64URLEncodedString;
- (nullable NSString *)_etds_base64URLDecodedString;
- (nullable NSData *)_etds_base64URLDecodedData;

@end

NS_ASSUME_NONNULL_END

void _etds_import_nsstring_jwehelpers(void);
