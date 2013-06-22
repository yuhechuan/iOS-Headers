/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, SSXPCConnection;

@interface SSPreorderManager : NSObject
{
    SSXPCConnection *_connection;
    struct dispatch_queue_s *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    struct dispatch_queue_s *_observerQueue;
    struct __CFArray *_observers;
    NSArray *_preorders;
}

+ (id)musicStoreItemKinds;
- (void)_sendMessageToObservers:(SEL)arg1;
- (void)_registerAsObserver;
- (void)_handleMessage:(void *)arg1 fromServerConnection:(struct _xpc_connection_s *)arg2;
- (void)_connectAsObserver;
- (void)removeObserver:(id)arg1;
- (void)reloadFromServer;
@property(readonly) NSArray *preorders;
@property(readonly) NSArray *itemKinds;
- (void)cancelPreorders:(id)arg1 withCompletionBlock:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithItemKinds:(id)arg1;
- (id)init;

@end
