//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCModifyTagSettingsCommand, NSString;

@protocol FCTagSettingsDelegate <NSObject>
- (void)accessTokenRemovedForTagID:(NSString *)arg1 userInitiated:(BOOL)arg2;
- (void)accessTokenDidChangeForTagID:(NSString *)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(FCModifyTagSettingsCommand *)arg1;
@end
