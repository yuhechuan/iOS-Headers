/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@class NSString;

@interface _PLClientTransaction : PLClientServerTransaction
{
    int _fileDescriptor;
    id _processAssertion;
    NSString *_path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) id processAssertion; // @synthesize processAssertion=_processAssertion;
@property(nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (id)description;
- (void)abortTransaction;
- (void)dealloc;
- (id)init;

@end
