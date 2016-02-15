// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import MapKit;
@import CoreLocation;
@import CoreGraphics;
@import CoreFoundation;
@import Foundation;
@import AVFoundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UITextView;
@class UIButton;
@class NSMutableAttributedString;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC20Indigenous_San_Diego19AboutViewController")
@interface AboutViewController : UIViewController
@property (nonatomic, strong) IBOutlet UITextView * __null_unspecified textView;
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified soundButton;
@property (nonatomic, strong) NSMutableAttributedString * __null_unspecified aboutApp;
@property (nonatomic, strong) NSMutableAttributedString * __null_unspecified aboutSCTCA;
@property (nonatomic, strong) NSMutableAttributedString * __null_unspecified aboutNAKA;
@property (nonatomic, strong) NSMutableAttributedString * __null_unspecified aboutProcopio;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)soundButtonPressed:(id __nonnull)sender;
- (IBAction)backPressed:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIAlertController;

SWIFT_PROTOCOL("_TtP20Indigenous_San_Diego9Alertable_")
@protocol Alertable
- (UIAlertController * __nonnull)alert;
@end

@class UIWindow;
@class UIApplication;
@class NSObject;
@class NSURL;
@class NSManagedObjectModel;
@class NSPersistentStoreCoordinator;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC20Indigenous_San_Diego11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
@property (nonatomic, strong) NSURL * __nonnull applicationDocumentsDirectory;
@property (nonatomic, strong) NSManagedObjectModel * __nonnull managedObjectModel;
@property (nonatomic, strong) NSPersistentStoreCoordinator * __nonnull persistentStoreCoordinator;
@property (nonatomic, strong) NSManagedObjectContext * __nonnull managedObjectContext;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20Indigenous_San_Diego12CulturalSite")
@interface CulturalSite : NSObject
@property (nonatomic, readonly, copy) NSString * __nonnull name;
@property (nonatomic, readonly) NSInteger category;
@property (nonatomic, readonly, copy) NSString * __nonnull url;
@property (nonatomic, readonly, copy) NSString * __nonnull generalInfo;
@property (nonatomic, readonly, copy) NSString * __nonnull hours;
@property (nonatomic, readonly, copy) NSString * __nonnull cost;
- (nonnull instancetype)initWithName:(NSString * __nonnull)name latitude:(double)latitude longitude:(double)longitude category:(NSInteger)category url:(NSString * __nonnull)url generalInfo:(NSString * __nonnull)generalInfo hours:(NSString * __nonnull)hours cost:(NSString * __nonnull)cost;
@end


@interface CulturalSite (SWIFT_EXTENSION(Indigenous_San_Diego)) <Alertable>
- (UIAlertController * __nonnull)alert;
@end


@interface CulturalSite (SWIFT_EXTENSION(Indigenous_San_Diego)) <MKAnnotation>
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly, copy) NSString * __nullable title;
- (MKPinAnnotationColor)pinColor;
@end

@class MenuButton;
@class UILabel;
@class NSLayoutConstraint;
@class RightSlideAnimator;
@class UIStoryboardSegue;

