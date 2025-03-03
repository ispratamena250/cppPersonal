/*
 * To download OpenCV: 
 * 	$ sudo apt update
 * 	$ sudo apt install libopencv-dev
 * To compile: g++ -o redimencionar redimencionar.cpp -I/usr/include/opencv4 `pkg-config --cflags --libs opencv4`
 * To run: ./redimencionar
 * */
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main(){
	cv::Mat imagem = cv::imread("Geany-Logo.png");
	if(imagem.empty()){
		cerr << "Erro ao carregar imagem" << endl;
		return -1;
	}
	
	int novaLargura = 256;
	int novaAltura = 256;
	cv::Size novaResolucao(novaLargura, novaAltura);

	cv::Mat imagemRedimencionada;

	cv::resize(imagem, imagemRedimencionada, novaResolucao, 0, 0, cv::INTER_LINEAR);

	cv::imshow("Imagem original", imagem);
	cv::imshow("Imagem redimencionada", imagemRedimencionada);

	cv::imwrite("geany_256x256.png", imagemRedimencionada);

	cv::waitKey(0);

	cout << endl;
	return 0;
}
