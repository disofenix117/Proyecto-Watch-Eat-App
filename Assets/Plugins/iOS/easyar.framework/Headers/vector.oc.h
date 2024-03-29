﻿//=============================================================================================================================
//
// EasyAR Sense 4.2.0.8700-7bcbc8b1c
// Copyright (c) 2015-2021 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#import "easyar/types.oc.h"

/// <summary>
/// record
/// 3 dimensional vector of double.
/// </summary>
@interface easyar_Vec3D : NSObject

/// <summary>
/// The raw data of vector.
/// </summary>
@property (nonatomic) NSArray<NSNumber *> * data;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(NSArray<NSNumber *> *)data;

@end

/// <summary>
/// record
/// 4 dimensional vector of float.
/// </summary>
@interface easyar_Vec4F : NSObject

/// <summary>
/// The raw data of vector.
/// </summary>
@property (nonatomic) NSArray<NSNumber *> * data;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(NSArray<NSNumber *> *)data;

@end

/// <summary>
/// record
/// 3 dimensional vector of float.
/// </summary>
@interface easyar_Vec3F : NSObject

/// <summary>
/// The raw data of vector.
/// </summary>
@property (nonatomic) NSArray<NSNumber *> * data;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(NSArray<NSNumber *> *)data;

@end

/// <summary>
/// record
/// 2 dimensional vector of float.
/// </summary>
@interface easyar_Vec2F : NSObject

/// <summary>
/// The raw data of vector.
/// </summary>
@property (nonatomic) NSArray<NSNumber *> * data;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(NSArray<NSNumber *> *)data;

@end

/// <summary>
/// record
/// 4 dimensional vector of int.
/// </summary>
@interface easyar_Vec4I : NSObject

/// <summary>
/// The raw data of vector.
/// </summary>
@property (nonatomic) NSArray<NSNumber *> * data;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(NSArray<NSNumber *> *)data;

@end

/// <summary>
/// record
/// 2 dimensional vector of int.
/// </summary>
@interface easyar_Vec2I : NSObject

/// <summary>
/// The raw data of vector.
/// </summary>
@property (nonatomic) NSArray<NSNumber *> * data;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(NSArray<NSNumber *> *)data;

@end
