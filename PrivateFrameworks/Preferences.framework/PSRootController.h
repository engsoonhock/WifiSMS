/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIView, UINavigationBar, NSMutableArray, NSString, NSMutableSet;



@interface PSRootController : NSObject <PSBaseView>
{
    UIView *_contentView;
    UINavigationBar *_navBar;
    NSMutableArray *_controllers;
    NSString *_title;
    NSString *_idStr;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSString *_navBarRightButtonTitle;
    NSInteger _navBarRightButtonStyle;
    BOOL _navBarRightButtonDirty;
    NSMutableSet *_tasks;
    BOOL _deallocating;
    unsigned char _hasTelephony;
}

+ (void)writePreference:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
+ (id)readPreferenceValue:(id)arg1;
+ (BOOL)isOverlay;

- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (id)lastController;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)updateNavButtons;
- (void)setupRootListForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)taskIsRunning:(id)arg1;
- (void)addTask:(id)arg1;
- (void)taskFinished:(id)arg1;
- (BOOL)busy;
- (id)contentView;
- (id)contentViewForTopController;
- (id)controllers;
- (id)specifiers;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setParentController:(id)arg1;
- (id)view;
- (id)navigationTitle;
- (id)navigationItem;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)viewWillRedisplay;
- (void)pushController:(id)arg1;
- (void)handleURL:(id)arg1;
- (BOOL)popControllerWithAnimation:(BOOL)arg1;
- (BOOL)popController;
- (void)pushNavigationItemWithTitle:(id)arg1;
- (void)pushNavigationItem:(id)arg1;
- (void)insertNavigationItem:(id)arg1 atIndexFromEnd:(NSInteger)arg2;
- (void)insertNavigationItem:(id)arg1 atIndex:(NSInteger)arg2;
- (void)navigationBar:(id)arg1 pushedItem:(id)arg2;
- (void)navigationBar:(id)arg1 poppedItem:(id)arg2;
- (void)popNavigationItem;
- (void)popNavigationItemWithAnimation:(BOOL)arg1;
- (void)hideNavigationBarButtons;
- (void)showLeftButton:(id)arg1 withStyle:(NSInteger)arg2 rightButton:(id)arg3 withStyle:(NSInteger)arg4;
- (void)showNavigationBarButtons:(id)arg1 :(id)arg2;
- (void)setNavigationBarEnabled:(BOOL)arg1;
- (void)setPrompt:(id)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)navigationBarButtonClicked:(NSInteger)arg1;
- (void)suspend;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (BOOL)deallocating;
- (BOOL)hasTelephony;
- (void)dealloc;
- (id)parentController;
- (void)lazyLoadBundle:(id)arg1;
- (id)navigationBar;
- (void)setRootController:(id)arg1;
- (id)rootController;
- (void)_pushController:(id)arg1;
- (void)_insertController:(id)arg1 atIndex:(NSInteger)arg2;
- (void)_popController;
- (void)_removeController:(id)arg1;
- (void)viewDidBecomeVisible;
- (void)viewTransitionCompleted;
- (void)popBackToTopController;

@end
