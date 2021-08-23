//
//  ETDSJSONWebSignature.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 4/2/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ETDSEllipticCurvePoint;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ETDSJSONWebSignatureAlgorithm) {
    ETDSJSONWebSignatureAlgorithmES256,
    ETDSJSONWebSignatureAlgorithmPS256,
    ETDSJSONWebSignatureAlgorithmUnknown,
};

@interface ETDSJSONWebSignature : NSObject

- (nullable instancetype)initWithString:(NSString *)jwsString;
- (nullable instancetype)initWithString:(NSString *)jwsString allowNilKey:(BOOL)allowNilKey;

@property (nonatomic, readonly) ETDSJSONWebSignatureAlgorithm algorithm;

@property (nonatomic, readonly) NSData *digest;
@property (nonatomic, readonly) NSData *signature;

@property (nonatomic, readonly) NSData *payload;

/// non-nil if algorithm == ETDSJSONWebSignatureAlgorithmES256
@property (nonatomic, nullable, readonly) ETDSEllipticCurvePoint *ellipticCurvePoint;

/// non-nil if algorithm == ETDSJSONWebSignatureAlgorithmPS256, can be non-nil for algorithm == ETDSJSONWebSignatureAlgorithmES256
@property (nonatomic, nullable, readonly) NSArray<NSString *> *certificateChain;

@end

NS_ASSUME_NONNULL_END
