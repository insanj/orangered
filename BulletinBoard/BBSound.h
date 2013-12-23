/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface BBSound : NSObject <NSCopying, NSCoding>
{
    int _soundType;
    unsigned long _systemSoundID;
    unsigned int _soundBehavior;
    NSString *_ringtoneName;
    BOOL _repeats;
    NSDictionary *_vibrationPattern;
}

+ (id)alertSoundWithSystemSoundID:(unsigned long)arg1;
@property(nonatomic) unsigned int soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(nonatomic, getter=isRepeating) BOOL repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) NSString *ringtoneName; // @synthesize ringtoneName=_ringtoneName;
@property(retain, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(nonatomic) unsigned long systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(nonatomic) int soundType; // @synthesize soundType=_soundType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2;

@end

