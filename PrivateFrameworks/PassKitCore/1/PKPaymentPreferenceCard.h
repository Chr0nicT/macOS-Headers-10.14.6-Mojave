//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentPreference.h>

@interface PKPaymentPreferenceCard : PKPaymentPreference
{
    BOOL _supportsNullSelection;
}

@property(nonatomic) BOOL supportsNullSelection; // @synthesize supportsNullSelection=_supportsNullSelection;
- (id)errorsForPreference:(id)arg1;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (BOOL)supportsDeletion;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4;

@end
