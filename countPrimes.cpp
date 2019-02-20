#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include <math.h>
#include "utility.h"

int countPrimes(int a[], int size) {
	int x;
	int numberOfPrimes=0;
	bool isprime=true;
	for (int j = 0; j < size; j++){ 
		x = a[j];

		for (int i = 2; i <= sqrt(x); i++){
			if(x % i == 0){
				isprime = false;
				break;
			}
			else{
				isprime=true;
			}
        	}
		if (x>1 && isprime==true){
			numberOfPrimes+=1;
			//j++;
		}

	}
        return numberOfPrimes;
}





