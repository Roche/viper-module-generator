//
// Created by AUTHOR.
// Copyright (c) YEAR AUTHOR. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VIPERProtocols.h"

@interface VIPERViewController : UIViewController <VIPERViewProtocol>

@property (nonatomic, strong) id <VIPERPresenterProtocol> presenter;

@end
