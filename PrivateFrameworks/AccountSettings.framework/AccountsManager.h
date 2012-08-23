/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSMutableArray, NSMutableDictionary;



@interface AccountsManager : NSObject 
{
    NSMutableArray *_accounts;
    NSMutableDictionary *_accountsByID;
    NSUInteger _dataVersion;
}

+ (void)_migrateAccountsIfNeeded;
+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (BOOL)getMigrationLock;
+ (void)releaseMigrationLock;
+ (void)beginMigration;
+ (void)endMigration;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (void)shouldMigrateOldMailAccounts:(BOOL*)arg1 oldDAAccounts:(BOOL*)arg2 newAccountSettings:(BOOL*)arg3;
+ (BOOL)accountSettingsNeedsToBeMigrated;
+ (BOOL)_oldDAAccountsInformationFound;
+ (BOOL)_oldMailAccountsInformationFound;
+ (NSUInteger)currentVersion;

- (id)_initInsideOfMigration;
- (id)init;
- (void)dealloc;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountWithSyncIdentifier:(id)arg1;
- (id)allBasicAccounts;
- (NSUInteger)countOfBasicAccountsWithTypes:(id)arg1;
- (id)displayNameForAccountWithIdentifier:(id)arg1;
- (id)displayNameForAccountWithSyncIdentifier:(id)arg1;
- (id)legacyAccounts;
- (void)setLegacyAccounts:(id)arg1;
- (id)fullDeviceLocalAccount;
- (id)fullAccountWithIdentifier:(id)arg1;
- (id)allMailAccounts;
- (id)allExchangeAccounts;
- (id)accountsWithTypes:(id)arg1;
- (NSUInteger)count;
- (void)updateAccount:(id)arg1;
- (void)insertAccount:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)replaceExchangeAccountsWith:(id)arg1;
- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;
- (void)saveAllAccounts;
- (id)_initWithAccountsInfo:(id)arg1;
- (void)setDataVersion:(NSUInteger)arg1;
- (id)initWithAccounsInfoArray:(id)arg1;
- (NSUInteger)dataVersion;

@end
