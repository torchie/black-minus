//
//  BLWorld.m
//  Blackness
//
//  Created by Kyle Reynolds on 1/11/14.
//  Copyright (c) 2014 Sky Print. All rights reserved.
//

#import "BLWorld.h"
#import "BLEntity.h"

@implementation BLWorld

-(id)init {
    entity_list = [[NSMutableArray alloc] init];
    return self;
}

+(BLWorld*)sharedWorld {
    static BLWorld* sharedInstance;
    
    @synchronized (self) {
        if(!sharedInstance) {
            sharedInstance = [[self alloc] init];
        }
    }
    return sharedInstance;
}

-(void)add:(BLEntity*)userEntity {
    [entity_list addObject:userEntity];
}

+(BOOL)load {
    return YES;
}

+(BOOL)save {
    return YES;
}

+(BOOL)append {
    return YES;
}

-(NSMutableArray*) all {
    return entity_list;
}

-(NSMutableArray*)entitiesOfAttribute:(NSString *)userAttribute equals:(NSString *)userMatchValue {
    NSMutableArray* return_list = [NSMutableArray init];
    for(id entity in entity_list) {
        if([entity attribute:userAttribute is:userAttribute])
            [return_list addObject:entity];
    }
    
    return return_list;
}

@end
