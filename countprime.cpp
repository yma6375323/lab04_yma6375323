#include<iostream>
#include<math.h>
using namespace std;


int main() {
        
        int x[]= {1,2,3,4,5};
        int numberOfPrimes=0;

	int size=5;

        for (int j = 0; j < size; j++){  

                //for (int i = 2; i <= sqrt(x); i++){
                for (int i=2; i<x[j]; i++){
                        if(x[j] % i != 0 && x[j]>1){
                                cout<<x[j]<<endl; 
        	                numberOfPrimes+=1;
                          }
                }
        }
        cout<<numberOfPrimes<<endl;
}



