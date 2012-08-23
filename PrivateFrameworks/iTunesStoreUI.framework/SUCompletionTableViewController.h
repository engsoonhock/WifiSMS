/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUCompletionTableDelegate>, NSString;



@interface SUCompletionTableViewController : SUTableViewController 
{
    NSInteger _assetTypesForSearchParameters;
    <SUCompletionTableDelegate> *_delegate;
    NSString *_stringToComplete;
    NSString *_urlBagKey;
}

@property(retain) NSString *urlBagKey; /* unknown property attribute: V_urlBagKey */
@property(retain) NSString *stringToComplete; /* unknown property attribute: V_stringToComplete */
@property <SUCompletionTableDelegate> *delegate; /* unknown property attribute: V_delegate */
@property NSInteger assetTypesForSearchParameters; /* unknown property attribute: V_assetTypesForSearchParameters */


- (id)init;
- (void)dealloc;
- (void)loadView;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(NSInteger)arg2;
- (void)setStringToComplete:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_dismissWithPickedItem:(id)arg1;
- (void)_fetchCompletions;
- (id)urlBagKey;
- (void)setUrlBagKey:(id)arg1;
- (id)stringToComplete;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSInteger)assetTypesForSearchParameters;
- (void)setAssetTypesForSearchParameters:(NSInteger)arg1;

@end
