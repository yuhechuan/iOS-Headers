/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, WLBarcode, WLImage;

@interface WLCardContent : NSObject
{
    WLBarcode *_barcode;
    int _transitType;
    WLImage *_footerImage;
    NSArray *_storeIdentifiers;
    NSString *_logoText;
    NSString *_localizedDescription;
    NSArray *_frontFieldBuckets;
    NSArray *_backFieldBuckets;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *backFieldBuckets; // @synthesize backFieldBuckets=_backFieldBuckets;
@property(copy, nonatomic) NSArray *frontFieldBuckets; // @synthesize frontFieldBuckets=_frontFieldBuckets;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(copy, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property(retain, nonatomic) WLImage *footerImage; // @synthesize footerImage=_footerImage;
@property(nonatomic) int transitType; // @synthesize transitType=_transitType;
@property(retain, nonatomic) WLBarcode *barcode; // @synthesize barcode=_barcode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCardURL:(id)arg1;

@end

