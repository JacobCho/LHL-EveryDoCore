//
//  CoreDataHelper.h
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface CoreDataHelper : NSObject

+(NSManagedObjectContext *)managedObjectContext;

@end
