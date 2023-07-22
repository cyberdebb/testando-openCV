//#include <iostream>
//#include <opencv2/opencv.hpp> //abre TUDO
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat image = imread(R"(C:\Users\arthu\source\repos\testezada\testezada\Images\tadorna.png)");
//    Mat copy = image.clone();
//
//    namedWindow("janela");
//    
//    int init1 = 0;
//    int init2 = 0;
//    int init3 = 0;
//
//    createTrackbar("blue", "janela", &init1, 255);
//    createTrackbar("green", "janela", &init2, 255);
//    createTrackbar("red", "janela", &init3, 255);
//
//    int b, g, r;
//
//    while (true)
//    {
//        for (int y = 0; y < image.rows; y++)
//        {
//            for (int x = 0; x < image.cols; x++)
//            {
//                Vec3b color = image.at<Vec3b>(x,y); //vec3b usa uchar (0-255)
//
//                b = color[0]; //b
//                g = color[1]; //g
//                r = color[2]; //r
//
//                b += init1;
//                g += init2;
//                r += init3;
//
//                if (b > 255)
//                    b = 255;
//                if (g > 255)
//                    g = 255;
//                if (r > 255)
//                    r = 255;
//
//                copy.at<Vec3b>(x, y)[0] = b;
//                copy.at<Vec3b>(x, y)[1] = g;
//                copy.at<Vec3b>(x, y)[2] = r;
//            }
//
//            //cout << "blue: " << b << endl;
//            //cout << "green: " << g << endl;
//            //cout << "red: " << r << endl << endl;
//        }
//
//        imshow("janela", copy);
//        waitKey(50);
//    }
//}
//
