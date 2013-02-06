//
//  CloudableViewController.h
//  cloudable
//
//  Created by Nathan Fraenkel on 1/31/13.
//  Copyright (c) 2013 Nathan Fraenkel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface CloudableViewController : UIViewController <NSURLConnectionDataDelegate, UIAlertViewDelegate, UITextFieldDelegate, UIScrollViewDelegate> {
    NSMutableData *_data;
}
@property (weak, nonatomic) IBOutlet UIScrollView *scrolley;
@property (weak, nonatomic) IBOutlet UIView *greyBGView;
@property (weak, nonatomic) IBOutlet UILabel *errorMessageLabel;
@property (weak, nonatomic) IBOutlet UILabel *cloudCountLabel;
@property (weak, nonatomic) IBOutlet UITextField *firstNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *lastNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *emailAddressTextField;
@property (weak, nonatomic) IBOutlet UIButton *requestInviteButton;

- (IBAction)requestButtonTouched:(id)sender;

@end
