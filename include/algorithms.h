//
// Created by mark on 27.02.2020.
//

#ifndef OPENCVTEST_ALGORITHMS_H
#define OPENCVTEST_ALGORITHMS_H

#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

/*
 *
 * first argument -- src image
 *
 * result -- return value
 *
 */

/*
 *
 * take picture using camera
 *
 * you have to create
 * cv::VideoCapture variable
 *
 * probably like this:
 * cv::VideoCapture cam(0);
 *
 */

cv::Mat takePicture(cv::VideoCapture cam);


/*
 * crops image
 *
 * result with width = w, height = h
 *
*/

cv::Mat crop(const cv::Mat& img, int w, int h, int x = 0, int y = 0);

/*
 *
 * rotates image by given angle without crop
 *
 */

cv::Mat rotate_in_frame(const cv::Mat& img, double angle);

/*
 *
 * saturates image
 *
 */

cv::Mat saturate(const cv::Mat& img, int value);


/*
 *
 * brightens image
 *
 */

cv::Mat brighten(const cv::Mat& img, int value);


/*
 *
 * lightens image (it actually is different from brighten)
 *
*/

cv::Mat lighten(const cv::Mat& img, int value);


/*
 *
 * brightens image
 *
 */

cv::Mat hue(const cv::Mat& img, int value);


/*
 *
 * brightens image
 *
 */

cv::Mat contrast(const cv::Mat& img, int value);


/*
 *
 *  add scalar in L*a*b color space
 *
 */

cv::Mat lab_add_scalar(const cv::Mat& img, int l, int a = 0, int b = 0);

/*
 *
 *  add scalar in hsv color space
 *
 */

cv::Mat hsv_add_scalar(const cv::Mat& img, int l, int a = 0, int b = 0);


/*
 *
 * black and white filter
 *
 */

cv::Mat gray(const cv::Mat& img);


/*
 *
 * blends two images with given ratio
 *
 */

cv::Mat blend(const cv::Mat& img1, const cv::Mat& img2, double alpha);


/*
 *
 * tint
 *
 */

cv::Mat tint(const cv::Mat& img, int value);


/*
 *
 *  changes color temperature
 *
 */

cv::Mat temperature(const cv::Mat& img, int value);


/*
 *
 * blurs image
 *
 * double value in (0, 5]
 *
 */

cv::Mat blur(const cv::Mat& img, double value = 3);


/*
 *
 * sharpens image
 *
 */

cv::Mat sharpen(const cv::Mat& img, double value = 0.5);

#endif //OPENCVTEST_ALGORITHMS_H
