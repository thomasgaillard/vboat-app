//
//  GrilleTarifaireBateau.h
//  VBoatGestion
//
//  Created by Thomas Gaillard on 18/03/2014.
//  Copyright (c) 2014 V-Boat. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GrilleTarifaireBateau : NSObject

+ (NSMutableArray*)prix;
+ (void)prix:(NSMutableArray*)nouveauPrix;

@end