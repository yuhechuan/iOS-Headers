/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptController.h>

@interface CKTranscriptController (Keyboard)
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_keyboardDidShowOrHide:(id)arg1;
- (void)_keyboardLayoutDidChange:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (BOOL)_keyboardScreenFrameIsOnScreen:(struct CGRect)arg1;
- (BOOL)_keyboardIsOnScreen;
- (BOOL)_keyboardUndocked;
- (struct CGRect)_keyboardFrameForKeyboardScreenFrame:(struct CGRect)arg1;
- (struct CGRect)_keyboardFrame;
- (float)_distanceFromBottomOfScreenToTopEdgeOfKeyboardScreenFrame:(struct CGRect)arg1 orientation:(int)arg2;
- (float)_distanceFromBottomOfScreenToTopEdgeOfKeyboard;
- (float)_heightOfKeyboardScreenFrame:(struct CGRect)arg1;
- (float)_heightOfKeyboard;
- (struct CGRect)_keyboardScreenFrame:(struct CGRect)arg1 withoutAccessoryViewOfHeight:(float)arg2 orientation:(int)arg3;
@end
