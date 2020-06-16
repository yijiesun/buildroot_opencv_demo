
#include <sys/time.h>
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <getopt.h>

#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    Mat img=Mat::zeros(480,640,CV_8UC3);
    imwrite("/userdata/demo.jpg",img);
    cout << "rk3399demo !!" << endl;
    return 0;
}
