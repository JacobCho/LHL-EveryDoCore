//
//  DetailViewController.h
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Todo.h"
#import "User.h"

@class DetailViewController;

@protocol DetailViewControllerDelegate <NSObject>

-(void)dataObjectChanged:(DetailViewController *)dvc forTodo:(Todo *)todo;

@end

@interface DetailViewController : UIViewController <UITextFieldDelegate>

@property (weak , nonatomic) id<DetailViewControllerDelegate> delegate;
@property (strong, nonatomic) Todo *todo;
@property (strong, nonatomic) User *user;
@property (strong, nonatomic) NSIndexPath *indexPath;

@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextField *descriptionTextField;
@property (weak, nonatomic) IBOutlet UILabel *priorityNumberLabel;
@property (weak, nonatomic) IBOutlet UISlider *prioritySlider;
@property (weak, nonatomic) IBOutlet UISegmentedControl *completedControl;
@property (weak, nonatomic) IBOutlet UITextField *userTextField;

- (IBAction)sliderValueChanged:(UISlider *)sender;
- (IBAction)completedControlChanged:(UISegmentedControl *)sender;
- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender;


@end

