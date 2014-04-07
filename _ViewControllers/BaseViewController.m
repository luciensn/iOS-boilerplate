//
//  BaseViewController.m
//
//  Created by Scott Lucien on 4/3/14.
//  Copyright (c) 2014 Scott Lucien. All rights reserved.
//

#import "BaseViewController.h"

@implementation BaseViewController

- (id)initWithNib
{
    NSString *nibName = NSStringFromClass([self class]);
    self = [super initWithNibName:nibName bundle:nil];
    if (self) {
        // initialization
    }
    return self;
}

#pragma mark - View Life Cycle

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    [[AppDelegate appDelegate] setCurrentViewController:self];
}

@end
