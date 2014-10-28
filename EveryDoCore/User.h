//
//  User.h
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Todo;

@interface User : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *todo;
@end

@interface User (CoreDataGeneratedAccessors)

- (void)addTodoObject:(Todo *)value;
- (void)removeTodoObject:(Todo *)value;
- (void)addTodo:(NSSet *)values;
- (void)removeTodo:(NSSet *)values;

@end
