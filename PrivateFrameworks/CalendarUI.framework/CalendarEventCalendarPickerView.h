/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarTableController, CalendarModel;



@interface CalendarEventCalendarPickerView : UIPreferencesTable <CalendarView>
{
    CalendarTableController *_tableController;
    CalendarModel *_model;
}

+ (id)navigationTitleForModel:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setModel:(id)arg1;
- (void)cleanUp;
- (void)finishedTransitionIn;
- (void)_calendarsChanged:(id)arg1;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)calendarTableController:(id)arg1 calendarSelected:(void*)arg2;

@end
