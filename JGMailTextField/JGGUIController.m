//
//  JGGUIController.m
//  JGMailTextField
//
//  Created by Jan Galler on 25.08.12.
//  Copyright (c) 2012 pq-developing.com. All rights reserved.
//

#import "JGGUIController.h"

@implementation JGGUIController

- (id)init
{
    self = [super init];
    if (self) {
        
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(setMailIsFail) name:@"mailIsFail" object:nil];
        
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(setMailIsOK) name:@"mailIsOk" object:nil];
        
    }
    return self;
}

- (void)setMailIsOK
{
     self.errorTextField.stringValue = @"Nice mail address!";
}

- (void)setMailIsFail
{
    self.errorTextField.stringValue = @"Please enter a real mail address!";
}

@end
