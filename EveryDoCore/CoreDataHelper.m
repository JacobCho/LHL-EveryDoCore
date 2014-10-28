//
//  CoreDataHelper.m
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import "CoreDataHelper.h"

@interface CoreDataHelper()

@end

@implementation CoreDataHelper

+(NSManagedObjectContext *)managedObjectContext {
    
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    
    if ([delegate performSelector:@selector(managedObjectContext)]) context = [delegate managedObjectContext];
        
        return context;
}



@end


