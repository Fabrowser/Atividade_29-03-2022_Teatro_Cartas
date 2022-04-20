#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

#define FILA 15
#define POLT 40


//função mostrar Cadeiras


    void mostra_matriz(int **x)
     {
    for(int i=0; i<FILA; ++i)
	{
		for(int j = 0; j<POLT; ++j)
		{
			
			cout << setw(1) << ((x[i][j]==1)?"#":".") << "|";
		}
		cout << endl;
	}
     }




    int main(int argc, char** argv)

{
	

	
	
	
	int i;
	int j;
	int op;
	
	// Declaração do array
	int **lugar;
	
	// Inicialização de cada "FILAha" do aray
	lugar = new int*[15];
	
	for(i=0; i<FILA; ++i) // Percorre as FILAhas
	{
		lugar[i] = new int[40];
	}
	// Fim da declaração do array
	
	
	
	// Desocupando todas as poltronas
	
	for(i=0; i<FILA; ++i)
	{
		for(j = 0; j<POLT; ++j)
		{
			lugar[i][j] = 0;
		}
	}
	
		do{
		cout << "0 - Finalizar" << endl;
		cout << "1 - Reservar poltrona" << endl;
		cout << "2 - Mapa de ocupação" << endl;
		cout << "3 - Faturamento" << endl;
		cout << "Digite sua opção: ";
		cin >> op;

		
		 if(op==1){	
			
		 		int polt_res;
		 		int fil_res;
				cout << "Digite a fileira a reservar [1 A 15] " << endl;
				cin >> fil_res;
				
				cout << "Digite a poltrona a reservar[1 A 40]: " << endl;
				cin >> polt_res;
				
					if (lugar[fil_res-1][polt_res-1] == 0) {
			    	lugar[fil_res-1][polt_res-1]=1;
							cout << "Reserva efetuada" << endl;
						}
						else{
							cout << "ja está reservado" << endl;
						}
						
	}
					
		 
		  if(op==2){
		  	
		  	mostra_matriz(lugar);
				 
		 }
		 
		  if(op==3){
		  	
		  	int total=0;
		  	int valor=0;
		  	int cont=0;
		  	
		  	
		  		for(i=0; i<FILA; ++i)
		   		   	{
			   		   	for(j = 0; j<POLT; ++j)
							{
								if(lugar[i][j]==1){
								
									if(i>=0 || i<=4){
										valor = 50;
																	
									}
									
									
									else if(i>=6 || i<=10){
									valor = 30;
								
									}
									
									
									else if(i>=11 || i<=15){
									valor = 15;
								
									}
									
										total = total + valor;
											
									
										cont ++;
										
									}
									
									
								
																	
								}
								
														
							}
							
					cout << "Total de lugares ocupados: " << cont <<endl;
					cout << "Total Fatramento: R$ " << total <<endl;
						
						
					}
				
		  	
			 
		 }
		
		 
		 	
		while (op != 0);
			


	
	return 0;
}

