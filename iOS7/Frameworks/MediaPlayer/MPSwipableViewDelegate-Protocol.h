/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPSwipableViewDelegate <NSObject>

@optional
- (void)swipableViewHadActivity:(id)arg1;
- (void)swipableView:(id)arg1 pinchedToScale:(double)arg2 withVelocity:(double)arg3;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3;
- (void)swipableView:(id)arg1 swipedInDirection:(long long)arg2;
- (id)swipableView:(id)arg1 overrideHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)swipableView:(id)arg1 willMoveToSuperview:(id)arg2;
@end

