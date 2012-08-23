/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASSettingsTaskUserInformationResponse, NSNumber;



@interface ASSettingsTaskResponse : ASItem 
{
    NSNumber *_status;
    ASSettingsTaskUserInformationResponse *_userInformation;
}

@property(retain) ASSettingsTaskUserInformationResponse *userInformation; /* unknown property attribute: V_userInformation */
@property(retain) NSNumber *status; /* unknown property attribute: V_status */

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (void)dealloc;
- (id)description;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)userInformation;
- (void)setUserInformation:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;

@end
