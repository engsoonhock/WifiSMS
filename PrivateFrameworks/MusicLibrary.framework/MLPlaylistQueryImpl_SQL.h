/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLPlaylistQueryImpl_SQL : MLQueryImpl_SQL 
{
}


- (void)playlistsAvailableDidChangeNotification:(id)arg1;
- (struct __CFArray { }*)copyOfArrayByFilteringOutDistinguisedPlaylists:(struct __CFArray { }*)arg1;
- (void)evaluate;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned short)firstCharacterForStringProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (id)entityAtIndex:(NSUInteger)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;

@end
