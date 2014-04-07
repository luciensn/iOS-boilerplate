//
//  CoreDataManager.h
//
//  Created by Scott Lucien on 4/3/14.
//  Copyright (c) 2014 Scott Lucien. All rights reserved.
//

@import Foundation;
@import CoreData;

@interface CoreDataManager : NSObject

// Class Methods
+ (CoreDataManager *)sharedManager;

// Properties
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

// Instance Methods
- (void)saveContext;

@end
