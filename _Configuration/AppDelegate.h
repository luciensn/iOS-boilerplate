//
//  AppDelegate.h
//
//  Created by Scott Lucien on 4/3/14.
//  Copyright (c) 2014 Scott Lucien. All rights reserved.
//

@import UIKit;

#import "BaseViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

// Class Methods
+ (AppDelegate *)appDelegate;

// Properties
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BaseViewController *currentViewController;

// Public Methods
- (NSURL *)applicationDocumentsDirectory;

@end
