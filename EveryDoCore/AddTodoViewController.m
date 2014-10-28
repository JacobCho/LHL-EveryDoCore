//
//  AddTodoViewController.m
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import "AddTodoViewController.h"
#import "Todo.h"
#import "CoreDataHelper.h"
#import "User.h"

@interface AddTodoViewController ()

@end

@implementation AddTodoViewController

-(NSNumber *)transfromFromInt:(int)integer {
    
    NSNumber *number = [[NSNumber alloc] initWithInt:integer];
    
    
    return number;
    
}


- (void)viewDidLoad {
    [super viewDidLoad];

    
    
}



- (IBAction)sliderValueChanged:(UISlider *)sender {
    self.priorityNumberLabel.text = [NSString stringWithFormat:@"%d", (int)self.prioritySlider.value];
}

- (IBAction)doneBarButtonItemPressed:(id)sender {
    NSManagedObjectContext *context = [CoreDataHelper managedObjectContext];
    Todo *todo = [NSEntityDescription insertNewObjectForEntityForName:@"Todo" inManagedObjectContext:context];
    User *user = [NSEntityDescription insertNewObjectForEntityForName:@"User" inManagedObjectContext:context];
    
    todo.title = self.titleTextField.text;
    todo.taskDescription = self.descriptionTextField.text;
    todo.priorityNumber = [self transfromFromInt:[[NSString stringWithFormat:@"%d",(int)self.prioritySlider.value] integerValue]];
    user.name = self.userTextField.text;
    todo.user = user;
    
    
    NSError *error = nil;
    if (![context save:&error]) {
        NSLog(@"Whoops, couldn't save: %@", [error localizedDescription]);
    }
    
    [self.navigationController popViewControllerAnimated:TRUE];

    
}

- (IBAction)cancelBarButtonItemPressed:(UIBarButtonItem *)sender {
    
    [self.navigationController popViewControllerAnimated:TRUE];
}
@end
