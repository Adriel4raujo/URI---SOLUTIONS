//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){

	int N, f=1, i;
	
	cin >> N;
	
	for(i=0; i<N; i++){
		
		f *= (N-i);
		
	}
	
	cout << f << endl;

return 0;
}
