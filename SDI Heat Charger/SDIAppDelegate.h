//
//  SDIAppDelegate.h
//  SDI Heat Charger
//
//  Created by Student on 2/26/13.
//  Copyright (c) 2013 Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SDIAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (NSDictionary*) Get_Heats:(int)StatusId;

- (NSDictionary*) Get_Opperators;//might change to array return

- (NSDictionary*) Get_Formula:(NSString*)ItemId;

- (NSDictionary*) Get_Item_Location:(NSString*)ItemId;

- (void) Inventory_Charge:(NSString*)HeatId item:(NSString*)ItemId batch:(NSString*)BatchId quantity:(double)quantity cost:(double)cost opperator:(NSString*)OpperatorId;

- (int) Get_Weight;//derpderpderp

@end
