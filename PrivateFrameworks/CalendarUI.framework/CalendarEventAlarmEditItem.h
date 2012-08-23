/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */



@interface CalendarEventAlarmEditItem : CalendarEventEditItem 
{
    union { 
        NSInteger triggerInterval; 
        struct { 
            NSInteger year; 
            BOOL month; 
            BOOL day; 
            BOOL hour; 
            BOOL minute; 
            double second; 
        } triggerDate; 
    } _trigger[2];
    unsigned int _triggerIsAbsolute : 2;
    unsigned int _alarmCount : 2;
    unsigned int _maxAlarmCount : 2;
    unsigned int _dirty : 1;
}


- (id)init;
- (id)identifier;
- (BOOL)shouldCancelEditingForModel:(id)arg1;
- (void)absorbValueFromOccurrence:(struct CalEventOccurrence { }*)arg1 givenModel:(id)arg2 editModel:(id)arg3;
- (void)absorbValueFromView:(id)arg1 intoEditModel:(id)arg2;
- (BOOL)configureForCalendarConstraints:(void*)arg1 withOccurrence:(struct CalEventOccurrence { }*)arg2;
- (id)_createDictionaryRepresentationForAlarmAtIndex:(NSInteger)arg1;
- (id)serializedValue;
- (BOOL)editItemViewDirty:(id)arg1;
- (void)saveIntoEvent:(void*)arg1;
- (BOOL)cellShowsDisclosureForSubitemAtIndex:(NSInteger)arg1;
- (NSInteger)numberOfSubitems;
- (id)_stringValueForTriggerAtIndex:(NSInteger)arg1;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;

@end
