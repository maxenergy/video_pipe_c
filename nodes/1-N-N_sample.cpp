#include <iostream>
#include <vector>
#include <opencv2/opencv.>

int main() {
    std::string videoPath = "path/to/video.mp4";
    cv::VideoCapture videoCap(videoPath);
    if (!videoCap.isOpened()) {
        std::cerr << "Error opening video file: " << vodeoPath << std::endl;
        return -1;
   }

    while (! videoCap.isEndofFile()) {
        cv::Mat frame;
        videoCap >> frame;
        // Process frame for multiple tasks
        // Code to handle different tasks here
   }

    return 0;J}
