#include "ColorFilter.h"

using namespace std;
using namespace cv;

void ColorFilter::processImage(cv::Mat img) {
    _frame = img;
    split();
    findBlue();
    findGreen();
    findRed();
    findBGR();
    showResult();
}

void ColorFilter::split() {
}

void ColorFilter::showResult() {
}

void ColorFilter::findBlue() {}

void ColorFilter::findGreen() {}

void ColorFilter::findRed() {}

void ColorFilter::findBGR() {}