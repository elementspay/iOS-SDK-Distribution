//
//  Header.h
//  Stripe3DS2
//
//  Created by Cameron Sabol on 3/25/19.
//  Copyright © 2019 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, ETDSDirectoryServer) {
    ETDSDirectoryServerULTestRSA,
    ETDSDirectoryServerULTestEC,
    ETDSDirectoryServerSTPTestRSA,
    ETDSDirectoryServerSTPTestEC,
    ETDSDirectoryServerAmex,
    ETDSDirectoryServerCartesBancaires,
    ETDSDirectoryServerDiscover,
    ETDSDirectoryServerMastercard,
    ETDSDirectoryServerVisa,
    ETDSDirectoryServerCustom,
    ETDSDirectoryServerUnknown,
};

static NSString * const kULTestRSADirectoryServerID = @"F000000000";
static NSString * const kULTestECDirectoryServerID = @"F000000001";

static NSString * const kETDSTestRSADirectoryServerID = @"ul_test";
static NSString * const kETDSTestECDirectoryServerID = @"ec_test";

static NSString * const kETDSAmexDirectoryServerID = @"A000000025";
static NSString * const kETDSCartesBancairesServerID = @"A000000042";
static NSString * const kETDSDiscoverDirectoryServerID = @"A000000324";
static NSString * const kETDSDiscoverDirectoryServerID_2 = @"A000000152";
static NSString * const kETDSMastercardDirectoryServerID = @"A000000004";
static NSString * const kETDSVisaDirectoryServerID = @"A000000003";


/// Returns the typed directory server enum or ETDSDirectoryServerUnknown if the directoryServerID is not recognized
NS_INLINE ETDSDirectoryServer ETDSDirectoryServerForID(NSString *directoryServerID) {
    if ([directoryServerID isEqualToString:kULTestRSADirectoryServerID]) {
        return ETDSDirectoryServerULTestRSA;
    } else if ([directoryServerID isEqualToString:kULTestECDirectoryServerID]) {
        return ETDSDirectoryServerULTestEC;
    } else if ([directoryServerID isEqualToString:kETDSTestRSADirectoryServerID]) {
        return ETDSDirectoryServerSTPTestRSA;
    } else if ([directoryServerID isEqualToString:kETDSTestECDirectoryServerID]) {
        return ETDSDirectoryServerSTPTestEC;
    } else if ([directoryServerID isEqualToString:kETDSAmexDirectoryServerID]) {
        return ETDSDirectoryServerAmex;
    } else if ([directoryServerID isEqualToString:kETDSDiscoverDirectoryServerID] || [directoryServerID isEqualToString:kETDSDiscoverDirectoryServerID_2]) {
        return ETDSDirectoryServerDiscover;
    } else if ([directoryServerID isEqualToString:kETDSMastercardDirectoryServerID]) {
        return ETDSDirectoryServerMastercard;
    } else if ([directoryServerID isEqualToString:kETDSVisaDirectoryServerID]) {
        return ETDSDirectoryServerVisa;
    } else if ([directoryServerID isEqualToString:kETDSCartesBancairesServerID]) {
        return ETDSDirectoryServerCartesBancaires;
    }
    
    return ETDSDirectoryServerUnknown;
}

/// Returns the directory server ID or nil for ETDSDirectoryServerUnknown
NS_INLINE NSString * _Nullable ETDSDirectoryServerIdentifier(ETDSDirectoryServer directoryServer) {
    switch (directoryServer) {
        case ETDSDirectoryServerULTestRSA:
            return kULTestRSADirectoryServerID;
            
        case ETDSDirectoryServerULTestEC:
            return kULTestECDirectoryServerID;
            
        case ETDSDirectoryServerSTPTestRSA:
            return kETDSTestRSADirectoryServerID;
            
        case ETDSDirectoryServerSTPTestEC:
            return kETDSTestECDirectoryServerID;
            
        case ETDSDirectoryServerAmex:
            return kETDSAmexDirectoryServerID;

        case ETDSDirectoryServerDiscover:
            return kETDSDiscoverDirectoryServerID;

        case ETDSDirectoryServerMastercard:
            return kETDSMastercardDirectoryServerID;

        case ETDSDirectoryServerVisa:
            return kETDSVisaDirectoryServerID;
            
        case ETDSDirectoryServerCartesBancaires:
            return kETDSCartesBancairesServerID;

        case ETDSDirectoryServerCustom:
            return nil;
            
        case ETDSDirectoryServerUnknown:
            return nil;
    }
}

/// Returns the directory server image name if one exists
NS_INLINE NSString * _Nullable ETDSDirectoryServerImageName(ETDSDirectoryServer directoryServer) {
    switch (directoryServer) {
        case ETDSDirectoryServerAmex:
            return @"amex-logo";
        case ETDSDirectoryServerDiscover:
            return @"discover-logo";
        case ETDSDirectoryServerMastercard:
            return @"mastercard-logo";
        case ETDSDirectoryServerCartesBancaires:
            return @"cartes-bancaires-logo";
        // just default to an arbitrary logo for the test servers
        case ETDSDirectoryServerULTestEC:
        case ETDSDirectoryServerULTestRSA:
        case ETDSDirectoryServerSTPTestRSA:
        case ETDSDirectoryServerSTPTestEC:
        case ETDSDirectoryServerVisa:
            if (@available(iOS 13.0, *)) {
                if ([[UITraitCollection currentTraitCollection] userInterfaceStyle] == UIUserInterfaceStyleDark) {
                    return @"visa-white-logo";
                }
            }
            return @"visa-logo";
        case ETDSDirectoryServerCustom:
        case ETDSDirectoryServerUnknown:
            return nil;

    }
}

NS_ASSUME_NONNULL_END
