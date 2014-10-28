//
//  DetailViewController.h
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Todo.h"
#import <CoreData/CoreData.h>

@class DetailViewController;

@protocol DetailViewControllerDelegate <NSObject>

-(void)dataObjectChanged:(DetailViewController *)dvc forTodo:(Todo *)todo;

@end

@interface DetailViewController : UIViewController

@property (weak , nonatomic) id<DetailViewControllerDelegate> delegate;
@property (strong, nonatomic) Todo *todo;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSIndexPath *indexPath;

@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextField *descriptionTextField;
@property (weak, nonatomic) IBOutlet UILabel *priorityNumberLabel;
@property (weak, nonatomic) IBOutlet UISlider *prioritySlider;
@property (weak, nonatomic) IBOutlet UISegmentedControl *completedControl;

- (IBAction)sliderValueChanged:(UISlider *)sender;
- (IBAction)completedControlChanged:(UISegmentedControl *)sender;
- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender;


@end

