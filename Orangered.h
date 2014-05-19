#import <UIKit/UIKit.h>
#import <libactivator/libactivator.h>
#import <Foundation/NSDistributedNotificationCenter.h>
#import <SpringBoard/SBApplication.h>
#import <SpringBoard/SBApplicationController.h>
#import <SpringBoard/SBBulletinBannerController.h>
#import <BulletinBoard/BulletinBoard.h>

#import "Communication/AFNetworking.h"
#import "Communication/RedditKit.h"
#import "Communication/Mantle.h"

#import "substrate.h"
#import <objc/runtime.h>

#ifdef DEBUG
	#define ORLOG(fmt, ...) NSLog((@"[Orangered] %s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
	#define ORLOG(fmt, ...) 
#endif

@interface OrangeredProviderFactory : NSObject <BBDataProviderFactory>
@end

@interface OrangeredProvider : NSObject <BBRemoteDataProvider>
@property(nonatomic, retain) NSObject<BBDataProviderFactory> *factory;
@property(nonatomic, retain) NSString *customSectionID;

+ (instancetype)sharedInstance;
- (void)pushBulletins:(NSMutableArray *)bulletins;
- (void)fireAway;
@end
