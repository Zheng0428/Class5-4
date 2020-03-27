#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);
	while (1)
	{
		Mat frame;
		Mat dx;
		Mat dy;
		Mat dxy;
		cap >> frame;
		Sobel(frame, dx, 0, 1, 0, 3, 1, 0, BORDER_DEFAULT);
		Sobel(frame, dy, 0, 0, 1, 3, 1, 0, BORDER_DEFAULT);
		Sobel(frame, dxy, 0, 1, 1, 3, 1, 0, BORDER_DEFAULT);
		imshow("frame", frame);
		imshow("dx", dx);
		imshow("dy", dy);
		imshow("dxy", dxy);
		waitKey(30);
	}
}