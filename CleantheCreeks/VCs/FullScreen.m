//
//  FullScreen.m
//  CTC
//
//  Created by Samuel Cardo on 5/23/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import "FullScreen.h"

@implementation FullScreen
-(void)viewDidLoad
{
    [self.imageView setImage:self.img];
}
- (IBAction)close:(id)sender {
    [self dismissVC];
}
@end
