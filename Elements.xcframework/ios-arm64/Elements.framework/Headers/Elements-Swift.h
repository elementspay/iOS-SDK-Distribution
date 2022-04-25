// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef ELEMENTS_SWIFT_H
#define ELEMENTS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import PassKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Elements",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class UIViewController;
@class NSString;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC8Elements20NavigationController")
@interface NavigationController : UINavigationController
- (void)pushViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8Elements23AppNavigationController")
@interface AppNavigationController : NavigationController
- (void)pushViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


/// A element that handles Apple Pay payments.
SWIFT_CLASS("_TtC8Elements15ApplePayElement")
@interface ApplePayElement : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class PKPaymentAuthorizationViewController;
@class PKPayment;

@interface ApplePayElement (SWIFT_EXTENSION(Elements)) <PKPaymentAuthorizationViewControllerDelegate>
/// :nodoc:
- (void)paymentAuthorizationViewControllerDidFinish:(PKPaymentAuthorizationViewController * _Nonnull)controller;
/// :nodoc:
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController * _Nonnull)controller didAuthorizePayment:(PKPayment * _Nonnull)payment completion:(void (^ _Nonnull)(PKPaymentAuthorizationStatus))completion;
@end


@class NSNotification;

SWIFT_CLASS("_TtC8Elements24BlocksBaseViewController")
@interface BlocksBaseViewController : UIViewController
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)adjustViewWhenKeyboardShowWithNotification:(NSNotification * _Nonnull)notification;
- (void)adjustViewWhenKeyboardDismissWithNotification:(NSNotification * _Nonnull)notification;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class UITableView;
@class UIView;
@class NSIndexPath;
@class UITableViewCell;

SWIFT_CLASS("_TtC8Elements23BaseTableViewController")
@interface BaseTableViewController : BlocksBaseViewController <UITableViewDataSource, UITableViewDelegate>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
/// :nodoc:
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)_ SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (NSInteger)tableView:(UITableView * _Nonnull)_ numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)_ viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (CGFloat)tableView:(UITableView * _Nonnull)_ heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








/// :nodoc:
SWIFT_CLASS("_TtC8Elements13ContainerView")
@interface ContainerView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8Elements13CopyLabelView")
@interface CopyLabelView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ SWIFT_UNAVAILABLE;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



/// A element that handles the entire flow of payment selection and payment details entry.
SWIFT_CLASS("_TtC8Elements13DropInElement")
@interface DropInElement : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end












/// :nodoc:
/// <code>ELEViewController</code> serves as a height-aware <code>UIViewController</code>
SWIFT_CLASS("_TtC8Elements17ELEViewController")
@interface ELEViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)loadView;
@property (nonatomic) CGSize preferredContentSize;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


/// :nodoc:
SWIFT_CLASS("_TtC8Elements17ElementsAPIClient")
@interface ElementsAPIClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_PROTOCOL("_TtP8Elements29ElementsAuthenticationContext_")
@protocol ElementsAuthenticationContext
/// Host controller for 3ds context
///
/// returns:
/// 3ds host view controller
- (UIViewController * _Nonnull)elementsAuthHostController SWIFT_WARN_UNUSED_RESULT;
@optional
/// Will be called when auth context will appear
- (void)authContextWillAppear;
/// Will be called when auth context will disappear
- (void)authContextWillDisappear;
@end


/// Displays a form for the user to enter details.
/// :nodoc:
SWIFT_CLASS("_TtC8Elements18FormViewController")
@interface FormViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
/// :nodoc:
@property (nonatomic) CGSize preferredContentSize;
/// :nodoc:
- (void)viewDidLoad;
/// :nodoc:
- (void)viewDidAppear:(BOOL)animated;
- (BOOL)resignFirstResponder;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@class SFSafariViewController;

@interface FormViewController (SWIFT_EXTENSION(Elements))
- (UIViewController * _Nonnull)authenticationPresentingViewController SWIFT_WARN_UNUSED_RESULT;
- (void)configureSafariViewController:(SFSafariViewController * _Nonnull)viewController;
- (void)authenticationContextWillDismissViewController:(UIViewController * _Nonnull)viewController;
@end


