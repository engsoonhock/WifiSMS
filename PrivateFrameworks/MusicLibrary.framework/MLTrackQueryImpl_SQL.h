/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLTrackQueryImpl_SQL : MLQueryImpl_SQL 
{
}


- (const struct { char *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); unsigned char x8; void *x9; NSInteger x10; struct { /* ? */ } *x11; void *x12; char *x13; int (*x14)(); int (*x15)(); NSInteger x16; struct { /* ? */ } *x17; }*)_resultEntityRecordDescriptor;
- (NSInteger)_getDBRecordIDOfEntityAtIndex:(NSUInteger)arg1;
- (void*)_getDBRecordOfEntityWithRecordID:(NSInteger)arg1;
- (void*)_getDBRecordOfEntityWithRowid:(long long)arg1;
- (void*)getDBRecordOfEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)_getIndexOfMLSRecord:(void*)arg1;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (void)evaluate;
- (id)entityAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfEntity:(id)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (id)containingPlaylist;
- (unsigned long)containedMediaTypesForEntityAtIndex:(NSUInteger)arg1;

@end
