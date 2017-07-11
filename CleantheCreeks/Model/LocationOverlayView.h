//
//  LocationOverlayView.h
//  Clean the Creek
//
//  Created by Samuel Cardo on 2/20/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface LocationOverlayView : MKAnnotationView
@property (nonatomic, weak) UILabel *label;
- (id)initWithAnnotation:(id<MKAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier;
@end
