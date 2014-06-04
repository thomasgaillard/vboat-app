//
//  Prix.h
//  VBoatGestion
//
//  Created by Maxence Mermoz on 04/06/2014.
//  Copyright (c) 2014 V-Boat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Prix : NSManagedObject

@property (nonatomic, retain) NSString * montant;
@property (nonatomic, retain) NSString * temps;

@end
