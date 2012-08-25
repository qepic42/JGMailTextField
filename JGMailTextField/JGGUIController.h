//
//  JGGUIController.h
//  JGMailTextField
//
//  Created by Jan Galler on 25.08.12.
//  Copyright (c) 2012 pq-developing.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JGGUIController : NSObject

@property (assign) IBOutlet NSTextField *errorTextField;

- (void)setMailIsOK;
- (void)setMailIsFail;

@end
