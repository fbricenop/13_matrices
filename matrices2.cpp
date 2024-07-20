#include <iostream>
using namespace std;
int main(){
	int f,c,diagonal2=0;
	cout<<"TENGA EN CUENTA QUE ES UNA MATRIZ CUADRADA: "<<endl;
	cout<<"INGRESE LA CANTIDAD DE FILAS: ";
	cin>>f;
	cout<<endl<<"INGRESE LA CANTIDAD DE COLUMNAS: ";
	cin>>c;
	do{
		if(f!=c){
			cout<<"INGRESE DE NUEVO LA CANTIDAD DE COLUMNAS HASTA QUE SEA IGUAL A LA DE FILAS: ";
			cin>>c;
		}
	}while(f!=c);
	int secundaria[f][c];
	for(int i=1; i<=f;i++){//empiezo desde 1 pq asi es mas facil hacer la disminucion de "c" en la linea 26
		for(int j=1;j<=c;j++){
			cout<<"INGRESE EL ELEMENTO DE LA MATRIZ DE INDICE: "<<"FILA: "<<i+1<<" COLUMNA: "<<j+1<<endl;
			cin>>secundaria[i][j];
		}
	}
	for(int i=1;i<=f;i++){
		/*una matriz 3x3, la diagonal secundaria empieza desde 1x3 y luego 2x2 y luego 3x1, el indice "i" va aumentando
		el indice j va disminuyendo*/
		diagonal2+=secundaria[i][c];
		c--;
	}
	cout<<"LA SUMA DE LA DIAGONA LA SECUNDARIA ES: "<<diagonal2;
	
	
	
	return 0;
}
