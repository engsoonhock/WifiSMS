/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, CPZArchive;



@interface OCPZipPackage : OCPPackage 
{
    CPZArchive *mArchive;
    NSMutableDictionary *mParts;
}


- (id)initWithPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)partForLocation:(id)arg1;
- (id)initWithArchive:(id)arg1;

@end
