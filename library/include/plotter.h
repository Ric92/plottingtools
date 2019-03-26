#ifndef PLOTTER_H
#define PLOTTER_H

#include<iostream>
#include <opencv2/core/core.hpp>

class Plotter
{
public:
	Plotter();

	void update();

	~Plotter();

private:
	cv::Mat Display;
	int rows = 1280;
	int cols = 720;
};

#endif // PLOTTER_H