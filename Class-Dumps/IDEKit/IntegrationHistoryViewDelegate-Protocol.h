//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IntegrationHistoryView, NSDate, NSIndexSet;

@protocol IntegrationHistoryViewDelegate <NSObject>

@optional
- (NSDate *)integrationDateForIndex:(unsigned long long)arg1;
- (long long)integrationNumberForIndex:(unsigned long long)arg1;
- (void)historyView:(IntegrationHistoryView *)arg1 didSelectIntegrationsAtIndexes:(NSIndexSet *)arg2;
@end
