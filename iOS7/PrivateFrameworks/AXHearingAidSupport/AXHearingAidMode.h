/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AXHearingAidMode : NSObject
{
    unsigned char _index;
    BOOL _isSelected;
    NSString *_name;
    int _category;
    int _ear;
    int syncAttempts;
}

@property(nonatomic) int syncAttempts; // @synthesize syncAttempts;
@property(nonatomic) int ear; // @synthesize ear=_ear;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned char index; // @synthesize index=_index;
@property(nonatomic) int category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (BOOL)isStream;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
