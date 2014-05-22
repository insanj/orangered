#import "Orangered.h"

@interface OrangeredProviderFactory : NSObject <BBDataProviderFactory>
@end

@interface OrangeredProvider : NSObject <BBRemoteDataProvider> {
	BOOL loaded;
}

@property(nonatomic, retain) NSObject<BBDataProviderFactory> *factory;
@property(nonatomic, retain) NSString *customSectionID;

+ (instancetype)sharedInstance;
- (void)pushBulletin:(BBBulletinRequest *)bulletin intoServer:(BBServer *)server;
- (void)fireAway;
@end