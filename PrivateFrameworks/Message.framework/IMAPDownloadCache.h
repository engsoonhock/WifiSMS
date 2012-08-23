/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;



@interface IMAPDownloadCache : NSObject 
{
    NSMutableArray *_downloads;
}


- (void)dealloc;
- (id)downloadForMessage:(id)arg1;
- (id)downloadForUid:(unsigned long)arg1 section:(id)arg2 length:(unsigned long)arg3;
- (id)downloadForUid:(unsigned long)arg1 section:(id)arg2 expectedLength:(unsigned long)arg3;
- (id)downloadForUid:(unsigned long)arg1 section:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)handleFetchResponse:(id)arg1 forUid:(unsigned long)arg2;
- (void)handleFetchResponses:(id)arg1;
- (void)processResultsForUid:(unsigned long)arg1;
- (void)cleanUpDownloadsForUid:(unsigned long)arg1;
- (void)addCommandsForDownload:(id)arg1 toPipeline:(id)arg2;

@end
