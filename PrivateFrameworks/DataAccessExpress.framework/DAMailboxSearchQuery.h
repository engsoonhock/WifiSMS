/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSDate, NSString;



@interface DAMailboxSearchQuery : DASearchQuery 
{
    NSString *_collectionID;
    NSInteger _bodyType;
    long long _truncationSize;
    BOOL _allOrNone;
    NSDate *_priorToDate;
    NSInteger _MIMESupport;
    BOOL _deepTraversal;
    BOOL _rebuildResults;
}

@property BOOL rebuildResults; /* unknown property attribute: V_rebuildResults */
@property BOOL deepTraversal; /* unknown property attribute: V_deepTraversal */
@property NSInteger MIMESupport; /* unknown property attribute: V_MIMESupport */
@property(retain) NSDate *priorToDate; /* unknown property attribute: V_priorToDate */
@property BOOL allOrNone; /* unknown property attribute: V_allOrNone */
@property long long truncationSize; /* unknown property attribute: V_truncationSize */
@property NSInteger bodyType; /* unknown property attribute: V_bodyType */
@property(retain) NSString *collectionID; /* unknown property attribute: V_collectionID */

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)rebuildResults;
- (void)setRebuildResults:(BOOL)arg1;
- (BOOL)deepTraversal;
- (void)setDeepTraversal:(BOOL)arg1;
- (NSInteger)MIMESupport;
- (void)setMIMESupport:(NSInteger)arg1;
- (id)priorToDate;
- (void)setPriorToDate:(id)arg1;
- (BOOL)allOrNone;
- (void)setAllOrNone:(BOOL)arg1;
- (long long)truncationSize;
- (void)setTruncationSize:(long long)arg1;
- (NSInteger)bodyType;
- (void)setBodyType:(NSInteger)arg1;
- (id)collectionID;
- (void)setCollectionID:(id)arg1;

@end
