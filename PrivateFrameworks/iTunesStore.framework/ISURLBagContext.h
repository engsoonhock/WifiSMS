/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber;



@interface ISURLBagContext : NSObject <NSCopying>
{
    NSInteger _bagType;
    NSNumber *_userIdentifier;
}

@property(readonly) NSString *cacheKey;
@property(retain) NSNumber *userIdentifier; /* unknown property attribute: V_userIdentifier */
@property NSInteger bagType; /* unknown property attribute: V_bagType */

+ (id)contextWithBagType:(NSInteger)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cacheKey;
- (id)userIdentifier;
- (void)setUserIdentifier:(id)arg1;
- (NSInteger)bagType;
- (void)setBagType:(NSInteger)arg1;

@end
