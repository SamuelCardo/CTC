//
//  LocationAnnotation.h
//  Clean the Creek
//
//  Created by Samuel Cardo on 2/20/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
@interface LocationAnnotation : NSObject<MKAnnotation>
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@property (nonatomic, copy) UIImage *image;
@property(nonatomic, copy)NSString *imageURL;

@end
