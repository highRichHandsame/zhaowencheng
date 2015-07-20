//
//  Person.m
//  A2delegate
//
//  Created by MS on 15-6-2.
//  Copyright (c) 2015年 qf. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void)wantKillGhost:(int)num
{
    NSLog(@"想杀%d个怪，但是没有能力",num);
    
    [self.deletage killGhost:num];
}

- (void)delegateKillNum:(int)num
{
    NSLog(@"代理帮我杀了%d个怪",num);
}

@end
