#include "iostream"

using namespace std;
int main() {
  int arr[10] = {1,2,2,2,5,1,6,7,1};
  int n = 0;
  cout<<"numero a comparar:";
  cin>> n;
  

  for (int i=0; i<10; i++){
		if (n == arr[i]){
         n++;
        }
    }
  cout<< "Se repite: "<<n;
  
return 0;

}
