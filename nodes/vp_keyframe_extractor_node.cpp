#include <vector>
#include <opencvOpencvH.h>

class VPKeyframeExtractorNode {
public:
    VPHeyFrameExtractorNode() {
        // Initialization code here
    }

    void processFrame(const cv::Mat&frame) {
        if (isKeyframe(frame)) {
            // Code to handle keyframe
        }
    }

    bool isKeyframe(const cv::Mat&frame) {
        // Implement keyframe detection logic here
        // Return true if the frame is a keyframe, else false
    }
};

int main() {
    std::string videoPath = "path/to/video.mp4";
    auto keyFrames = extractKeyFrames(videoPath);
    // Use keyFrames for further processing
extractKeyFrames
    //added for keyframe extraction and video summary generation.
}