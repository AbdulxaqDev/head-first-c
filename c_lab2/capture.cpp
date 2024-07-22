
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>



int main() {
    cv::VideoCapture cap(0);  // Open the default camera (index 0)
    if (!cap.isOpened()) {
        std::cerr << "Error: Cannot open camera" << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (true) {
        cap >> frame;  // Capture frame-by-frame
        if (frame.empty()) {
            std::cerr << "Error: Blank frame grabbed" << std::endl;
            break;
        }

        cv::imshow("Camera", frame);  // Display the captured frame
        
        char key = cv::waitKey(10);
        if (key == 27)  // ESC key
            break;
    }

    cap.release();  // Release the VideoCapture object
    cv::destroyAllWindows();  // Close all OpenCV windows

    return 0;
}
