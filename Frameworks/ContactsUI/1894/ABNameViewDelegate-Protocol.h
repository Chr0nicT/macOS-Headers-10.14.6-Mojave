//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class ABNameView, NSColor, NSString;

@protocol ABNameViewDelegate <NSObject>
- (void)nameView:(ABNameView *)arg1 willLoseFocusInDirection:(unsigned long long)arg2;
- (void)editExistingKey:(NSString *)arg1 identifier:(NSString *)arg2 yOffset:(double)arg3;
- (NSColor *)colorForProperty:(NSString *)arg1;
- (BOOL)isSelectable;
- (BOOL)templateMode;
- (BOOL)editMode;
@end
