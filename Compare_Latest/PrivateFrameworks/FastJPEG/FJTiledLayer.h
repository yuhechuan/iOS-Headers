/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class FJCache, NSData, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface FJTiledLayer : CALayer
{
    NSData *_jpegData;
    struct jpegDecoder *_decoders;
    int _decoderCount;
    int _tilePixelSize;
    struct CGSize _fullSize;
    int _err;
    FJCache *_tileCache;
    struct iosPoolOpaque *_surfacePool;
    NSMutableSet *_visibleTileIds;
    NSMutableDictionary *_subLayers;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSObject<OS_dispatch_queue> *_filterQueue;
    unsigned int _requestId;
    int _zoomLevel;
    CALayer *_placeholderLayer;
    struct CGImage *_placeholderImage;
    double _zoomStartScale;
    int _lock;
    id <FJTileProcessor> _tileProcessor;
    unsigned long long _currentProcessingID;
    unsigned long long _nextProcessingID;
    struct CGRect _lastVisibleRect;
    double _lastZoomScale;
    _Bool _showTileBorders;
}

- (void)setVisibleRectangle:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)setVisibleRectangle:(struct CGRect)arg1 zoomScale:(double)arg2 completionHandler:(id)arg3;
- (_Bool)visibleTileRegionHasChanged:(struct CGRect)arg1 level:(int)arg2;
- (void)removeAllTiles;
- (void)decodeImageRectangle:(struct CGRect)arg1 forLevel:(int)arg2 requestId:(unsigned int)arg3 completionHandler:(id)arg4;
- (void)updateSubLayers:(id)arg1;
- (void)flushCache;
@property(readonly, nonatomic) struct CGSize jpegImageSize;
- (void)dealloc;
- (void)setTileProcessingEnabled:(_Bool)arg1 withProcessingID:(unsigned long long)arg2 placeholderImage:(struct CGImage *)arg3;
- (id)initWithJPEGData:(id)arg1 placeholderImage:(struct CGImage *)arg2;
- (double)zoomStartScaleForImage:(struct CGSize)arg1 placeholderImageSize:(struct CGSize)arg2;
- (void)prepareForDecoding;
@property(nonatomic) __weak id <FJTileProcessor> tileProcessor;

@end
