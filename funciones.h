#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

template <typename Type>
vector<int> StringToAscii(string men)
{
	vector<int> mensaje;
	for(int i = 0; i < men.size(); i++)
	{
		mensaje.push_back((int)men.at(i));
	}
	return mensaje;

}

template <typename Type>
vector<string> AsciiToBin(vector<int> men)
{
	vector<string> mensaje;
	for(unsigned int i = 0; i < men.size(); i++)
	{
     	string s;
		
		s = bitset <8>(men[i]).to_string();
		mensaje.push_back(s);

	}
	return mensaje;
}

vector<int> BintoInt(vector<string> men)
{
	vector<int> mensaje;
	for(unsigned int i = 0; i < men.size(); i++)
	{
     	int s;
		string bin = men[i];
		bitset<16> num (bin);		
		s = (int)num.to_ulong();
		mensaje.push_back(s);

	}
	return mensaje;
}

string InttoAscci(vector<int> men)
{
	string mensaje;
	for(unsigned int i = 0; i < men.size(); i++)
	{
     	int s;
		char W = static_cast<char>(men[i]);

		mensaje += W;

	}
	return mensaje;
}