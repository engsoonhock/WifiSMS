/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString;



@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol>
{
    NSUInteger _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    NSInteger _cpuType;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    NSInteger _pid;
    NSInteger _ppid;
    struct timeval { 
        NSInteger tv_sec; 
        NSInteger tv_usec; 
    } _startTime;
}

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(NSInteger)arg1;
+ (NSInteger)processParentId:(NSInteger)arg1;

- (id)init;
- (id)initWithPid:(NSInteger)arg1;
- (id)initWithTask:(NSUInteger)arg1;
- (void)dealloc;
- (void)finalize;
- (struct timeval { NSInteger x1; NSInteger x2; })startTime;
- (id)envVars;
- (id)procTableName;
- (id)_nameFromCommandLine:(NSInteger)arg1;
- (id)realAppName;
- (id)requestedAppName;
- (id)firstArgument;
- (id)userAppName;
- (id)name;
- (id)description;
- (NSInteger)pid;
- (NSInteger)ppid;
- (NSUInteger)task;
- (void)update;
- (BOOL)isApp;
- (BOOL)isMachO;
- (BOOL)isCFM;
- (NSInteger)cpuType;
- (BOOL)isNative;
- (BOOL)isRunning;
- (BOOL)terminate;
- (BOOL)signal:(NSInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSInteger)compare:(id)arg1;
- (NSInteger)compareByName:(id)arg1;
- (NSInteger)compareByUserAppName:(id)arg1;
- (NSUInteger)hash;

@end
