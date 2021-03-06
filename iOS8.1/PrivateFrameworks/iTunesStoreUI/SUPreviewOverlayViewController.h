//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SUPreviewOverlayStorePageViewController;

@interface SUPreviewOverlayViewController : SUViewController
{
    struct CGSize _contentSize;
    CDUnknownBlockType _loadBlock;
    BOOL _loaded;
    float _paddingRight;
    float _paddingTop;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    NSString *_userInfoString;
    BOOL _visible;
}

+ (void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2;
+ (void)offsetScrollView:(id)arg1 forViewController:(id)arg2;
+ (id)defaultRequestProperties;
+ (double)defaultAnimationDuration;
@property(copy, nonatomic) NSString *userInfoString; // @synthesize userInfoString=_userInfoString;
@property(nonatomic) float paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) float paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)_storePageViewController;
- (id)_scrollViewForViewController:(id)arg1;
- (id)_previewOverlayContainerForViewController:(id)arg1;
- (void)loadView;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)invalidateForMemoryPurge;
- (void)showInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadWithRequestProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isContentLoaded) BOOL contentLoaded;
- (void)hideInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)hideInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

