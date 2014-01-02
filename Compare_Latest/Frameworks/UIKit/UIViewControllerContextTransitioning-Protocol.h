/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol UIViewControllerContextTransitioning <NSObject>
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (long long)presentationStyle;
- (_Bool)transitionWasCancelled;
- (_Bool)isInteractive;
- (_Bool)isAnimated;
- (id)containerView;
@end
