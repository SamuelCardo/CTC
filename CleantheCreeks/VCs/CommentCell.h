//
//  CommentCell.h
//  CTC
//
//  Created by Samuel Cardo on 09/03/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommentCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *commentLabel;
@property (weak, nonatomic) IBOutlet UIView *cellView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomShadow;


@end
