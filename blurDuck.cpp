#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

int main()
{
	Mat img = imread(R"(C:\Users\debor\OneDrive\Documentos\imagensOpenCV\pato.jpg)", IMREAD_REDUCED_COLOR_2);
	Mat bilateralImg, gaussianImg, medianImg;

	bilateralFilter(img, bilateralImg,15,95,45);
	GaussianBlur(img, gaussianImg, Size(15, 15), 0);
	medianBlur(img, medianImg, 15);

	imshow("normal", img);
	imshow("filtrada", bilateralImg); //care about edges but is slow
	imshow("gaussian", gaussianImg); //more useful
	imshow("medio blur", medianImg);
	waitKey();

	return 0;
}
