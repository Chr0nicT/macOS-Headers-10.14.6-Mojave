//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextInput/TIKeyEventMap_zh.h>

@interface TIKeyEventMap_zh_Stroke : TIKeyEventMap_zh
{
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (BOOL)isNumericWubi:(id)arg1;
- (id)wubiFromASCII:(id)arg1;

@end
