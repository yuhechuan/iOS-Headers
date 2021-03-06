/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SBPolygon;

@interface SBTouchTemplate : NSObject
{
    SBPolygon *m_template;
    SBPolygon *m_candidate;
    unsigned int m_transformType;
    float m_acceptFactor;
}

- (id)initWithPoints:(struct CGPoint *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int pointCount;
- (BOOL)acceptPoints:(struct CGPoint *)arg1 count:(unsigned int)arg2;
- (BOOL)acceptPolygon:(id)arg1;
@property(nonatomic) float acceptFactor; // @synthesize acceptFactor=m_acceptFactor;
@property(nonatomic) unsigned int transformType; // @synthesize transformType=m_transformType;

@end

