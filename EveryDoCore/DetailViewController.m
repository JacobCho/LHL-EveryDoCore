//
//  DetailViewController.m
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import "DetailViewController.h"
#import "MasterViewController.h"



@interface DetailViewController ()

@end

@implementation DetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(Todo *)todo {
    if (self.todo != todo) {
        self.todo = todo;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.todo) {
        
        self.titleTextField.text = self.todo.title;
        self.descriptionTextField.text = self.todo.taskDescription;
        self.priorityNumberLabel.text = [NSString stringWithFormat:@"%d", (int)[self.todo.priorityNumber integerValue]];
        self.prioritySlider.value = [self.todo.priorityNumber integerValue];
        if (self.todo.isCompleted) {
            self.completedControl.selectedSegmentIndex = 1;
        }
        self.user = self.todo.user;
        self.userTextField.text = self.user.name;

    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)sliderValueChanged:(UISlider *)sender {
    self.priorityNumberLabel.text = [NSString stringWithFormat:@"%d", (int)self.prioritySlider.value];
}

- (IBAction)completedControlChanged:(UISegmentedControl *)sender {
    if (self.completedControl.selectedSegmentIndex == 0) {
        
        self.todo.isCompleted = [[NSNumber alloc] initWithInt:0];
    }
    
    if (self.completedControl.selectedSegmentIndex == 1) {
        
        self.todo.isCompleted = [[NSNumber alloc] initWithInt:1];
    }
}

- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender {
    
    self.todo.title = self.titleTextField.text;
    self.todo.taskDescription = self.descriptionTextField.text;
    self.todo.priorityNumber = [[NSNumber alloc] initWithInt: (int)[self.priorityNumberLabel.text integerValue]];
    self.user.name = self.userTextField.text;
    self.todo.user = self.user;
    
    [self.delegate dataObjectChanged:self forTodo:self.todo];
    
    [self.navigationController popViewControllerAnimated:TRUE];
    
}
@end
