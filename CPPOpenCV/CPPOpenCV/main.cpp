//
//  main.cpp
//  CPPOpenCV
//
//  Created by Jhovarie on 2/14/17.
//  Copyright © 2017 3DMe Player. All rights reserved.
//

/*
 - OpenCV setup Mac -
 
 https://www.youtube.com/watch?v=37RvqZVddAw
 
 https://github.com/Itseez/opencv/archive/3.1.0.zip
 https://www.macports.org/install.php
 
 open terminal  go to your opencv library root folder example
 cd /<path to your opencv>/opencv-3.1.0 hit enter to change path
 mkdir build
 cd build
 cmake -G “Unix Makefiles” ..
 make -j8
 sudo make install
 
 — to setup cmake command line tools -
 open terminal
 
 //sudo chown -R `whoami` /usr/local
 sudo chown -R ‘pcusername’ /usr/local/
 brew update
 brew install cmake
 
 — to setup Xcode framework-
 
 go to build setting
 
 go to Search Path Section
 
 -> Framework search paths add “/usr/local/lib”
 -> Header search path add “/usr/local/include”
 -> Library search path add “/Users/jhovarie/Desktop/Dev/OpenCLib/opencv-3.1.0/build/lib”
 
 go to Linking Section
 -> Other linker Linker Flags
 “-lopencv_calib3d -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_ts -lopencv_video -lopencv_videoio -lopencv_videostab”
 
 Add files to your Xcode project
 libopencv_imgproc.3.1.0.dylib
 libopencv_highgui.3.1.0.dylib
 libopencv_core.3.1.0.dylib
 */

#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"

using namespace cv;

int main(){
    VideoCapture cap(0);
    while (true){
        
        Mat Webcam;
        cap.read(Webcam);
        imshow("Webcam", Webcam);
        
    }
}


/*
 #include "opencv2/opencv.hpp"
 
 using namespace cv;
 
 int main(int, char**)
 {
 VideoCapture cap(0); // open the default camera
 if(!cap.isOpened())  // check if we succeeded
 return -1;
 
 Mat edges;
 namedWindow("edges",1);
 for(;;)
 {
 Mat frame;
 cap >> frame; // get a new frame from camera
 cvtColor(frame, edges, CV_BGR2GRAY);
 GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
 Canny(edges, edges, 0, 30, 3);
 imshow("edges", edges);
 if(waitKey(30) >= 0) break;
 }
 // the camera will be deinitialized automatically in VideoCapture destructor
 return 0;
 }
 */
