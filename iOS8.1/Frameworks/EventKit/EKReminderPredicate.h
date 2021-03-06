//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPredicate.h>

@class NSDate, NSString;

@interface EKReminderPredicate : EKPredicate
{
    BOOL _limitToCompletedOrIncomplete;
    BOOL _completed;
    BOOL _useCompletionDateAsAlternate;
    BOOL _useDueDateAsCompletionDate;
    NSString *_title;
    NSString *_listTitle;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    NSString *_searchTerm;
    int _sortOrder;
    unsigned int _maxResults;
}

+ (id)predicateWithCalendars:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) BOOL useDueDateAsCompletionDate; // @synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate;
@property(nonatomic) BOOL useCompletionDateAsAlternate; // @synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate;
@property(retain, nonatomic) NSDate *dueBefore; // @synthesize dueBefore=_dueBefore;
@property(retain, nonatomic) NSDate *dueAfter; // @synthesize dueAfter=_dueAfter;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(nonatomic) BOOL limitToCompletedOrIncomplete; // @synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete;
@property(retain, nonatomic) NSString *listTitle; // @synthesize listTitle=_listTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCalendars:(id)arg1;

@end

