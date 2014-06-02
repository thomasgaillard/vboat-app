//
//  AppDelegate.h
//  VBoatGestion
//
//  Created by Thomas Gaillard on 14/01/2014.
//  Copyright (c) 2014 V-Boat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Embarcation.h"

@class CustomTabBarViewController;


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator ;
@property (nonatomic,strong)NSArray* arrayEmbarcations;
@property (nonatomic,strong)NSArray* arrayLocs;
@property (nonatomic,strong)NSArray* arrayFacts;
@property (nonatomic,strong)NSArray* arrayPaiements;

-(NSArray*)getAllEmbarcations;
-(NSArray*)getAllLocs;
-(NSArray*)getAllFactsEnCours;
-(NSArray*)getAllPaiements;
-(Location*)returnInstantiateLoc;

@end
