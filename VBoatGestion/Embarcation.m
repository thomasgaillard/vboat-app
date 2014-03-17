//
//  Embarcation.m
//  VBoatGestion
//
//  Created by Thomas Gaillard on 17/03/2014.
//  Copyright (c) 2014 V-Boat. All rights reserved.
//

#import "Embarcation.h"
#import "Location.h"

@implementation Embarcation

-(void)depart{
    NSLog(@"Bateau 1 saluuuuuuut");
    self.etat=@"enlocation";
    [self.location lancerLocation];
}

-(void)retour{
    self.etat=@"disponible";
    [self.location cloturerLocation];
    [self affecterLocation:[Location new]];
}

-(void)rendreIndisponible{
    self.etat=@"indisponible";
}

-(void)rendreDisponible{
    NSLog(@"Bateau 1 dispo");
    self.etat=@"disponible";
    [self affecterLocation:[Location new]];
}

-(void)affecterLocation:(Location*)loc{
    self.location = loc;
    [self.location affecterEmbarcation: self];
}

@end