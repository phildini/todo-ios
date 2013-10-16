//
//  TodoListController.h
//  yatl
//
//  Created by Philip James on 10/15/13.
//  Copyright (c) 2013 Philip James. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TodoListController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) NSMutableArray *todos;

@end
