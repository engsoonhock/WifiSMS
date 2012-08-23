/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class STRunCaloriesLabel, STRunProgressView, <STRunViewDelegate>, STRunDistanceLabel, STAnimatableButton, STRunPaceLabel, UIView, STShadowLabel, UIImageView, UIButton, STRunTimeLabel, NSTimer;



@interface STRunView : UIView 
{
    <STRunViewDelegate> *_delegate;
    NSTimer *_timer;
    double _elapsedWorkoutTime;
    double _estimatedElapsedWorkoutTime;
    double _lastWorkoutNotificationTime;
    UIView *_rotationContainer;
    NSInteger _orientation;
    NSInteger _interface;
    UIButton *_leftButton;
    UIButton *_rightButton;
    STAnimatableButton *_endWorkoutButton;
    UIButton *_previousTrackButton;
    UIButton *_nextTrackButton;
    UIImageView *_transportControlsDivider;
    STRunTimeLabel *_runTimeLabel;
    STRunDistanceLabel *_runDistanceLabel;
    STRunPaceLabel *_runPaceLabel;
    STRunCaloriesLabel *_runCaloriesLabel;
    STShadowLabel *_nowPlayingSongLabel;
    STRunProgressView *_runProgressView;
    float _progressToGoal;
    UIImageView *_powerSongGlowView;
    NSTimer *_considerSeekTimer;
    NSInteger _throttledWorkoutState;
    struct { 
        unsigned int timerPaused : 1; 
        unsigned int shouldStartTimer : 1; 
        unsigned int isLockScreen : 1; 
        unsigned int animateForResumeEventsOnly : 1; 
        unsigned int canHighlightPowerSong : 1; 
        unsigned int validPaceReceived : 1; 
        unsigned int noMusic : 1; 
        unsigned int seekHandled : 1; 
        unsigned int seekAllowed : 1; 
        unsigned int needsNowPlayingLayout : 1; 
        unsigned int forceTimeExtrapolation : 1; 
        unsigned int goalCompleted : 1; 
        unsigned int useMetricDistance : 1; 
        unsigned int forceMetricForDistanceOnly : 1; 
        unsigned int throttleNextPauseResume : 1; 
        unsigned int shouldControlMusic : 1; 
        unsigned int unused : 16; 
    } _runFlagsBitfield;
}

@property BOOL isLockScreen;
@property BOOL animateForResumeEventsOnly;
@property <STRunViewDelegate> *delegate; /* unknown property attribute: V_delegate */
@property NSInteger orientation; /* unknown property attribute: V_orientation */
@property NSInteger interface; /* unknown property attribute: V_interface */


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_layoutBottomButtons;
- (void)_layoutMainButtonsForWorkoutType:(NSInteger)arg1;
- (void)_layoutLabelsForWorkoutType:(NSInteger)arg1;
- (void)_layoutPrimaryLabelForWorkoutType:(NSInteger)arg1;
- (void)_layoutSecondaryLabelsForWorkoutType:(NSInteger)arg1;
- (void)_layoutTransportControlsDivider;
- (void)_layoutNowPlayingLabelForWorkoutType:(NSInteger)arg1;
- (void)_layoutRunTimeInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutRunDistanceInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutPaceInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutCaloriesInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutLabel:(id)arg1 inPosition:(NSInteger)arg2 isLandscape:(BOOL)arg3 isLockedMusicInterface:(BOOL)arg4 hasProgressView:(BOOL)arg5;
- (BOOL)isLockScreen;
- (void)setIsLockScreen:(BOOL)arg1;
- (BOOL)animateForResumeEventsOnly;
- (void)setAnimateForResumeEventsOnly:(BOOL)arg1;
- (void)setInterface:(NSInteger)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)suspend;
- (void)resume;
- (void)resumeEventsOnly;
- (void)_finishResumeEventsOnly;
- (void)resumeWorkout;
- (void)selectPowerSong;
- (void)_updateProgressViewWithDictionary:(id)arg1;
- (void)_updateFromLatestWorkoutProgress;
- (void)_changeMusic;
- (void)_start;
- (void)_cancel;
- (void)_pause;
- (void)_pauseWorkoutForResume:(BOOL)arg1;
- (void)_resume;
- (void)_resumeWorkoutForResume:(BOOL)arg1;
- (void)_unthrottlePauseResume;
- (void)_stop;
- (void)_previousTrack;
- (void)_nextTrack;
- (void)_cancelConsiderSeeking:(id)arg1;
- (void)_beginConsiderSeeking:(id)arg1;
- (void)_endSeeking:(id)arg1;
- (void)_considerSeekTimerFired:(id)arg1;
- (void)_tick:(id)arg1;
- (void)_configureButtonsForWorkout;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (id)_greenButtonImage;
- (id)_greenButtonDownImage;
- (id)_orangeButtonImage;
- (id)_orangeButtonDownImage;
- (id)_redButtonImage;
- (id)_redButtonDownImage;
- (id)_startWorkoutButtonImage;
- (id)_startWorkoutButtonDownImage;
- (id)_startWorkoutLandscapeButtonImage;
- (id)_startWorkoutLandscapeButtonDownImage;
- (id)_endWorkoutButtonImage;
- (id)_endWorkoutButtonDownImage;
- (id)_endWorkoutLandscapeButtonImage;
- (id)_endWorkoutLandscapeButtonDownImage;
- (id)_powersongButtonImage;
- (id)_powersongButtonDownImage;
- (id)_powersongLandscapeButtonImage;
- (id)_powersongLandscapeButtonDownImage;
- (void)_sportsInfoArrived:(id)arg1;
- (void)_empedSearchStateChanged:(id)arg1;
- (void)_workoutDidPause:(id)arg1;
- (void)_workoutDidResume:(id)arg1;
- (void)_receiverStateChanged:(id)arg1;
- (void)_startWorkoutEventFromRemote:(id)arg1;
- (void)_playPowerSongEventFromRemote:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_nowPlayingChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSInteger)orientation;
- (NSInteger)interface;

@end
