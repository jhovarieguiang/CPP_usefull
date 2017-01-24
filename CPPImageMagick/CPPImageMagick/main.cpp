//
//  main.cpp
//  CPPImageMagick
//
//  Created by Jhovarie on 1/24/17.
//  Copyright © 2017 3DMe Player. All rights reserved.
//


#include <iostream>
#include <Magick++.h>

//tutorials from here. https://www.youtube.com/watch?v=7miwnp8iDm8

//http://www.imagemagick.org/Magick++/
/*
 used brew install imagemagick
 
 XCode Build settings.
 header search path = /usr/local/Cellar/imagemagick/7.0.4-5/include/ImageMagick-7
 
 Open you terminal cd to /usr/local/Cellar/imagemagick/7.0.4-5/include/ImageMagick-7
 then enter Magick++-config --cppflags --cxxflags --ldflags --libs
 copy the result in your terminal and paste it to your Build settings Other Linker Flag
 in my case
 
 Linking
 Other Linker Flag= -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=16 -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=16 -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=16 -I/usr/local/Cellar/imagemagick/7.0.4-5/include/ImageMagick-7
 -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=16 -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=16 -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=16 -I/usr/local/Cellar/imagemagick/7.0.4-5/include/ImageMagick-7
 -L/usr/local/Cellar/imagemagick/7.0.4-5/lib -lMagick++-7.Q16HDRI -lMagickWand-7.Q16HDRI -lMagickCore-7.Q16HDRI
 -L/usr/local/Cellar/imagemagick/7.0.4-5/lib -lMagick++-7.Q16HDRI -lMagickWand-7.Q16HDRI -lMagickCore-7.Q16HDRI
 */

using namespace Magick;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    InitializeMagick("");
    return 0;
}

