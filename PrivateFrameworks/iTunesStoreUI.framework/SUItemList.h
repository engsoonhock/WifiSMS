/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, ISItemInfoDataSource;



@interface SUItemList : NSObject 
{
    NSMutableArray *_groups;
    ISItemInfoDataSource *_itemInfoDataSource;
    NSMutableArray *_items;
}

@property(retain,readonly) NSArray *items;
@property(readonly) NSInteger numberOfSections;
@property(retain) ISItemInfoDataSource *itemInfoDataSource; /* unknown property attribute: V_itemInfoDataSource */


- (void)dealloc;
- (id)items;
- (BOOL)loadFromArray:(id)arg1;
- (NSInteger)numberOfSections;
- (id)indexPathOfItemWithIdentifier:(unsigned long long)arg1;
- (void)insertItems:(id)arg1 atIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (NSInteger)numberOfItemsInSection:(NSInteger)arg1;
- (void)replaceItemAtIndexPath:(id)arg1 withItems:(id)arg2;
- (id)titleForSection:(NSInteger)arg1;
- (id)_copyItemsFromPropertyList:(id)arg1;
- (NSUInteger)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(NSUInteger)arg1;
- (void)_loadGroupsFromItems;
- (id)itemInfoDataSource;
- (void)setItemInfoDataSource:(id)arg1;

@end
