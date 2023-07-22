#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

int main()
{
	Mat img = imread(R"(C:\Users\debor\OneDrive\Documentos\imagensOpenCV\pato.jpg)", IMREAD_REDUCED_COLOR_2);
	Mat eroded, dilated;

	Mat elementKernel = getStructuringElement(MORPH_RECT, Size(10, 10), Point(-1, -1));
	erode(img, eroded, elementKernel, Point(-1, -1), 1);
	dilate(img, dilated, elementKernel, Point(-1, -1), 1);

	imshow("erodido", eroded); //eliminate thin lines
	imshow("dilatada", dilated); //thin lines become thicker
	imshow("default", img);
	waitKey();

	return 0;
}
