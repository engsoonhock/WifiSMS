/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString, NSMutableSet, ASMailMessage;



@interface ASFolderItemsSyncTask : ASTask <NSCopying>
{
    NSString *_folderID;
    NSString *_previousSyncKey;
    NSInteger _type;
    NSArray *_commands;
    NSMutableSet *_rejectedServerIds;
    BOOL _isInitialSync;
    BOOL _willUpdate;
    BOOL _moreAvailable;
    BOOL _isResyncAfterConnectionFailed;
    BOOL _haveShortcut121Response;
    NSInteger _numReplacedItems;
    BOOL _isSpinning;
    NSInteger _bodyTruncationBytes;
    NSInteger _mimeSupport;
    NSInteger _filterDays;
    ASMailMessage *_streamingMailMessage;
}


- (NSInteger)commandCode;
- (void)_setSpinning:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFolderID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSInteger)mimeSupport;
- (void)setMIMESupport:(NSInteger)arg1;
- (NSInteger)bodyType;
- (void)setBodyTruncationBytes:(NSInteger)arg1;
- (NSInteger)filterDays;
- (void)setFilterDays:(NSInteger)arg1;
- (id)previousSyncKey;
- (id)folderID;
- (BOOL)willUpdate;
- (void)setWillUpdate:(BOOL)arg1;
- (void)setPreviousSyncKey:(id)arg1;
- (id)commands;
- (void)setCommands:(id)arg1;
- (void)appendCommandData:(id)arg1;
- (void)appendSupportedFieldsData:(id)arg1;
- (NSInteger)_mimeSupportCode;
- (NSInteger)_bodyTruncationCode;
- (NSInteger)_mimeTruncationCode;
- (NSInteger)_filterCode;
- (id)requestBody;
- (void)setSyncClassType:(NSInteger)arg1;
- (NSInteger)syncClassType;
- (void)_handleChangedLeaf:(id)arg1 addedChangesPtr:(id*)arg2 modifiedChangesPtr:(id*)arg3 removedChangesPtr:(id*)arg4;
- (void)_handleResponseToLeaf:(id)arg1 addedResponsesPtr:(id*)arg2 modifiedResponsesPtr:(id*)arg3 removedResponsesPtr:(id*)arg4 fetchedResponsesPtr:(id*)arg5;
- (NSInteger)handleStreamOperation:(NSInteger)arg1 forCodePage:(NSInteger)arg2 tag:(NSInteger)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(NSInteger)arg6;
- (id)replacementObjectForEmailItem:(id)arg1;
- (NSInteger)connectionActionForResponse:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (void)_addRejectedServerId:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)setIsInitialSync:(BOOL)arg1;
- (BOOL)isInitialSync;
- (void)setMoreAvailable:(BOOL)arg1;
- (BOOL)moreAvailable;
- (double)percentComplete;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (id)streamingMailMessage;
- (void)setStreamingMailMessage:(id)arg1;
- (id)rejectedServerIds;
- (BOOL)isResyncAfterConnectionFailed;
- (void)setIsResyncAfterConnectionFailed:(BOOL)arg1;

@end
