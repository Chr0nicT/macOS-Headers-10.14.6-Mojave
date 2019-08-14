//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface LoginAuthRefMgr : NSObject
{
    struct AuthorizationOpaqueRef *mAuthRef;
    CDStruct_166d2db6 *mInfo;
    CDStruct_166d2db6 *mAuthEnvironment;
    BOOL isExternalized;
    char *mUser;
    char *mPassword;
    char *mOldPassword;
    char *mHome;
    char *mAFP;
    char *mLongName;
    char *mShell;
    BOOL mGidInited;
    unsigned int mGid;
    BOOL mUidInited;
    unsigned int mUid;
    BOOL mPasswordCleared;
    struct __CFString *mKeyStoreRef;
    BOOL mMiniBuddyKeychainItemWritten;
    NSDictionary *mAllAttributes;
}

- (struct AuthorizationOpaqueRef *)authorizationRef;
- (struct __CFString *)keyStoreRef;
- (void)clearPasswordAndSetAppleKeyStoreIfNeeded:(BOOL)arg1;
- (void)deleteMinibuddyKeychainItem;
- (void)addToAuthEnvironmentBytes:(const void *)arg1 ofSize:(unsigned long long)arg2 forKey:(const char *)arg3;
- (int)fusAuth;
- (int)login;
- (void)loginDone;
- (id)generatedUUID;
- (id)appleIDAccountName;
- (BOOL)isAppleIDAccount;
- (BOOL)isManagedAccount;
- (BOOL)isGuestAccount;
- (BOOL)isLocalCachedAccount;
- (BOOL)isLocalAccount;
- (short)homeDirVolume;
- (BOOL)needToUnmountHomeDirVolumeAtLogout;
- (unsigned int)homeDirType;
- (const char *)longName;
- (const char *)afp_dir;
- (const char *)home;
- (const char *)shell;
- (unsigned int)gid;
- (unsigned int)uid;
- (const char *)oldPassword;
- (const char *)password;
- (const char *)user;
- (id)allAttributes;
- (void)zeroItem:(const char *)arg1;
- (id)infoItemAsDictionary:(const char *)arg1;
- (id)infoItemAsData:(const char *)arg1;
- (BOOL)valueExistsForItem:(const char *)arg1;
- (BOOL)boolValueForItem:(const char *)arg1;
- (char *)stringValueForItem:(const char *)arg1;
- (unsigned int)integerValueForItem:(const char *)arg1 success:(char *)arg2;
- (void)dealloc;
- (id)init;
- (CDStruct_166d2db6 *)_info;

@end
