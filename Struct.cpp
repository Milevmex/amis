// Struct.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <string> 
using namespace std;

struct DJ
{
	string first_name;
	string second_name;
	int age;
	int salary;
	bool student; 
};

struct broadcast
{
	int number_of_songs;
	int duration;
	bool advertising;
	char dj_name[20];
};






int _tmain(int argc, _TCHAR* argv[])
{
	/*char test[10];
	gets_s(test);*/
	//cin >> test;

	/*for (int i = 0; i < 10; i++){
		
		if (test[i] == false && (65 < test[i] < 90) && (97 < test[i] < 122))
			break;
		cout << test[i];

	}*/
	//for (int i = 0; i < 10; i++){

	//	cout << test[i] << endl;

	//	/*if (test[i] == 'e'){
	//		cout << "success";
	//		break;
	//	}*/

	//	if ((test[i] > 97 ) && (test[i] <  122))
	//	{
	//		cout << "fuck you"<< endl;
	//		break;
	//	}
	//}

	int prom[26];
	int q = 97; 
	for (int i = 0; i < 26; i++){
		prom[i] = q;
		q++;
	}
		

	char a[6];
	gets_s(a);
	int num = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 26; j++)	
			{
				cout << char(prom[j]) << endl;

				if (a[i] != char(prom[j]))
				{
					num++;
				}
			}
		if (num == 26)
		{
			cout << "ERROR" << endl;
			break;
		}	
		else
		num = 0;
	}


	

 	system("pause");
	return 0;
}



