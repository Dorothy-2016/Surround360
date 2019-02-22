/**
* Copyright (c) 2016-present, Facebook, Inc.
* All rights reserved.
*
* This source code is licensed under the BSD-style license found in the
* LICENSE_render file in the root directory of this subproject. An additional grant
* of patent rights can be found in the PATENTS file in the same directory.
*/

/*四个方法对像素运动信息做处理*/

#pragma once

#include "CvUtil.h"

namespace surround360 {
namespace optical_flow {

using namespace cv;

// generate a greyscale visualization of a flow field by interpreting
// just the x-coordinate of the flow as disparity.（用灰度表将光流可视化，是对像素的x轴运动信息的分离）
Mat visualizeFlowAsGreyDisparity(const Mat& flow);

// generate a visualization of a flow field by overlaying arrows on top（将光流区域的运动方向覆盖到顶端）
Mat visualizeFlowAsVectorField(const Mat& flow, const Mat& image);

// generate a colored visualization of a flow field where the color indicates
// the direction and magnitude of flow. black for 0 magnitude, increasing brightness
// proportional to magnnitude. uses HSV color space; direction is encoded with hue.（利用孟塞尔颜色系统，将运动信息可视化。色调（hue）表方向，色度（magnitude）表运动速度标量，明度是一个常量）
Mat visualizeFlowColorWheel(const Mat& flow);

// generate a legend for the color scheme used in visualizeFlowColorWheel
Mat testColorWheel();

} // namespace optical_flow
} // namespace surround360
