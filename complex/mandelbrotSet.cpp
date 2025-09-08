/*
 * This is a class exercise.
 * Let z and c complex numbers, k and n integers where k = 1, 2, ... and n = 0, 1, 2, ....
 * k is the index of the c number and n is the index of the z number.
 * If n = 0 then z0 = (0, 0).
 * If n > 0 then zn+1 = (zn)^2 + ck.
 * Iterate and save ck for o plotting.
 * Remember: abs(z) = sqrt(x^2 + y^2)
 *
 * First of all, let's interate up to n = 101. If so abs(z101) < 2?
 * The Mandelbrot Set
 */

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <complex>

using namespace std;

int main(){
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    if(!gnuplotPipe){
        cout << "Error" << endl;
        exit(1);
    }

    const int width = 800;
    const int hight = 600;
    const int maxIter = 500;

    const double xmin = -2.5, xmax = 1.0;
    const double ymin = -1.5, ymax = 1.5;

    ofstream file1("mandelbrot.dat");

    for (int py=0; py<hight; py++){
        for (int px=0; px<width; px++){
            double x0 = xmin + (xmax - xmin) * px / (width - 1);
            double y0 = ymin + (ymax - ymin) * py / (hight - 1);
            complex<double> c(x0, y0);

            complex<double> z(0, 0);
            int iter = 0;
            while (abs(z) <= 2.0 && iter < maxIter){
                z = z*z+c;
                iter++;
            }

            file1 << x0 << " " << y0 << " " << iter << endl;
        }
        file1 << endl; 
    }

    file1.close();

    fprintf(gnuplotPipe, "set title 'Mandelbrot Set'\n");
    //fprintf(gnuplotPipe, "set terminal pngcairo size 800,600\n");
    fprintf(gnuplotPipe, "unset key\n");
    fprintf(gnuplotPipe, "set view map\n");
    fprintf(gnuplotPipe, "set size ratio -1");
    fprintf(gnuplotPipe, "set pm3d map");
    fprintf(gnuplotPipe, "set palette defined (0 'black', 1 'blue', 2 'cyan', 3 'green', 4 'yellow', 5 'red', 6 'white')\n");
    fprintf(gnuplotPipe, "splot 'mandelbrot.dat' using 1:2:3 with pm3d\n");

    pclose(gnuplotPipe);

    cout << endl;
    return 0;
}