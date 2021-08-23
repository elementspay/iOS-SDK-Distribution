//
//  NSDictionary+DecodingHelpers.h
//  Stripe3DS2
//
//  Created by Yuki Tokuhiro on 3/27/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ETDSJSONDecodable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Errors are populated according to the following rules:
 - If the field is required and...
 - the value is nil or empty    -> ETDSErrorCodeJSONFieldMissing
 - the value is the wrong type  -> ETDSErrorCodeJSONFieldInvalid
 - validator returns NO         -> ETDSErrorCodeJSONFieldInvalid

 - If the field is not required and...
 - the value is nil             -> valid, no error
 - the value is empty           -> ETDSErrorCodeJSONFieldInvalid
 - the value is the wrong type  -> ETDSErrorCodeJSONFieldInvalid
 - validator returns NO         -> ETDSErrorCodeJSONFieldInvalid
 */
@interface NSDictionary (DecodingHelpers)

/// Convenience method to extract an NSArray and populate it with instances of arrayElementType.
/// If isRequired is YES, returns nil without error if the key is not present
- (nullable NSArray *)_etds_arrayForKey:(NSString *)key arrayElementType:(Class<ETDSJSONDecodable>)arrayElementType required:(BOOL)isRequired error:(NSError **)error;

- (nullable NSURL *)_etds_urlForKey:(NSString *)key required:(BOOL)isRequired error:(NSError **)error;

- (nullable NSDictionary *)_etds_dictionaryForKey:(NSString *)key required:(BOOL)isRequired error:(NSError **)error;

- (nullable NSNumber *)_etds_boolForKey:(NSString *)key required:(BOOL)isRequired error:(NSError **)error;

/// Convenience method that calls `_stpStringForKey:validator:required:error:`, passing nil for the validator argument
- (nullable NSString *)_etds_stringForKey:(NSString *)key required:(BOOL)isRequired error:(NSError **)error;

- (nullable NSString *)_etds_stringForKey:(NSString *)key validator:(nullable BOOL (^)(NSString *))validatorBlock required:(BOOL)isRequired error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END

void _etds_import_nsdictionary_decodinghelpers(void);
