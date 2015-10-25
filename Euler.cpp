#include <iostream>

const unsigned int MAXSIZE1 = 2100000000;
const unsigned int MAXSIZE2 = 100000001;

unsigned int Euler(unsigned int n){
	unsigned int lastPrimeIndex;
	unsigned int dataTemp;

	bool *pFlag = new bool[MAXSIZE1];
	unsigned int *prime = new unsigned int[MAXSIZE2];
	

	if(n < 1 || n > MAXSIZE2){
		return 0;
	}
	for(unsigned int count = 0;count < MAXSIZE1;count ++){
		pFlag[count] = false;
	}
	lastPrimeIndex = 0;
	for(unsigned int count = 2;count < MAXSIZE1;count ++){
		if(!pFlag[count]){
			if(lastPrimeIndex == n - 1){
				return count;
			}
			if (lastPrimeIndex <= MAXSIZE2){
				prime[lastPrimeIndex++] = count;
			}
		}
		if (count == 5){
			int a;
			a = 1;
		}
		dataTemp = (MAXSIZE1 - 1) / count;
		for(unsigned int count1 = 0;count1 < lastPrimeIndex && prime[count1] <= dataTemp;count1 ++){
			pFlag[count * prime[count1]] = true;
			if(!(count % prime[count1])){
				break;
			}
		}
	}
	return 0;
}

int main(){
	unsigned int n;
	std::cin >> n;
	n =  Euler(n);
	if(n != 0){
		std::cout << n << std::endl;
	}
	system("pause");
	return 0;
}