SWIFT_CLASS("_TtC8Elements30FullScreenWalletViewController")
@interface FullScreenWalletViewController : BlocksBaseViewController
- (void)viewDidLoad;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@class UIGestureRecognizer;

SWIFT_CLASS("_TtC8Elements24InteractivePopRecognizer")
@interface InteractivePopRecognizer : NSObject <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A cell in a ListViewController.
/// :nodoc:
SWIFT_CLASS("_TtC8Elements12ListItemCell")
@interface ListItemCell : UITableViewCell
/// :nodoc:
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
/// :nodoc:
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
@end

@class UITraitCollection;

/// Displays a list item.
/// :nodoc:
SWIFT_CLASS("_TtC8Elements12ListItemView")
@interface ListItemView : UIView
/// Initializes the list item view.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// :nodoc:
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
/// :nodoc:
- (void)traitCollectionDidChange:(UITraitCollection * _Nullable)previousTraitCollection;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


/// Displays a list from which items can be selected.
/// :nodoc:
SWIFT_CLASS("_TtC8Elements18ListViewController")
@interface ListViewController : UITableViewController
/// :nodoc:
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
/// :nodoc:
@property (nonatomic) CGSize preferredContentSize;
/// :nodoc:
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
/// :nodoc:
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)_ SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (NSInteger)tableView:(UITableView * _Nonnull)_ numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)_ viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (CGFloat)tableView:(UITableView * _Nonnull)_ heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class UIColor;
@class UITextView;

SWIFT_CLASS("_TtC8Elements14MoneyTextField")
@interface MoneyTextField : UIControl <UITextViewDelegate>
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (BOOL)becomeFirstResponder SWIFT_WARN_UNUSED_RESULT;
- (BOOL)resignFirstResponder SWIFT_WARN_UNUSED_RESULT;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text SWIFT_WARN_UNUSED_RESULT;
@end













@class UIImage;

/// An image view that displays images from a remote location.
/// :nodoc:
SWIFT_CLASS("_TtC8Elements16NetworkImageView")
@interface NetworkImageView : UIImageView
/// :nodoc:
- (void)didMoveToWindow;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

enum STPThreeDSCustomizationButtonType : NSInteger;
enum STPThreeDSButtonTitleStyle : NSInteger;
@class UIFont;

/// A customization object to use to configure the UI of a button.
SWIFT_CLASS("_TtC8Elements29STPThreeDSButtonCustomization")
@interface STPThreeDSButtonCustomization : NSObject
/// The default settings for the provided button type.
+ (STPThreeDSButtonCustomization * _Nonnull)defaultSettingsForButtonType:(enum STPThreeDSCustomizationButtonType)type SWIFT_WARN_UNUSED_RESULT;
/// Initializes an instance of ETDSButtonCustomization with the given backgroundColor and colorRadius.
- (nonnull instancetype)initWithBackgroundColor:(UIColor * _Nonnull)backgroundColor cornerRadius:(CGFloat)cornerRadius OBJC_DESIGNATED_INITIALIZER;
/// The background color of the button.
/// The default for .resend and .cancel is clear.
/// The default for .submit, .continue, and .next is blue.
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
/// The corner radius of the button. Defaults to 8.
@property (nonatomic) CGFloat cornerRadius;
/// The capitalization style of the button title.
@property (nonatomic) enum STPThreeDSButtonTitleStyle titleStyle;
/// The font of the title.
@property (nonatomic, strong) UIFont * _Nullable font;
/// The text color of the title.
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// An enumeration of the case transformations that can be applied to the button’s title
typedef SWIFT_ENUM(NSInteger, STPThreeDSButtonTitleStyle, open) {
/// Default style, doesn’t modify the title
  STPThreeDSButtonTitleStyleDefault = 0,
/// Applies localizedUppercaseString to the title
  STPThreeDSButtonTitleStyleUppercase = 1,
/// Applies localizedLowercaseString to the title
  STPThreeDSButtonTitleStyleLowercase = 2,
/// Applies localizedCapitalizedString to the title
  STPThreeDSButtonTitleStyleSentenceCapitalized = 3,
};

