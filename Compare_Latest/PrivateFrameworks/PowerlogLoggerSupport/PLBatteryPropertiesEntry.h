/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PowerlogLoggerSupport/PLEntry.h>

@class NSNumber, NSString;

@interface PLBatteryPropertiesEntry : PLEntry
{
}

+ (id)batteryPropertiesEntry;
@property(readonly, nonatomic) _Bool draining;
@property(readonly, nonatomic) _Bool isPluggedIn;
@property(readonly, nonatomic) long long fullAvailableCapacity;
@property(readonly, nonatomic) long long chemID;
@property(readonly, nonatomic) NSString *chargingState;
@property(readonly, nonatomic) long long batteryTemp;
@property(readonly, nonatomic) NSNumber *connectedStatus;
@property(readonly, nonatomic) NSNumber *adapterInfo;
@property(readonly, nonatomic) long long chargingCurrent;
@property(readonly, nonatomic) _Bool fullyCharged;
@property(readonly, nonatomic) _Bool isCharging;
@property(readonly, nonatomic) long long cycleCount;
@property(readonly, nonatomic) long long designCapacity;
@property(readonly, nonatomic) double rawMaxCapacity;
@property(readonly, nonatomic) double maxCapacity;
@property(readonly, nonatomic) double rawCurrentCapacity;
@property(readonly, nonatomic) double currentCapacity;
@property(readonly, nonatomic) long long current;
@property(readonly, nonatomic) long long voltage;
@property(readonly, nonatomic) _Bool isCritical;
@property(readonly, nonatomic) double rawCapacity;
@property(readonly, nonatomic) double capacity;
- (void)dealloc;
- (id)humanReadableChargingStateFromIORegistryEntryDictionary:(id)arg1;
- (id)initEntryWithIORegistryEntry:(unsigned int)arg1;
- (id)init;

@end
