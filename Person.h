//
//  Person.h
//  A2delegate
//
//  Created by MS on 15-6-2.
//  Copyright (c) 2015年 qf. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AttackProtocel <NSObject>

- (void)killGhost:(int)num;

@end



@interface Person : NSObject

@property (nonatomic, assign) id <AttackProtocel> deletage;

- (void)wantKillGhost:(int)num;


//声明这个方法的目的是代理杀完以后告诉我杀怪的结果
- (void)delegateKillNum:(int)num;

@end








