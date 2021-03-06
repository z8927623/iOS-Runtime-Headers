/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSDictionary, NSString, NSTimer;

@interface SWRemoteRunWorkoutProxyClient : SWRunWorkoutProxy {
    NSString *_currentAlbumName;
    NSString *_currentArtistName;
    NSString *_currentSongName;
    float _goal;
    NSString *_goalType;
    BOOL _hasEverStarted;
    BOOL _hasPowerSong;
    int _musicSelection;
    NSString *_powerSongName;
    NSString *_presetGoal;
    NSString *_sensorSearchState;
    BOOL _shouldControlMusic;
    NSTimer *_updateTimer;
    NSDictionary *_workoutData;
    NSString *_workoutState;
}

- (void)_checkinWithServer;
- (void)_handlePropertyUpdateNotification:(id)arg1;
- (void)_nowPlayingChanged:(id)arg1;
- (void)_sensorSearchStateChanged:(id)arg1;
- (void)_workoutStateChanged:(id)arg1;
- (void)activateWorkout;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (id)currentAlbumName;
- (id)currentArtistName;
- (id)currentSongName;
- (void)dealloc;
- (void)endSeeking;
- (void)endWorkout;
- (void)goToNowPlaying;
- (float)goal;
- (id)goalType;
- (BOOL)hasEverStarted;
- (BOOL)hasPowerSong;
- (id)init;
- (int)musicSelection;
- (void)pauseMusic;
- (void)pauseWorkout;
- (void)playMusic;
- (void)playOnDemandPrompt;
- (void)playPowerSong;
- (id)powerSongName;
- (void)prepareToActivateWorkout;
- (id)presetGoal;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (id)sensorSearchState;
- (BOOL)shouldControlMusic;
- (id)workoutData;
- (id)workoutState;

@end
