/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPinchGestureRecognizer.h"

@interface _PUZoomRotateGestureRecognizer : UIPinchGestureRecognizer
{
    double _rotation;
    double _originalAngle;
    _Bool _hasT1;
    _Bool _hasT2;
    struct CGPoint _previousT1;
    struct CGPoint _previousT2;
}

@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
