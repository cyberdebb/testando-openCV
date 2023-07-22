#include <iostream>
#include <opencv2/opencv.hpp> 

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread(R"(C:\Users\arthu\source\repos\testezada\testezada\Images\apple.png)");
	Mat out;
	namedWindow("janela",WINDOW_NORMAL);

	int limit1,limit2;
	limit1 = limit2 = 0;

	createTrackbar("corte", "janela", &limit1, 4);
	createTrackbar("valor", "janela", &limit2, 255);

	while (true)
	{
		for (int i = 0; i < img.rows; i++)
		{
			for (int j = 0; j < img.cols; j++)
			{
				double y = //Gray formula Y = 0.114*B + 0.587*G + 0.299*R
				img.at<Vec3b>(i, j)[0] * 0.114 +
				img.at<Vec3b>(i, j)[1] * 0.587 +
				img.at<Vec3b>(i, j)[2] * 0.299;
					
				Vec3b gray(y, y, y);
				img.at<Vec3b>(i, j) = gray;
			}
		}

		threshold(img,out,limit2,255,limit1);
		imshow("janela", out);
		waitKey(50);
	}
	return 0;
}
