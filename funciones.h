#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

template <typename Type>
vector<int> StringToAscii(string men)
{
	vector<string> mensaje;
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
		s = bitset <64>(men[i]).to_string;
		mensaje.push_back(s);

	}
	return mensaje;
}