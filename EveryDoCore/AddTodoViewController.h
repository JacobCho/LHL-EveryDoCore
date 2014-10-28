//
//  AddTodoViewController.h
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AddTodoViewController : UIViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextField *descriptionTextField;
@property (weak, nonatomic) IBOutlet UILabel *priorityNumberLabel;
@property (weak, nonatomic) IBOutlet UISlider *prioritySlider;
- (IBAction)sliderValueChanged:(UISlider *)sender;
- (IBAction)doneBarButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)cancelBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
