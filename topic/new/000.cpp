#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	cout << "��ʼ��...";
	int cl,incl,id,le;
	int yy,mm,dd;
	string ti;
	int x[8][8]={0};
	ifstream fin1("001.dll",ios::in);
//	ofstream fout1("001.dll",ios::out);
//	ifstream fin2("002.dll",ios::in);
	ofstream fout2("002.dll",ios::out);
	ifstream fin3("003.dll",ios::in);
	for(int i=0;i<6;++i)
	{
		for(int j=0;j<6;++j)
		{
			fin3 >> x[i][j];
		}
	}
	fin3.close();
	cout << "ok" << endl;
	cout << "ѡ������(����֤)" << endl;
	cout << "1����2����3����4����5����6��Դ" << endl;
	cin >> cl;
	if(cl == 6)
	{
		cout << "ѡ�������";
		cout << "1��Ƶ" << endl;
		cin >> incl;
	}
	else
	{
		incl = 0;
	}
	cout << "����ȼ�" << endl;
	cin >> le; 
	cout << "�������" << endl;
	cin >> ti;
	
	x[cl-1][incl] += 1;
	id = x[cl-1][incl];
	ofstream fout3("003.dll",ios::out);
	for(int i=0;i<6;++i)
	{
		for(int j=0;j<6;++j)
		{
			fout3 << x[i][j] << " ";
		}
	}
	fout3.close();
	cout << "wirte 003.dll" << endl;
	
	
	return 0;
}
//<?xml version="1.0" encoding="utf-8"?><tree> 
