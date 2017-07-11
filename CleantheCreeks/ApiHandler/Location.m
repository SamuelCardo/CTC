//
//  Location.m
//  CleantheCreeks
//
//  Created by Samuel Cardo on 2/3/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//
#import <AWSDynamoDB/AWSDynamoDB.h>
#import "Location.h"

@implementation Location

+ (NSString *)dynamoDBTableName {
    return @"Location";
}

+ (NSString *)hashKeyAttribute {
    return @"location_id";
}

@end
