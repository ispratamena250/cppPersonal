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
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int z, aux;

    for(int x=0; x<=2; x++){
        for(int y=0; y<=2; y++){
            for(int n=0; n<=100; n++){
                if(n == 0){
                    z = 0;                    
                    aux = z;
                }
                z = ;
            }
        }
    }    

    cout << endl;
    return 0;
}