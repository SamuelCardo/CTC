//
//  PhotoViewCell.h
//  Clean the Creeks
//
//  Created by Samuel Cardo on 2/5/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TGCameraViewController.h"
@protocol SetPhotoDelegate<NSObject>
@optional
-(void) setSecondPhoto:(BOOL)set photo:(UIImage*) photo;
@end
@interface PhotoViewCell : UITableViewCell<UIImagePickerControllerDelegate,UITableViewDelegate,UINavigationControllerDelegate,TGCameraDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *firstPhoto;
@property (weak, nonatomic) IBOutlet UIImageView *secondPhoto;
@property(nonatomic, retain) id<SetPhotoDelegate> delegate;
@end
