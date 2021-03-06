//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

#import "TSDPropagatableCommand.h"

@class NSString, TSSStyle<TSSPreset>, TSSTheme;

__attribute__((visibility("hidden")))
@interface TSSThemeRemoveStylePresetCommand : TSKCommand <TSDPropagatableCommand>
{
    TSSTheme *mTheme;
    TSSStyle<TSSPreset> *mPreset;
    unsigned int mPresetIndex;
    NSString *mPresetKind;
    NSString *mIdentifier;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_removePreset;
- (void)p_addPreset;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 preset:(id)arg2;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;

@end

