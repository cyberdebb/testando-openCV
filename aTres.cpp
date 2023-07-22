#include <iostream>
#include <math.h>
#include <opencv2/opencv.hpp> 

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread(R"(C:\Users\arthu\source\repos\testezada\testezada\Images\road.png)");

	double d;
	int type = 1;

	namedWindow("janela", WINDOW_NORMAL);
	createTrackbar("tipo", "janela", &type, 2);

	int pref_b = img.at<Vec3b>(350, 350)[0];
	int pref_g = img.at<Vec3b>(350, 350)[1];
	int pref_r = img.at<Vec3b>(350, 350)[2];

	while (true)
	{
	Mat clone = img.clone();
		for (int i = 0; i < img.rows; i++)
		{
			for (int j = 0; j < img.cols; j++)
			{
				int px_b = img.at<Vec3b>(i, j)[0];
				int px_g = img.at<Vec3b>(i, j)[1];
				int px_r = img.at<Vec3b>(i, j)[2];

				if (type == 1)
				{
					d =
					    abs(px_b - pref_b) +
						abs(px_g - pref_g) +
						abs(px_r - pref_r);

					Vec3b replace(d, d, d);
					clone.at<Vec3b>(i, j) = replace;

				}
				else if (type == 2)
				{
					d = sqrt(pow((px_b - pref_b), 2) + pow((px_g - pref_g), 2) + pow((px_r - pref_r), 2));
					Vec3b replace(d, d, d);
					clone.at<Vec3b>(i, j) = replace;

				}
				else
					clone = img;
			}
		}
		imshow("janela", clone);
		waitKey(50);
	}
		return 0;
}