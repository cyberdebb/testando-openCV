#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

//sobel is used for finding edges

using namespace cv;
using namespace std;

int main()
{
	Mat img = imread(R"(C:\Users\debor\OneDrive\Documentos\imagensOpenCV\pato.jpg)", IMREAD_REDUCED_GRAYSCALE_2);
	namedWindow("pato", WINDOW_NORMAL);
	namedWindow("pato sobel", WINDOW_NORMAL);
	Mat outputImg;

	//dx and dy cant be 0 at the same time

	int dx = 1; //1 or 0 - make horizontal lines more visible
	int dy = 1; //1 or 0 - make vertical lines more visible
	int sobelKernelSize = 3; //an odd number
	int scaleFactor = 1; //makes the lines more visible
	int deltaValue = 1; 

	while (true) {

		Sobel(img, outputImg, CV_8UC1, dx, dy, sobelKernelSize, scaleFactor, deltaValue);

		int c = waitKey();

		if ((char)c == 'q')
		{
			cout << "pressed q" << endl;
			break;
		}
		else if ((char)c == 'a')
		{
			cout << "pressed a" << endl;
			if (dx && dy)
				dx = 0;
			else
				dx = 1;
		}
		else if ((char)c == 's')
		{
			cout << "pressed s" << endl;
			if (dx && dy)
				dy = 0;
			else
				dy = 1;
		}
		else if ((char)c == 'd')
		{
			cout << "pressed d" << endl;
			sobelKernelSize += 2;
		}
		else if ((char)c == 'f')
		{
			cout << "pressed f" << endl;
			if(sobelKernelSize>1)
				sobelKernelSize -= 2;
		}
		else if ((char)c == 'z')
		{
			cout << "pressed z" << endl;
			scaleFactor++;
		}
		else if ((char)c == 'x')
		{
			cout << "pressed x" << endl;
			scaleFactor--;
		}
		else if ((char)c == 'c')
		{
			cout << "pressed c" << endl;
			deltaValue++;
		}
		else if ((char)c == 'v')
		{
			cout << "pressed v" << endl;
			deltaValue--;
		}

		imshow("pato", img);
		imshow("pato sobel", outputImg);
		
	}
	
	

	return 0;
}
