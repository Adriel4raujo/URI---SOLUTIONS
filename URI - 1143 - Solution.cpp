#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, i;
    
    cin >> x;
    
    for(i=1; i<x+1; i++){
    	cout << i << " " << i*i << " " << i*i*i << endl;
	}
 
    return 0;
}
