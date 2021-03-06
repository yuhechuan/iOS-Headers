/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ADBannerController, NSString, UIView<ADAdRecipient>;

@interface ADAdRecipientRecord : NSObject
{
    UIView<ADAdRecipient> *_recipient;
    BOOL _propertyUpdateScheduled;
    BOOL _visibilityCheckScheduled;
    double _lastSlowCheck;
    BOOL _requireVisibilityPropagation;
    int _adType;
    double _creationTime;
    ADBannerController *_controller;
    BOOL _shouldAttemptControllerCreation;
    BOOL _waitingOnFirstLoad;
    BOOL _visible;
}

@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) BOOL waitingOnFirstLoad; // @synthesize waitingOnFirstLoad=_waitingOnFirstLoad;
@property(nonatomic) BOOL shouldAttemptControllerCreation; // @synthesize shouldAttemptControllerCreation=_shouldAttemptControllerCreation;
@property(retain, nonatomic) ADBannerController *controller; // @synthesize controller=_controller;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) int adType; // @synthesize adType=_adType;
- (id)modalViewController;
- (void)serverInterstitialViewExpiredAndWasUnloaded:(id)arg1;
- (void)serverStoryboardDidTransitionOut:(id)arg1;
- (void)serverBannerViewDidFailToReceiveAd:(id)arg1 withError:(id)arg2;
- (void)serverBannerViewDidLoad:(id)arg1;
- (void)serverBannerViewWillLoad:(id)arg1;
@property(readonly, nonatomic) NSString *advertisingSection;
@property(readonly, nonatomic) NSString *identifier;
- (void)presentLocalViewController:(id)arg1;
- (void)requestStoryboardDidFailWithError:(id)arg1;
- (void)scheduleAttributePropagation;
- (void)updateVisibility;
- (void)_appDidBecomeActive;
@property(readonly, nonatomic) int visibility;
@property(nonatomic) __weak UIView<ADAdRecipient> *recipient;
- (id)initForRecipient:(id)arg1;
- (void)dealloc;

@end

