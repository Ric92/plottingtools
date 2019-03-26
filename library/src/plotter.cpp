#include <plotter.h>

#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

Plotter::Plotter(){
	std::cout << "Plotter: Initializing plot \n";
	Display = cv::Mat::zeros(cv::Size(rows, cols), CV_8UC3);
	cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);// Create a window for display.
	cv::putText(Display, "F3 Team", cv::Point(rows/3, cols/3), cv::FONT_HERSHEY_DUPLEX, 2, cv::Scalar(0, 143, 143), 2);
	cv::imshow("Display window", Display);
	cv::waitKey(100);
	
};

void Plotter::update() {
	std::cout << "Updating plot \n";
	cv::imshow("Display window", Display);
	cv::waitKey(100);
};

Plotter::~Plotter(){

};