#include <stdlib.h>




#include <stdio.h>


#include <iomanip>


#include <time.h>


#include <iostream>


using namespace std;







#define NAIPE 4


#define NUM 13


#define BAR 2







int main(int argc, char** argv)


{	


	int nume;


	int carta;


	int pote;


	int conta;


	int nai;


	int baralho;


	string naipi;


	int play;


	







	// Declaração do array







	int mat[5][53][3];	


	string cartaz;


	


	for(int i = 0; i < BAR; i++)


	{for(int j = 0; j < NUM; j++)


	{ for(int k = 0; k < NAIPE; k++)


	{


	mat[k][j][i]=1;


	}	


	}		


	}












for(int play = 1; play <5 ; play++)


{cout<<endl;


for(int carta = 1; carta < 12; carta++)


{


 srand(time(0));


 baralho =rand()%(2)+1;


 nai=rand()%(4+1-1)+1;


 nume=rand()%(13+1-1)+1;


 if(mat[nai][nume][baralho]==1)


 {


  	if(nai==1)


	{


	naipi="Copas ";	


 cout<<carta<<"----A Carta "<<carta<<" do jogador "<<play<<" E "<<nume<<" de "<<naipi<<" do baralho "<<baralho<<endl;;


  mat[nai][nume][baralho]=0;


	}


	else if(nai==2)


	{


		naipi="Paus";	


	   cout<<carta<<"----A Carta "<<carta<<" do jogador "<<play<<" E "<<nume<<" de "<<naipi<<" do baralho "<<baralho<<endl;;


  mat[nai][nume][baralho]=0;


	}


	else if(nai==3)


	{


		naipi="Ouro ";	


	   cout<<carta<<"----A Carta "<<carta<<" do jogador "<<play<<" E "<<nume<<" de "<<naipi<<" do baralho "<<baralho<<endl;;


  mat[nai][nume][baralho]=0;	


	}


	else


	{


		naipi="Espada ";	


	   cout<<carta<<"----A Carta "<<carta<<" do jogador "<<play<<" E "<<nume<<" de "<<naipi<<" do baralho "<<baralho<<endl;;


  mat[nai][nume][baralho]=0;		


	}


	


 }


 else{


 carta--;}


 }	


}


return 0;


}


