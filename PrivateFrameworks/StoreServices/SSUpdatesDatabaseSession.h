/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SSSQLiteDatabase;

@interface SSUpdatesDatabaseSession : NSObject
{
    SSSQLiteDatabase *_database;
}

@property(readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
