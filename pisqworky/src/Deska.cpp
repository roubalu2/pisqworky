#include <iostream>
#include "Deska.h"

using namespace std;


    void Deska::clear(){
        for (int i=0; i<VelPol; i++){
            for (int j=0; j<VelPol; j++){
                deska[i][j]='-';
            }
        }
 count=0;
    }



Deska::Deska()
{
    clear();
}

void Deska::print(){

	for (int i = 0; i < VelPol; i++){
		string s = i < 10?"  ":" ";
		cout << i<<s;
		for (int j = 0; j < VelPol; j++){
			cout << deska[i][j]<<"  ";
		}
		cout <<i;
		cout <<endl<<endl;
	}
	cout<<endl;
}

//void