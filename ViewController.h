//
//  ViewController.h
//  Thermostat
//
//  Created by Bryan  Miller on 6/21/16.
//  Copyright © 2016 TheIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UISlider *slider;

@property (nonatomic, weak) IBOutlet UILabel *ThermostatLabel;

@property (nonatomic, weak) IBOutlet UISegmentedControl *CandF;


@end

