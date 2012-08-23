/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString, CalDAVAccount, NSURL, CalDAVCacheManager;



@interface CalDAVDeleteEntityOperation : NSObject 
{
    NSString *_filename;
    NSURL *_calendarURL;
    CalDAVAccount *_account;
    CalDAVCacheManager *_cache;
}


- (id)initWithFilename:(id)arg1 calendarURL:(id)arg2 account:(id)arg3 cache:(id)arg4;
- (void)dealloc;
- (id)readableDescription;
- (void)performOperation:(BOOL)arg1;

@end
