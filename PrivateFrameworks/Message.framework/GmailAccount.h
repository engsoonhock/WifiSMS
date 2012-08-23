/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSURLCredential, NSURLConnection;



@interface GmailAccount : IMAPAccount 
{
    NSURLConnection *_enablingConnection;
    NSURLCredential *_credential;
    unsigned int _isEnabling : 1;
    unsigned int _didEnable : 1;
}

+ (id)emailAddressHostPart;
+ (id)displayedAccountTypeString;
+ (id)hostname;
+ (BOOL)isPredefinedAccountType;
+ (id)deliveryAccountHostname;
+ (BOOL)deliveryAccountUsesSSL;
+ (NSUInteger)deliveryAccountPortNumber;
+ (BOOL)usernameIsEmailAddress;

- (void)dealloc;
- (id)hostname;
- (id)emailAddresses;
- (id)password;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (BOOL)archiveSentMessages;
- (NSInteger)emptyFrequencyForMailboxType:(NSInteger)arg1;
- (BOOL)_isOurConnection:(id)arg1;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_removeCredential:(id)arg1;
- (BOOL)enableAccount;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (id)mailboxUidOfType:(NSInteger)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)xListSupportedOnConnection:(id)arg1;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (id)primaryMailboxUid;

@end
