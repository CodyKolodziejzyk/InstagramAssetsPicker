//
//  IGAssetsPickerViewController.h
//  InstagramAssetsPicker
//
//  Created by JG on 2/3/15.
//  Copyright (c) 2015 JG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <AVFoundation/AVFoundation.h>

@protocol IGAssetsPickerDelegate <NSObject>

@optional
//get crop region , range:0-1, you can crop when user post for good UE
-(void)IGAssetsPickerGetCropRegion:(CGRect)rect withAlAsset:(ALAsset *)asset;

// gets called when the user clicks 'ok' after selecting an asset
- (void)assetsPickerBeganCropping:(id)picker;

//crop immediatly
- (void)assetsPicker:(id)picker finishedCroppingWithAsset:(id)asset;


@end

@interface IGAssetsPickerViewController : UIViewController
@property (nonatomic, strong) id<IGAssetsPickerDelegate> delegate;
@end

