﻿//=============================================================================================================================
//
// EasyAR Sense 4.2.0.8700-7bcbc8b1c
// Copyright (c) 2015-2021 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#import "easyar/types.oc.h"

@interface easyar_Storage : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// <summary>
/// Sets asset root path.
/// </summary>
+ (void)setAssetDirPath:(NSString *)path;

@end