SWIFT_CLASS("_TtC20Indigenous_San_Diego18MainViewController")
@interface MainViewController : UIViewController
@property (nonatomic, copy) IBOutletCollection(MenuButton) NSArray<MenuButton *> * __null_unspecified buttonCollection;
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified soundButton;
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified backButton;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified titleLabel;
@property (nonatomic, copy) IBOutletCollection(NSLayoutConstraint) NSArray<NSLayoutConstraint *> * __null_unspecified buttonLeadingCollection;
@property (nonatomic, copy) IBOutletCollection(NSLayoutConstraint) NSArray<NSLayoutConstraint *> * __null_unspecified buttonWidthCollection;
@property (nonatomic, readonly, strong) RightSlideAnimator * __nonnull transition;
@property (nonatomic, copy) NSString * __nonnull tempTitle;
@property (nonatomic, copy) NSString * __nonnull subTitle;
@property (nonatomic) BOOL onMainMenu;
@property (nonatomic) BOOL loaded;
@property (nonatomic) BOOL viewingSite;
@property (nonatomic) BOOL viewingMap;
@property (nonatomic) BOOL viewingAbout;
@property (nonatomic) NSInteger selectedIndex;
@property (nonatomic) CGFloat buttonWidth;
@property (nonatomic, copy) NSArray<CulturalSite *> * __null_unspecified currentData;
@property (nonatomic, readonly, copy) NSArray<NSString *> * __nonnull mainMenuItems;
@property (nonatomic, readonly, copy) NSArray<NSString *> * __nonnull subMenuItems;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)soundPressed:(id __nonnull)sender;
- (IBAction)backPressed:(id __nonnull)sender;
- (void)setButtonTitles;
- (void)prepareForSegue:(UIStoryboardSegue * __nonnull)segue sender:(id __nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface MainViewController (SWIFT_EXTENSION(Indigenous_San_Diego))
- (void)buttonWasTapped:(MenuButton * __null_unspecified)button;
@end

@protocol UIViewControllerAnimatedTransitioning;

@interface MainViewController (SWIFT_EXTENSION(Indigenous_San_Diego)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> __nullable)animationControllerForPresentedController:(UIViewController * __nonnull)presented presentingController:(UIViewController * __nonnull)presenting sourceController:(UIViewController * __nonnull)source;
- (id <UIViewControllerAnimatedTransitioning> __nullable)animationControllerForDismissedController:(UIViewController * __nonnull)dismissed;
@end

@class MKMapView;
@class UIView;
@class UIPickerView;
@class CLLocationManager;
@class NSMutableArray;

SWIFT_CLASS("_TtC20Indigenous_San_Diego17MapViewController")
@interface MapViewController : UIViewController
@property (nonatomic, strong) IBOutlet MKMapView * __null_unspecified mapView;
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified dimView;
@property (nonatomic, strong) IBOutlet UIPickerView * __null_unspecified sitePicker;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified siteLabel;
@property (nonatomic, strong) CulturalSite * __null_unspecified currentSite;
@property (nonatomic, strong) CLLocationManager * __nonnull manager;
@property (nonatomic, strong) NSMutableArray * __nonnull siteCollection;
@property (nonatomic) NSInteger siteIndex;
@property (nonatomic) CFTimeInterval timeForProcess;
- (nonnull instancetype)initWithNibName:(NSString * __null_unspecified)nibNameOrNil bundle:(NSBundle * __null_unspecified)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)animated;
- (NSArray<CulturalSite *> * __nonnull)getSiteArray:(NSString * __nonnull)siteName;
- (void)displaySites:(NSArray<CulturalSite *> * __nonnull)sites;
- (void)prepareForSegue:(UIStoryboardSegue * __nonnull)segue sender:(id __nullable)sender;
- (IBAction)backPressed:(id __nonnull)sender;
- (IBAction)choosePins:(id __nonnull)sender;
- (IBAction)closePins:(id __nonnull)sender;
@end


@interface MapViewController (SWIFT_EXTENSION(Indigenous_San_Diego)) <CLLocationManagerDelegate>
@end

@class MKAnnotationView;
@class UIControl;

@interface MapViewController (SWIFT_EXTENSION(Indigenous_San_Diego)) <MKMapViewDelegate>
- (MKAnnotationView * __null_unspecified)mapView:(MKMapView * __nonnull)mapView viewForAnnotation:(id <MKAnnotation> __nonnull)annotation;
- (void)mapView:(MKMapView * __nonnull)mapView annotationView:(MKAnnotationView * __nonnull)view calloutAccessoryControlTapped:(UIControl * __nonnull)control;
@end

@class NSAttributedString;

@interface MapViewController (SWIFT_EXTENSION(Indigenous_San_Diego)) <UIPickerViewDelegate>
- (void)pickerView:(UIPickerView * __nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (NSAttributedString * __nullable)pickerView:(UIPickerView * __nonnull)pickerView attributedTitleForRow:(NSInteger)row forComponent:(NSInteger)component;
@end


@interface MapViewController (SWIFT_EXTENSION(Indigenous_San_Diego)) <UIPickerViewDataSource>
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * __nonnull)pickerView;
- (NSInteger)pickerView:(UIPickerView * __nonnull)pickerView numberOfRowsInComponent:(NSInteger)component;
@end


SWIFT_CLASS("_TtC20Indigenous_San_Diego10MenuButton")
@interface MenuButton : UIView
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified button;
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified colorFill;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label;
- (void)xibSetup;
- (UIView * __nonnull)loadViewFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (IBAction)buttonTapped:(id __nonnull)sender;
@end

@class UIImageView;

