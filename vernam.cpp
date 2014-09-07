// vernam.cpp: define el punto de entrada de la aplicación de consola.
//
/*
VERNAM 
(ONE -TIME PAD)
-TEXTO(mensaje) Hola
.ascii
.binaria

H		O		L		A
30		40		15		65
001		0101	1010	0001


-CLAVE(K) secuencia aleatorio
string afl {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}

Z aleatorio de alf
1111 -> semilla


Semilla tamano 4

semilla 0101   --> tam 4
S5 =	S1	+	S0 mod 2 = 1
		1	+	0  mod 2 = 1

S6 =	S2	+	S1 mod 2 = ?
S7 =	S3	+	S2 mod 2 = ?
S8 =	S4	+	S3 mod 2 = ?
.
.
.
hasta el tamaño del mensaje()

Ascci
Binario

-CIFRADO: Ci = Mi + Ki mod 2(Z2) = {0,1}
es una cadena de string
-Descifrado Di = Ci + Ki mod 2


Suma en Z2 -> XOR
0	0 = 0
0	1 = 1
1	0 = 1
1	1 = 0

*/

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	string a("mensaje");
	vector<int> ascci;
	vector<string> binary;

	ascci = StringToAscii<void>(a);
	binary = AsciiToBin<void>(ascci);

	for(int i = 0; i < a.size() ; i++)
	{
		cout << a[i] << " --> " <<ascci[i] << " --> " << binary[i]  << endl;
	}

	vector <int>Bin;
	string BinToAscci;

	Bin =  BintoInt(binary);
	BinToAscci = InttoAscci(Bin);

	for(int i = 0; i < Bin.size() ; i++)
	{
		cout << Bin[i] << endl;
	}
	cout << BinToAscci << endl;

	return 0;

}

