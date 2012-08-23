/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIViewController.h>
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UINavigationController, NSArray, UITableView;

@interface CKLinksController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
	id _delegate;
	UINavigationController* _navigationController;
	NSArray* _linkProps;
	UITableView* _table;
}
-(id)initWithNavigationController:(id)navigationController;
-(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)setLinkProperties:(id)properties;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
@end

