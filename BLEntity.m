//
//  BLEntity.m
//  Blackness
//
//  Created by Kyle Reynolds on 1/1/14.
//  Copyright (c) 2014 Sky Print. All rights reserved.
//

#import "BLEntity.h"

@implementation BLEntity

@synthesize x;
@synthesize y;
-(NSString*)attribute:(NSString*)userAttributeSearch {
    return [attributes valueForKey:userAttributeSearch];
}

-(id)initWithName:(NSString*)userEntityName {
    name = userEntityName;
    file = [self getFileFromName:userEntityName];
    attributes = [[NSMutableDictionary alloc] initWithContentsOfFile:file];
    if(prototype == nil)
        prototype = [self attribute:@"prototype"];
    formatter = [[NSNumberFormatter alloc] init];
    return self;
}

-(id)initWithPrototype:(NSString *)userPrototype {
    prototype = userPrototype;
    return [self initWithName:[userPrototype stringByAppendingString:@"-temp"]];
}


-(NSString*)getFileFromName:(NSString*)userMasterName {
    return [working_directory stringByAppendingString:userMasterName];
}

-(void)setAttribute: (NSString*)userAttribute to:(NSString*)userValue {
    [attributes setValue:userValue forKey:userAttribute];
}

-(BOOL)attribute:(NSString*)userAttribute is:(NSString *)userValue {
    numberstore = [formatter numberFromString:userValue];
    if([attributes objectForKey:(userAttribute)]) {
        if(numberstore != nil)
            return ([attributes valueForKey:userAttribute] == numberstore);
        
        return ([[attributes valueForKey:userAttribute] isEqualToString:userValue]);
    }
    return NO;
}

@synthesize prototype;
@synthesize name;

@end
