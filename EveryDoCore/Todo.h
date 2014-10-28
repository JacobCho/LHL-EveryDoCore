//
//  Todo.h
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Todo : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * taskDescription;
@property (nonatomic, retain) NSNumber * priorityNumber;
@property (nonatomic, retain) NSNumber * isCompleted;

@end
