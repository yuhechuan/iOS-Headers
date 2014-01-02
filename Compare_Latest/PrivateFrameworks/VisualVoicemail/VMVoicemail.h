/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, VMAccount;

@interface VMVoicemail : NSObject
{
    VMAccount *_account;
    long long _identifier;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    struct __CFPhoneNumber *_senderPhoneNumber;
    struct __CFPhoneNumber *_callbackPhoneNumber;
}

+ (void)initialize;
- (id)imageDataUsingAddressBook:(void *)arg1;
- (id)displayLabelUsingAddressBook:(void *)arg1;
- (id)displayNameUsingAddressBook:(void *)arg1;
- (void *)abRecordUsingAddressBook:(void *)arg1 withIdentifier:(int *)arg2;
- (void *)abRecordUsingAddressBook:(void *)arg1;
- (void)_handleDataAvailable:(id)arg1;
- (_Bool)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)description;
- (void)setFlags:(unsigned int)arg1;
- (_Bool)doesNotHaveFlags:(unsigned int)arg1;
- (_Bool)hasFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (id)dataPath;
- (int)duration;
- (id)callbackNumber;
@property(readonly) struct __CFPhoneNumber *callbackPhoneNumber; // @dynamic callbackPhoneNumber;
@property(readonly) struct __CFPhoneNumber *senderPhoneNumber; // @dynamic senderPhoneNumber;
- (id)sender;
- (id)date;
- (unsigned long long)remoteUID;
- (long long)identifier;
- (void)_updateCache;
- (void)dealloc;

@end
