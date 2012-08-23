/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */



@interface CalDAVServerVersion : NSObject <NSCopying>
{
    double _version;
}

@property(readonly) NSString *type;
@property(readonly) BOOL supportsTimeRangeFilter;
@property(readonly) BOOL supportsTimeRangeFilterWithoutEndDate;
@property(readonly) NSString *calendarConstraintsResource;
@property(readonly) NSString *calendarConstraintsPath;
@property double version; /* unknown property attribute: V_version */

+ (id)prototypes;
+ (id)versionWithHeader:(id)arg1;
+ (id)versionWithPropertyValue:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)headerVersionPattern;
- (id)type;
- (BOOL)supportsTimeRangeFilter;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (id)calendarConstraintsResource;
- (id)calendarConstraintsPath;
- (id)propertyValue;
- (double)version;
- (void)setVersion:(double)arg1;

@end
