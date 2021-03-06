/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMSetHttpCookieRequest : PBRequest 
{
    BOOL _gmmInstalled;
    BOOL _hasGmmInstalled;
    BOOL _gmmInvokedViaMimeType;
    BOOL _gmmInvokedViaUrl;
}

@property BOOL gmmInvokedViaUrl; /* unknown property attribute: V_gmmInvokedViaUrl */
@property BOOL gmmInvokedViaMimeType; /* unknown property attribute: V_gmmInvokedViaMimeType */
@property(readonly) BOOL hasGmmInstalled; /* unknown property attribute: V_hasGmmInstalled */
@property BOOL gmmInstalled; /* unknown property attribute: V_gmmInstalled */


- (id)init;
- (void)dealloc;
- (void)setGmmInstalled:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (Class)responseClass;
- (NSUInteger)requestTypeCode;
- (id)description;
- (BOOL)gmmInvokedViaUrl;
- (void)setGmmInvokedViaUrl:(BOOL)arg1;
- (BOOL)gmmInvokedViaMimeType;
- (void)setGmmInvokedViaMimeType:(BOOL)arg1;
- (BOOL)hasGmmInstalled;
- (BOOL)gmmInstalled;

@end
