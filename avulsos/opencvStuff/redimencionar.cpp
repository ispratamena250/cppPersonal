#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main(){
	cv::Mat imagem = cv::imread("gato1.jpg");
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

	cv::imwrite("imagemRedimencionada.jpg", imagemRedimencionada);

	cv::waitKey(0);

	cout << endl;
	return 0;
}
