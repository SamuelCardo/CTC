//
//  User.m
//  Clean the Creek
//
//  Created by Samuel Cardo on 29/02/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import <AWSDynamoDB/AWSDynamoDB.h>
#import "User.h"

@implementation User

+ (NSString *)dynamoDBTableName {
    return @"User";
}

+ (NSString *)hashKeyAttribute {
    return @"user_id";
}

@end