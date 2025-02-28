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
	cv::Mat imagem = cv::imread("imagemRedimencionada.jpg");
	if(imagem.empty()){
		cerr << "Erro ao carregar imagem" << endl;
		return -1;
	}
	
	int novaLargura = 500;
	int novaAltura = 500;
	cv::Size novaResolucao(novaLargura, novaAltura);

	cv::Mat imagemRedimencionada;

	cv::resize(imagem, imagemRedimencionada, novaResolucao, 0, 0, cv::INTER_LINEAR);

	cv::imshow("Imagem original", imagem);
	cv::imshow("Imagem redimencionada", imagemRedimencionada);

	cv::imwrite("gato4Redimencionada2.png", imagemRedimencionada);

	cv::waitKey(0);

	cout << endl;
	return 0;
}
