	/* Suma de tres matrices dinámicas con su tiempo de ejecución
	en los ciclos de repetición */
	#include<iostream>
	#include<math.h>
	#include<conio.h>
	#include<stdlib.h>      //new y delete
	#include <stdio.h>
	#include <ctime>
	#include <cstring>
	 
 
	using namespace std;
	void pedirDatos();
	void imprimirMatriz(int **,int, int);
	void imprimirMatriz2(int **,int, int);
	void imprimirMatriz3(int **,int, int);
	void imprimirMatrizResultado (int **,int,int);
	int **puntero_matriz, **puntero_matriz2, **puntero_matriz3, **matriz_resultado, nFilas,nCol;
	clock_t tiempo_req, tiempo_req2, tiempo_req3, tiempo_req4, tiempo_req5;
	float tiempo_t, tiempo_t2, tiempo_t3, tiempo_t4, tiempo_t5, tiempo_t6;
	 
	int main(){
	   
	    pedirDatos();
	    imprimirMatriz(puntero_matriz,nFilas,nCol);
	    imprimirMatriz2(puntero_matriz2,nFilas,nCol);
	    imprimirMatriz3(puntero_matriz3,nFilas,nCol);
	    imprimirMatrizResultado(matriz_resultado,nFilas,nCol);
	   
	 
	getch();            //1
	 return 0;        //1
	}
	 
	void pedirDatos(){
	    cout<<"Digite el número de filas: ";  //1 OE
	    cin>>nFilas;                            //1 OE
	    cout<<"Digite el número de columnas: ";   //1 OE
	    cin>>nCol;                                  //1 OE
	   
	    tiempo_req = clock();                         //1 OE
   
	//Reservando memoria para la matriz uno
	 
	puntero_matriz = new int*[nFilas];  //Reservando memoria para las filas    //2 OE
	for(int i=0;i<nFilas;i++){                    //4 OE
	    puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas  //1 OE
	   
	}
	 
	cout<<"\nDigite los elementos de la primera matriz:\n";    //1 OE
	    for(int i=0;i<nFilas;i++){     //4 OE
	        for(int j=0;j<nCol;j++){             //4 OE
	            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";  //1 OE
	            cin>>*(*(puntero_matriz+i)+j);  //puntero_matriz guardando i y j        //3 OE
	    }
	  }
	
	   
	 //Reservando memoria para la matriz dos
	 
	puntero_matriz2 = new int*[nFilas];  //Reservando memoria para las filas        2 OE
	    for(int i=0;i<nFilas;i++){          // 4 OE
	    puntero_matriz2[i] = new int[nCol]; //Reservando memoria para las columnas      //1 OE
	   
	}
	 
	cout<<"\nDigite los elementos de la segunda matriz:\n";             //1 OE
	    for(int i=0;i<nFilas;i++){                    // 4 OE
	        for(int j=0;j<nCol;j++){                  //4 OE
	            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";     //1 OE
	            cin>>*(*(puntero_matriz2+i)+j);  //puntero_matriz guardando i y j       //3 OE
	    }
	    }
	 
	//Reservando memoria para la matriz tres
	 
	puntero_matriz3 = new int*[nFilas];  //Reservando memoria para las filas    //2 OE
	    for(int i=0;i<nFilas;i++){                  // 4 OE
        puntero_matriz3[i] = new int[nCol]; //Reservando memoria para las columnas      //1 OE
	       
	}
	 
	cout<<"\nDigite los elementos de la tercera matriz:\n";             //1 OE
	    for(int i=0;i<nFilas;i++){                   //4 OE
	        for(int j=0;j<nCol;j++){                 //4OE
	            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";        //1 OE
	            cin>>*(*(puntero_matriz3+i)+j);                //puntero_matriz guardando i y j   3 OE
	    }
	    }
	    tiempo_t = float(tiempo_req)/CLOCKS_PER_SEC;  //2 OE
	    cout<< "\nIngresaste las matrices durante"<<float(tiempo_req)/CLOCKS_PER_SEC<<" segundos. "; //2 OE
	}
	 
	 
	void imprimirMatriz(int **puntero_matriz, int nFilas, int nCol){        
	    cout<<"\nMatriz 1: \n";              //1 OE
	    tiempo_req = clock();                 //1 OE
	    for(int i=0; i<nFilas;i++){           //4 OE
	        for(int j=0;j<nCol;j++){          //4 OE
	            cout<<*(*(puntero_matriz+i)+j)<<" ";        //3 OE
	}
	    cout<<"\n";                           //1 OE
	}
	    tiempo_t2 = float(tiempo_req2)/CLOCKS_PER_SEC; //2 OE
	}
	 
	void imprimirMatriz2(int **puntero_matriz2, int nFilas, int nCol){
	 
	    cout<<"\nMatriz 2: \n";                             //1 OE
	    tiempo_req3 = clock();      //1 OE
	    for(int i=0; i<nFilas;i++){    //4 OE
	        for(int j=0;j<nCol;j++){   //4 OE
	            cout<<*(*(puntero_matriz2+i)+j)<<" "; //puntero_matriz      //3 OE
	}
	    cout<<"\n";        //1 OE
	}
	tiempo_t3 = float(tiempo_req3)/CLOCKS_PER_SEC;  //2 OE
	}
	void imprimirMatriz3(int **puntero_matriz3, int nFilas, int nCol){
	    cout<<"\nMatriz 3: \n";                             //1 OE
	    tiempo_req4 = clock();    //1 OE
	    for(int i=0; i<nFilas;i++){     //4 OE
	        for(int j=0;j<nCol;j++){    //4 OE
            cout<<*(*(puntero_matriz3+i)+j)<<" "; //puntero_matriz      //3 OE
	}
	    cout<<"\n";                   //1 OE
	}
	    tiempo_t4 = float(tiempo_req4)/CLOCKS_PER_SEC; //2 OE
	}
	 
	void imprimirMatrizResultado(int **matriz_resultado,int nFilas, int nCol){
	    cout<<"\nLa suma de las 3 matrices es = \n";             //1 OE
	    tiempo_req5 = clock();     //1 OE
	    for(int i=0;i<nFilas;i++){        //4 OE
	        for(int j=0;j<nCol;j++){       //4 OE
	        cout<<(*(*(puntero_matriz+i)+j))  + (*(*(puntero_matriz2+i)+j)) + (*(*(puntero_matriz3+i)+j))<<"  ";   //10 OE
	        }              
	        cout<<"\n";     //1 OE
	}
	 
	    tiempo_t5 = float(tiempo_req5)/CLOCKS_PER_SEC; //2 OE
	    tiempo_t6 = tiempo_t + tiempo_t2 + tiempo_t3 + tiempo_t4 + tiempo_t5;   //5 OE
    cout<<"\nEl tiempo total de ejecución de los ciclos de repetición en la aplicación fue de: "<<tiempo_t6 <<" segundos";      //2 OE
	}
