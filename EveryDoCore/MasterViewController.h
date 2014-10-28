//
//  MasterViewController.h
//  EveryDoCore
//
//  Created by Jacob Cho on 2014-10-28.
//  Copyright (c) 2014 Jacob Cho. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>


@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

