//
//  main.cpp
//  CPPBoost
//
//  Created by Jhovarie on 1/24/17.
//  Copyright © 2017 3DMe Player. All rights reserved.
//

/*
 Used brew to install boost
 
 command
 brew install boost
 
 build settings 
 header search path = /usr/local/Cellar/boost/1.63.0/include
 lib search path = /usr/local/Cellar/boost/1.63.0/lib
 */

#include <string>
#include <iostream>
#include <fstream>
#include <boost/iostreams/tee.hpp>
#include <boost/iostreams/stream.hpp>
using namespace boost;
using namespace boost::iostreams;
using namespace std;

int main(int argc, const char * argv[]) {
    typedef tee_device<ostream, ofstream> TeeDevice;
    typedef stream<TeeDevice> TeeStream;
    ofstream ofs("/Users/jhovarie/Desktop/Dev/git_home/CPP_usefull/CPPBoost/sample.txt");
    TeeDevice my_tee(cout, ofs);
    TeeStream my_split(my_tee);
    my_split << "Hello, World!\n";
    my_split.flush();
    my_split.close();
    //cout <<"Hello World"<<endl;
    return 0;
}
