//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSData, NSString;

@protocol SCNGeometrySourceJSExport <JSExport>
+ (id)geometrySourceWithTextureCoordinates:(struct CGPoint *)arg1 count:(int)arg2;
+ (id)geometrySourceWithNormals:(struct SCNVector3 *)arg1 count:(int)arg2;
+ (id)geometrySourceWithVertices:(struct SCNVector3 *)arg1 count:(int)arg2;
+ (id)geometrySourceWithData:(NSData *)arg1 semantic:(NSString *)arg2 vectorCount:(int)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(int)arg5 bytesPerComponent:(int)arg6 dataOffset:(int)arg7 dataStride:(int)arg8;
@property(readonly, nonatomic) int dataStride;
@property(readonly, nonatomic) int dataOffset;
@property(readonly, nonatomic) int bytesPerComponent;
@property(readonly, nonatomic) int componentsPerVector;
@property(readonly, nonatomic) BOOL floatComponents;
@property(readonly, nonatomic) int vectorCount;
@property(readonly, nonatomic) NSString *semantic;
@property(readonly, nonatomic) NSData *data;
@end

