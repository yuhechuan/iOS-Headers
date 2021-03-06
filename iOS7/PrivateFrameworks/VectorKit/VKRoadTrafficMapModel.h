/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKVectorMapModel.h>

@class VKRoadMapModel, VKTrafficDrawStyle, VKTrafficPainter;

// Not exported
@interface VKRoadTrafficMapModel : VKVectorMapModel
{
    VKRoadMapModel *_roadModel;
    _Bool _enabled;
    VKTrafficPainter *_trafficPainter;
    VKTrafficDrawStyle *_trafficDrawStyle;
}

@property(retain, nonatomic) VKRoadMapModel *roadModel; // @synthesize roadModel=_roadModel;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (id)init;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)stylesheetDidChange;
- (unsigned int)supportedRenderPasses;
- (unsigned long long)mapLayerPosition;

@end

