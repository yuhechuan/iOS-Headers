/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/SFUNumberFormatter.h>

@interface SFUNumberFormatter (Private)
+ (id)formatterForLocale:(struct __CFLocale *)arg1;
- (id)initWithLocale:(struct __CFLocale *)arg1;
- (void)dealloc;
- (void)numberPreferencesChanged:(id)arg1;
- (BOOL)decimalFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (BOOL)currencyFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3 currencyCode:(const struct __CFString **)arg4;
- (BOOL)percentageFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (BOOL)scientificFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (BOOL)fractionFromString:(struct __CFString *)arg1 value:(double *)arg2;
- (BOOL)valueFromString:(struct __CFString *)arg1 formatters:(struct __CFArray *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (BOOL)findCurrencySymbolInString:(struct __CFString *)arg1;
- (id)displayNameForCurrencyCode:(id)arg1;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (id)currentLocaleCurrencyCode;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)localizedPercentSymbol;
@end
