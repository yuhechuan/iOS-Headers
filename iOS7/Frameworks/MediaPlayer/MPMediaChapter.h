/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPMediaChapter : NSObject
{
    long long _chapterType;
    unsigned long long _indexInChaptersWithAnyType;
    unsigned long long _indexInChaptersWithSameType;
    double _playbackDuration;
    double _playbackTime;
    id _value;
    id _valueLoader;
}

@property(copy, nonatomic) id valueLoader; // @synthesize valueLoader=_valueLoader;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) long long chapterType; // @synthesize chapterType=_chapterType;
@property(nonatomic) unsigned long long indexInChaptersWithSameType; // @synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType;
@property(nonatomic) unsigned long long indexInChaptersWithAnyType; // @synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType;
- (void).cxx_destruct;
- (double)duration;
- (id)title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

