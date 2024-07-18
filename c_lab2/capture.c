
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui_c.h>  // For C API of OpenCV highgui functions

int main() {
    CvCapture* webcam = cvCreateCameraCapture(0);
    return 0;
}


