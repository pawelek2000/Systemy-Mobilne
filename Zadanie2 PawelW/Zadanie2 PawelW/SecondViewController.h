//
//  SecondViewController.h
//  Zadanie2 PawelW
//
//  Created by student on 19/10/2021.
//  Copyright © 2021 pb. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;
@protocol SecondViewControllerDelegate <NSObject>
- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;
@end

@interface SecondViewController : UIViewController


@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;
@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property NSString *surname;

-(IBAction)enter;

@end

NS_ASSUME_NONNULL_END
