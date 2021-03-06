#ifndef COLOR_FILTER_H
#define COLOR_FILTER_H

#include <opencv2/opencv.hpp>

#include <string>
#include <vector>

class ColorFilter {
protected:
    cv::Mat _frame;
    std::vector<cv::Mat> _chans;
    cv::Mat _redMask;
    cv::Mat _greenMask;
    cv::Mat _blueMask;
    cv::Mat _totalColors;
public:
    void processImage(cv::Mat img);

    void split();
    void findBlue();
    void findGreen();
    void findRed();
    void findBGR();

    void showResult();
};

#endif