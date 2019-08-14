//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSString;

@interface SFUJsonScanner : NSObject
{
    NSString *mString;
    unsigned short *mCharacters;
    unsigned long long mLength;
    unsigned long long mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}

- (id)parseObjectWithMaxDepth:(int)arg1;
- (id)parseNumber;
- (id)parseFalse;
- (id)parseTrue;
- (id)parseNull;
- (BOOL)parseConstantString:(const char *)arg1;
- (id)parseArrayWithMaxDepth:(int)arg1;
- (id)parseDictionaryWithMaxDepth:(int)arg1;
- (id)parseString;
- (void)appendCharactersInRange:(struct _NSRange)arg1 toString:(id)arg2;
- (id)parseHexCharacter;
- (void)skipWhitespace;
- (unsigned short)nextCharacter;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end
