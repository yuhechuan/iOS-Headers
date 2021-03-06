//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

__attribute__((visibility("hidden")))
@interface TSPTemporaryDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
    BOOL _isMissingData;
    BOOL _gilligan_isRemote;
    BOOL _isMissingOriginalData;
}

@property(nonatomic) BOOL isMissingOriginalData; // @synthesize isMissingOriginalData=_isMissingOriginalData;
- (void)setGilligan_isRemote:(BOOL)arg1;
- (BOOL)gilligan_isRemote;
@property(nonatomic) BOOL isMissingData; // @synthesize isMissingData=_isMissingData;
- (void).cxx_destruct;
- (BOOL)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id *)arg4 didCopyDataToPackage:(char *)arg5 isMissingData:(char *)arg6;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)decryptionKey;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;

@end

