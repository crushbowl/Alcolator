//
//  ViewController.h
//  Alcolator
//
//  Created by joy on 9/18/15.
//  Copyright © 2015 JanL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;

@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

@property (nonatomic) float result;


- (void)buttonPressed:(UIButton *) sender;


@end

