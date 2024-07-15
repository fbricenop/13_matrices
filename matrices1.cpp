#include <iostream>
using namespace std;
int main(){
	int f,c,sumadiagonal=0;
	cout<<"INGRESE LA CANTIDAD DE FILAS: ";
	cin>>f;
	cout<<"INGRESE LA CANTIDADA DE COLUMNAS: ";
	cin>>c;
	int matriz[f][c];
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cin>>matriz[i][j];
			if(i<j){
				sumadiagonal+=matriz[i][j];
			}
		}
	}
	cout<<sumadiagonal;	
	return 0;
}