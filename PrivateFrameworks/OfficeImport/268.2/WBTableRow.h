//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBTableRow : NSObject
{
}

+ (void)readFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 index:(unsigned long long)arg4 row:(id)arg5;
+ (void)collectCellProperties:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableProperties *)arg2 for:(id)arg3;
+ (void)readCellsFrom:(id)arg1 textRuns:(id)arg2 level:(int)arg3 to:(id)arg4 properties:(struct WrdTableProperties *)arg5 tracked:(struct WrdTableProperties *)arg6;

@end
