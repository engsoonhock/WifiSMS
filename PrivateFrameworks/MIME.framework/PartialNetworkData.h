/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;



@interface PartialNetworkData : NSObject 
{
    NSMutableData *_rawData;
    NSMutableData *_unixData;
}


- (void)appendRawData:(id)arg1;
- (void)setRawData:(id)arg1;
- (id)rawData;
- (NSUInteger)rawDataLength;
- (id)dataWithUnixLineEndings;
- (id)copyDataWithUnixLineEndings;
- (void)dealloc;
- (void)purgeCaches;

@end
