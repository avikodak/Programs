/*
 * SampleClass.cpp
 *
 *  Created on: Dec 9, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>

using namespace std;
class example{
public:
	int publicCounter;
	void publicFunction(){
		printf("Hello World From Public Function\n");
	}
private:
	int privateCounter;
	void privateFunction(){
		printf("Hello World From Public Function\n");
	}
protected:
	int protectedCounter;
	void protectedFunction(){
		printf("Hello World From Public Function\n");
	}
};

class DerivedExample : public example{
public:
	int publicCounter;
	void derivedPublicFunction(){
		printf("%d",this->privateCounter);
		printf("Hello World From Public Function\n");
	}
private:
	int privateCounter;
	void derivedPrivateFunction(){
		printf("Hello World From Public Function\n");
	}
protected:
	int protectedCounter;
	void derivedProtectedFunction(){
		printf("Hello World From Public Function\n");
	}
};


int main(){
	// Entry Point for the program
	return 1;
}
