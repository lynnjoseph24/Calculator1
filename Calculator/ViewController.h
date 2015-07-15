//
//  ViewController.h
//  Calculator
//
//  Created by Joseph Lynn on 15/07/15.
//  Copyright (c) 2015 Joseph Lynn. All rights reserved.
//

#import <UIKit/UIKit.h>

int operation;
double displayNumber;
double resultNumber;
bool isDecimal;




@interface ViewController : UIViewController {
    
    __weak IBOutlet UILabel *result;
    
}

-(void) setResultNumber:(int)theNumber;
-(void) operationWithNumber : (int)theNumber;


- (IBAction)AC:(id)sender;
- (IBAction)plusMinus:(id)sender;
- (IBAction)divide:(id)sender;
- (IBAction)multiply:(id)sender;
- (IBAction)add:(id)sender;
- (IBAction)subtract:(id)sender;
- (IBAction)dot:(id)sender;
- (IBAction)equals:(id)sender;
- (IBAction)one:(id)sender;
- (IBAction)two:(id)sender;
- (IBAction)three:(id)sender;
- (IBAction)four:(id)sender;
- (IBAction)five:(id)sender;
- (IBAction)six:(id)sender;
- (IBAction)seven:(id)sender;
- (IBAction)eight:(id)sender;
- (IBAction)nine:(id)sender;
- (IBAction)zero:(id)sender;


@end

