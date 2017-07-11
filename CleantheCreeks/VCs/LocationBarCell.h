//
//  LocationBarCell.h
//  CTC
//
//  Created by Samuel Cardo on 18/03/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LocationBarCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIButton *btnLike;
@property (weak, nonatomic) IBOutlet UIButton *btnComment;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *kudoLeadingConst;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *commentLeadingConst;
@property (weak, nonatomic) IBOutlet UIView *barCellView;
@property (weak, nonatomic) IBOutlet UIButton *btnReport;

@end