/// An enum that defines the different types of buttons that are able to be customized.
typedef SWIFT_ENUM(NSInteger, STPThreeDSCustomizationButtonType, open) {
/// The submit button type.
  STPThreeDSCustomizationButtonTypeSubmit = 0,
/// The continue button type.
  STPThreeDSCustomizationButtonTypeContinue = 1,
/// The next button type.
  STPThreeDSCustomizationButtonTypeNext = 2,
/// The cancel button type.
  STPThreeDSCustomizationButtonTypeCancel = 3,
/// The resend button type.
  STPThreeDSCustomizationButtonTypeResend = 4,
};

@class STPThreeDSUICustomization;

/// <code>STPThreeDSCustomizationSettings</code> provides customization options for 3DS2 authentication flows in your app.
SWIFT_CLASS("_TtC8Elements31STPThreeDSCustomizationSettings")
@interface STPThreeDSCustomizationSettings : NSObject
/// Returns an <code>STPThreeDSCustomizationSettings</code> preconfigured with the default
/// Stripe UI settings and a 10 minute <code>authenticationTimeout</code>.
/// @deprecated Use STPThreeDSCustomizationSettings() instead. The default settings are the same.
+ (STPThreeDSCustomizationSettings * _Nonnull)defaultSettings SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("Use STPThreeDSCustomizationSettings() instead of STPThreeDSCustomizationSettings.defaultSettings().");
/// <code>uiCustomization</code> can be used to provide custom UI settings for the authentication
/// challenge screens presented during a Three Domain Secure authentication. For more information see
/// our guide on supporting 3DS2 in your iOS application.
/// Note: It’s important to configure this object appropriately before calling any <code>STPPaymentHandler</code> APIs.
/// The API makes a copy of the customization settings you provide; it ignores any subsequent changes you
/// make to your <code>STPThreeDSUICustomization</code> instance.
/// Defaults to <code>STPThreeDSUICustomization.defaultSettings()</code>.
@property (nonatomic, strong) STPThreeDSUICustomization * _Nonnull uiCustomization;
/// <code>authenticationTimeout</code> is the total time allowed for a user to complete a 3DS2 authentication
/// interaction, in minutes.  This value <em>must</em> be at least 5 minutes.
/// Defaults to 10 minutes.
@property (nonatomic) NSInteger authenticationTimeout;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The Challenge view displays a footer with additional details that
/// expand when tapped. This object configures the appearance of that view.
SWIFT_CLASS("_TtC8Elements29STPThreeDSFooterCustomization")
@interface STPThreeDSFooterCustomization : NSObject
/// The default settings.
+ (STPThreeDSFooterCustomization * _Nonnull)defaultSettings SWIFT_WARN_UNUSED_RESULT;
/// The background color of the footer.
/// Defaults to gray.
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
/// The color of the chevron. Defaults to a dark gray.
@property (nonatomic, strong) UIColor * _Nonnull chevronColor;
/// The color of the heading text. Defaults to black.
@property (nonatomic, strong) UIColor * _Nonnull headingTextColor;
/// The font to use for the heading text.
@property (nonatomic, strong) UIFont * _Nonnull headingFont;
/// The font of the text.
@property (nonatomic, strong) UIFont * _Nullable font;
/// The color of the text.
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A customization object to use to configure the UI of a text label.
SWIFT_CLASS("_TtC8Elements28STPThreeDSLabelCustomization")
@interface STPThreeDSLabelCustomization : NSObject
/// The default settings.
+ (STPThreeDSLabelCustomization * _Nonnull)defaultSettings SWIFT_WARN_UNUSED_RESULT;
/// The font to use for heading text.
@property (nonatomic, strong) UIFont * _Nonnull headingFont;
/// The color of heading text. Defaults to black.
@property (nonatomic, strong) UIColor * _Nonnull headingTextColor;
/// The font to use for non-heading text.
@property (nonatomic, strong) UIFont * _Nullable font;
/// The color to use for non-heading text. Defaults to black.
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A customization object to use to configure a UINavigationBar.
SWIFT_CLASS("_TtC8Elements36STPThreeDSNavigationBarCustomization")
@interface STPThreeDSNavigationBarCustomization : NSObject
/// The default settings.
+ (STPThreeDSNavigationBarCustomization * _Nonnull)defaultSettings SWIFT_WARN_UNUSED_RESULT;
/// The tint color of the navigation bar background.
/// Defaults to nil.
@property (nonatomic, strong) UIColor * _Nullable barTintColor;
/// The navigation bar style.
/// Defaults to UIBarStyleDefault.
/// @note This property controls the <code>UIStatusBarStyle</code>. Set this to <code>UIBarStyleBlack</code>
/// to change the <code>statusBarStyle</code> to <code>UIStatusBarStyleLightContent</code> - even if you also set
/// <code>barTintColor</code> to change the actual color of the navigation bar.
@property (nonatomic) UIBarStyle barStyle;
/// A Boolean value indicating whether the navigation bar is translucent or not.
/// Defaults to YES.
@property (nonatomic) BOOL translucent;
/// The text to display in the title of the navigation bar.
/// Defaults to “Secure checkout”.
@property (nonatomic, copy) NSString * _Nonnull headerText;
/// The text to display for the button in the navigation bar.
/// Defaults to “Cancel”.
@property (nonatomic, copy) NSString * _Nonnull buttonText;
/// The font to use for the title. Defaults to nil.
@property (nonatomic, strong) UIFont * _Nullable font;
/// The color to use for the title. Defaults to nil.
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A customization object that configures the appearance of
/// radio buttons and checkboxes.
SWIFT_CLASS("_TtC8Elements32STPThreeDSSelectionCustomization")
@interface STPThreeDSSelectionCustomization : NSObject
/// The default settings.
+ (STPThreeDSSelectionCustomization * _Nonnull)defaultSettings SWIFT_WARN_UNUSED_RESULT;
/// The primary color of the selected state.
/// Defaults to blue.
@property (nonatomic, strong) UIColor * _Nonnull primarySelectedColor;
/// The secondary color of the selected state (e.g. the checkmark color).
/// Defaults to white.
@property (nonatomic, strong) UIColor * _Nonnull secondarySelectedColor;
/// The background color displayed in the unselected state.
/// Defaults to light blue.
@property (nonatomic, strong) UIColor * _Nonnull unselectedBackgroundColor;
/// The color of the border drawn around the view in the unselected state.
/// Defaults to blue.
@property (nonatomic, strong) UIColor * _Nonnull unselectedBorderColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A customization object to use to configure the UI of a text field.
SWIFT_CLASS("_TtC8Elements32STPThreeDSTextFieldCustomization")
@interface STPThreeDSTextFieldCustomization : NSObject
/// The default settings.
+ (STPThreeDSTextFieldCustomization * _Nonnull)defaultSettings SWIFT_WARN_UNUSED_RESULT;
/// The border width of the text field. Defaults to 2.
@property (nonatomic) CGFloat borderWidth;
/// The color of the border of the text field. Defaults to clear.
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
/// The corner radius of the edges of the text field. Defaults to 8.
@property (nonatomic) CGFloat cornerRadius;
/// The appearance of the keyboard. Defaults to UIKeyboardAppearanceDefault.
@property (nonatomic) UIKeyboardAppearance keyboardAppearance;
/// The color of the placeholder text. Defaults to light gray.
@property (nonatomic, strong) UIColor * _Nonnull placeholderTextColor;
/// The font to use for text.
@property (nonatomic, strong) UIFont * _Nullable font;
/// The color to use for the text. Defaults to black.
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The <code>STPThreeDSUICustomization</code> provides configuration for UI elements displayed during 3D Secure authentication.
/// Note: It’s important to configure this object appropriately before calling any <code>STPPaymentHandler</code> APIs.
/// The API makes a copy of the customization settings you provide; it ignores any subsequent changes you
/// make to your <code>STPThreeDSUICustomization</code> instance.
/// seealso:
/// https://stripe.com/docs/mobile/ios/authentication
SWIFT_CLASS("_TtC8Elements25STPThreeDSUICustomization")
@interface STPThreeDSUICustomization : NSObject
/// The default settings.  See individual properties for their default values.
+ (STPThreeDSUICustomization * _Nonnull)defaultSettings SWIFT_WARN_UNUSED_RESULT;
/// Provides custom settings for the UINavigationBar of all UIViewControllers displayed during 3D Secure authentication.
/// The default is <code>STPThreeDSNavigationBarCustomization.defaultSettings()</code>.
@property (nonatomic, strong) STPThreeDSNavigationBarCustomization * _Nonnull navigationBarCustomization;
/// Provides custom settings for labels.
/// The default is <code>STPThreeDSLabelCustomization.defaultSettings()</code>.
@property (nonatomic, strong) STPThreeDSLabelCustomization * _Nonnull labelCustomization;
/// Provides custom settings for text fields.
/// The default is <code>STPThreeDSTextFieldCustomization.defaultSettings()</code>.
@property (nonatomic, strong) STPThreeDSTextFieldCustomization * _Nonnull textFieldCustomization;
/// The primary background color of all UIViewControllers displayed during 3D Secure authentication.
/// Defaults to white.
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
/// Provides custom settings for the footer the challenge view can display containing additional details.
/// The default is <code>STPThreeDSFooterCustomization.defaultSettings()</code>.
@property (nonatomic, strong) STPThreeDSFooterCustomization * _Nonnull footerCustomization;
/// Sets a given button customization for the specified type.
/// \param buttonCustomization The buttom customization to use.
///
/// \param buttonType The type of button to use the customization for.
///
- (void)setButtonCustomization:(STPThreeDSButtonCustomization * _Nonnull)buttonCustomization forType:(enum STPThreeDSCustomizationButtonType)buttonType;
/// Retrieves a button customization object for the given button type.
/// seealso:
/// STPThreeDSButtonCustomization
/// \param buttonType The button type to retrieve a customization object for.
///
///
/// returns:
/// A button customization object, or the default if none was set.
- (STPThreeDSButtonCustomization * _Nonnull)buttonCustomizationForButtonType:(enum STPThreeDSCustomizationButtonType)buttonType SWIFT_WARN_UNUSED_RESULT;
/// Provides custom settings for radio buttons and checkboxes.
/// The default is <code>STPThreeDSSelectionCustomization.defaultSettings()</code>.
@property (nonatomic, strong) STPThreeDSSelectionCustomization * _Nonnull selectionCustomization;
/// The style of <code>UIActivityIndicatorView</code>s displayed.
/// This should contrast with <code>backgroundColor</code>.  Defaults to gray.
@property (nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle;
/// The style of the <code>UIBlurEffect</code> displayed underneath the <code>UIActivityIndicatorView</code>.
/// Defaults to <code>UIBlurEffectStyleLight</code>.
@property (nonatomic) UIBlurEffectStyle blurStyle;
/// :nodoc:
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A View Controller wrapper to blur its content when going into the background.
/// Used to wrap view controllers that contain sensitive user info.
SWIFT_CLASS("_TtC8Elements21SecuredViewController")
@interface SecuredViewController : UIViewController
/// :nodoc:
@property (nonatomic) CGSize preferredContentSize;
/// :nodoc:
@property (nonatomic, copy) NSString * _Nullable title;
/// :nodoc:
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// :nodoc:
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS_NAMED("SessionDelegate")
@interface KFSessionDelegate : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;
@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSData;
@class NSURLSessionTask;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSHTTPURLResponse;
@class NSURLRequest;

@interface KFSessionDelegate (SWIFT_EXTENSION(Elements)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
@end


/// A rounded submit button used to submit details.
/// :nodoc:
SWIFT_CLASS("_TtC8Elements12SubmitButton")
@interface SubmitButton : UIControl
/// :nodoc:
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
/// :nodoc:
@property (nonatomic, copy) NSString * _Nullable accessibilityIdentifier;
- (void)layoutSubviews;
/// :nodoc:
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end





















SWIFT_CLASS("_TtC8Elements8UIRouter")
@interface UIRouter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface UIRouter (SWIFT_EXTENSION(Elements)) <UINavigationControllerDelegate>
- (void)navigationController:(UINavigationController * _Nonnull)navigationController didShowViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
@end








#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
