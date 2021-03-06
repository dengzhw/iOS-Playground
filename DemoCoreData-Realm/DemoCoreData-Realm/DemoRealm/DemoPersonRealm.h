//
//  DemoPersonRealm.h
//  DemoCoreData-Realm
//
//  Created by Chris Hu on 16/6/16.
//  Copyright © 2016年 com.icetime17. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PersonRealm.h"

@protocol DemoPersonRealmDelegate <NSObject>

- (void)DemoPersonRealmUpdated;

@end

@interface DemoPersonRealm : NSObject

@property (nonatomic, weak) id<DemoPersonRealmDelegate> delegateUpdated;

+ (instancetype)sharedInstance;

- (void)addPersonRealm;

- (void)deletePersonRealm;

- (void)updatePersonRealm;

- (RLMResults *)queryPersonRealm;

- (RLMResults *)queryPersonRealmSortedBy:(NSString *)sortedProperty;

- (RLMResults *)queryPersonRealmFilteredBy:(NSString *)filterCondition;

@end
