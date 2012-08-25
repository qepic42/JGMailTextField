//
//  JGMailTextField.h
//  JGMailTextField
//
//  Created by Jan Galler on 25.08.12.
//  Copyright (c) 2012 pq-developing.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface JGMailTextField : NSTextField <NSTextFieldDelegate>

- (void)setupValidateMailWithText:(NSString *)text;
- (BOOL)validateEmailWithText:(NSString *)inputText;

@end
