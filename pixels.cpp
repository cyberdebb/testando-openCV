//#include<iostream>
//#include<opencv2/highgui/highgui.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main() {
//	//checking the pixel located at (10,29) (x,y)
//	// 
//	//Vec3b = vector with 3 byte entries
//	//Here those byte entries are unsigned char values to represent values between 0 .. 255
//	//
//	//METHOD BGR!
//	//
//
//	Mat image;
//
//	image = imread(R"(C:\Users\debor\OneDrive\Documentos\imagensOpenCV\pato.jpg)");
//	
//	int x = image.at<Vec3b>(10, 29)[0];//getting the blue value
//	int y = image.at<Vec3b>(10, 29)[1];//getting the green value
//	int z = image.at<Vec3b>(10, 29)[2];//getting the red value
//
//	cout << "Value of blue channel:" << x << endl;//showing the pixel value
//	cout << "Value of green channel:" << y << endl;//showing the pixel value
//	cout << "Value of red channel:" << z << endl;//showing the pixel value
//	cout << endl;
//
//	Mat_<Vec3b>image2;//taking an image matrix
//
//	image2 = image;
//	Vec3b j = image2(10, 29);//getting the pixel value
//	cout << j << endl;//showing the pixel value
//
//	system("pause");//pause the system to visualize the result
//
//	return 0;
//}