SWIFT_CLASS("_TtC20Indigenous_San_Diego19MusicViewController")
@interface MusicViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified contentView;
@property (nonatomic, strong) IBOutlet UIImageView * __null_unspecified logo;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified titleLabel;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label1;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label2;
@property (nonatomic) BOOL endedEarly;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)tappedScreen:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20Indigenous_San_Diego22ProcopioViewController")
@interface ProcopioViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified contentView;
@property (nonatomic, strong) IBOutlet UIImageView * __null_unspecified logo;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified titleLabel;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label1;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label2;
@property (nonatomic) BOOL endedEarly;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)tappedScreen:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC20Indigenous_San_Diego18RightSlideAnimator")
@interface RightSlideAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, readonly) double duration;
@property (nonatomic) BOOL presenting;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)transitionContext;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)transitionContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20Indigenous_San_Diego20RightSlideTransition")
@interface RightSlideTransition : NSObject <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> __nullable)animationControllerForPresentedController:(UIViewController * __nonnull)presented presentingController:(UIViewController * __nonnull)presenting sourceController:(UIViewController * __nonnull)source;
- (id <UIViewControllerAnimatedTransitioning> __nullable)animationControllerForDismissedController:(UIViewController * __nonnull)dismissed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20Indigenous_San_Diego19SCTCAViewController")
@interface SCTCAViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIView * __null_unspecified contentView;
@property (nonatomic, strong) IBOutlet UIImageView * __null_unspecified logo;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified titleLabel;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label1;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label2;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label3;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label4;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified label5;
@property (nonatomic) BOOL endedEarly;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)tappedScreen:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20Indigenous_San_Diego8SiteCell")
@interface SiteCell : UITableViewCell
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified title;
@property (nonatomic, strong) IBOutlet UIImageView * __null_unspecified cellImg;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * __null_unspecified bottomConstraint;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * __null_unspecified topConstraint;
@property (nonatomic, readonly) CGFloat imageParallaxFactor;
@property (nonatomic, strong) UIImageView * __null_unspecified img;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setBackgroundOffset:(CGFloat)offset;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class AVAudioPlayer;

SWIFT_CLASS("_TtC20Indigenous_San_Diego8SiteData")
@interface SiteData : NSObject
+ (SiteData * __nonnull)sharedInstance;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull tribalMuseums;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull culturalTrails;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull higherEducation;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull otherNativeBusinesses;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull publicMuseums;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull spanishMuseums;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull tribalLands;
@property (nonatomic, copy) NSArray<CulturalSite *> * __nonnull tribalOwnedBusinesses;
@property (nonatomic, strong) AVAudioPlayer * __null_unspecified player;
@property (nonatomic) BOOL playMusic;
- (void)load:(NSString * __nonnull)fileName;
- (void)playMyFile;
- (void)stopPlayback;
@end


@interface SiteData (SWIFT_EXTENSION(Indigenous_San_Diego)) <AVAudioPlayerDelegate>
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer * __nonnull)player successfully:(BOOL)flag;
@end

@class FXBlurView;
@class UIAlertView;

SWIFT_CLASS("_TtC20Indigenous_San_Diego22SitePageViewController")
@interface SitePageViewController : UIViewController <UIAlertViewDelegate>
@property (nonatomic, strong) IBOutlet FXBlurView * __null_unspecified blurView;
@property (nonatomic, strong) IBOutlet UITextView * __null_unspecified textView;
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified expandButton;
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified soundButton;
@property (nonatomic, strong) IBOutlet UIImageView * __null_unspecified background;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified costLabel;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified pageTitle;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified hoursLabel;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified directionsLabel;
@property (nonatomic, strong) IBOutlet NSLayoutConstraint * __null_unspecified blurHeightConstraint;
@property (nonatomic) BOOL expanded;
@property (nonatomic, strong) CulturalSite * __null_unspecified data;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)animated;
- (void)exploreAction;
- (void)alertView:(UIAlertView * __nonnull)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;
- (IBAction)soundPressed:(id __nonnull)sender;
- (IBAction)directionsAndWebsitePressed:(id __nonnull)sender;
- (IBAction)expandPressed:(id __nonnull)sender;
- (IBAction)backButtonPressed:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

SWIFT_CLASS("_TtC20Indigenous_San_Diego9SiteTable")
@interface SiteTable : UIViewController
@property (nonatomic, strong) IBOutlet UITableView * __null_unspecified tableView;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified pageTitle;
@property (nonatomic, copy) NSArray<CulturalSite *> * __null_unspecified data;
@property (nonatomic) BOOL cellTapped;
@property (nonatomic) NSInteger currentRow;
@property (nonatomic, copy) NSString * __null_unspecified tempTitle;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)backPressed:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSIndexPath;

@interface SiteTable (SWIFT_EXTENSION(Indigenous_San_Diego)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end

@class UIScrollView;

@interface SiteTable (SWIFT_EXTENSION(Indigenous_San_Diego)) <UITableViewDelegate, UIScrollViewDelegate>
- (void)tableView:(UITableView * __nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (CGFloat)tableView:(UITableView * __nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (void)scrollViewDidScroll:(UIScrollView * __nonnull)scrollView;
- (void)setCellImageOffset:(SiteCell * __nonnull)cell indexPath:(NSIndexPath * __nonnull)indexPath;
- (void)tableView:(UITableView * __nonnull)tableView willDisplayCell:(UITableViewCell * __nonnull)cell forRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (void)prepareForSegue:(UIStoryboardSegue * __nonnull)segue sender:(id __nullable)sender;
@end


@interface UIView (SWIFT_EXTENSION(Indigenous_San_Diego))
@property (nonatomic) CGFloat cornerRadius;
@end

#pragma clang diagnostic pop
