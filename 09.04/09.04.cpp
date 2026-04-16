#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
//Task1
// 
// 
//{
//    int N = 0;
//    string S;
//    
//    cout << "Enter yout string: ";
//    cin.ignore();
//    getline(cin, S);
//    cout << "Enter int num: ";
//    cin >> N;
//
//    if (S.length() > N)
//    {
//        S.erase(0, S.length() - N);
//    }
//    else if (S.length() < N)
//    {
//        S.insert(0, N-S.length(), '.');
//    }
//
//    cout << S;
//}

//Task2
//{
//	int N1 = 0, N2 = 0;
//	string S1, S2, S3;
//	cout << "Enter first string: ";
//	getline(cin, S1);
//	cout << "Enter second string: ";
//	getline(cin, S2);
//	cout << "Enter first int num: ";
//	cin >> N1;
//	cout << "Enter first int num: ";
//	cin >> N2;
//
//	S3 = S1.substr(0, N1) + S2.substr(S2.length() - N2);
//	cout << S3;
//}


//Task3
//{
//	char C ;
//	string S;
//	cout << "Enter first string: ";
//	getline(cin, S);
//	cout << "Enter symbol: ";
//	cin >> C;
//
//	
//	for (int i = 0; i < S.length(); i++)
//	{
//		{
//			if (S[i] == C)
//			{
//				S.insert(i, 1, C);
//				i++;
//			}
//		}
//	}
//	cout << S;
//
//}

//Task4
//{
//	char C;
//	string S,S0;
//	cout << "Enter first string: ";
//	getline(cin, S);
//	cout << "Enter symbol: ";
//	cin >> C;
//	cout << "Enter string to insrt: ";
//	cin.ignore();
//	getline(cin, S0);
//
//	for (int i = 0; i < S.length(); i++)
//	{
//		if (S[i] == C)
//		{
//			
//			S.insert(i,S0);
//			i+=S0.length();
//		}
//	}
//	cout << S;
//}


//Task5
//{
//	char C;
//	string S,S0;
//	cout << "Enter first string: ";
//	getline(cin, S);
//	cout << "Enter symbol: ";
//	cin >> C;
//	cout << "Enter string to insrt: ";
//	cin.ignore();
//	getline(cin, S0);
//
//	for (int i = 0; i < S.length(); i++)
//	{
//		if (S[i] == C)
//		{
//			
//			S.insert(i+1,S0);
//			i+=S0.length();
//		}
//	}
//	cout << S;
//}


//Task6

//{
//	string S, S0;
//		cout << "Enter first string: ";
//		getline(cin, S);
//		
//		cout << "Enter string to insrt: ";
//		getline(cin, S0);
//
//		if (S.find(S0, 0)!= -1)
//		{
//			cout << "True";
//		}
//		else
//		{
//			cout << "False";
//		}
//}


//Task7

//
//{
//	string S, S0;
//	S = "hello world. hello step. hello it.";
//	S0 = "hello";
//  
//	int index = 0;
//	int count = 0;
//	for (int i = 0; i < S.length();)
//	{
//		index = S.find(S0, i);
//		if (index != S.find(S0, i) != -1)
//		{
//			
//			count++;
//			i+=index+S0.length();
//		}
//		else { break; }
//	}
//	cout << count;
//
//
//
//
//}

//Task8


//
//{
//	string S, S0;
//	S = "hello world. hello step. hello it.";
//	S0 = "hello";
//	int index = S.find(S0, 0);
//		if (S.find(S0, 0) != -1)
//		{
//			S.erase(index, 5);
//		}
//	
//	cout << S;
//}



//Task9


//{
//	string S, S0;
//	S = "hello world. hello step. hello it.";
//	S0 = "hello";
//	for (int i = 0; i < S.length(); i++)
//	{
//		int index = S.find(S0, i);
//		if (S.find(S0, 0) != -1)
//		{
//			S.erase(index, 6);
//		}
//	}
//	cout << S;
//
//
//
//}

//Task10
//{
//	string S,S1,S2;
//	S = "hello world. hello step. hello it.";
//	S1 = "hello";
//	S2 = "hi";
//	int pos = S.find(S1);
//	if (pos != -1)
//	S.replace(pos, S1.length(), S2);
//	
//	cout << S;
//
//}


//Task11


//{
//	string S, S1, S2;
//	S = "hello world. hello step. hello it.";
//	S1 = "hello";
//	S2 = "hi";
//	
//	for (int i = 0; i < S.length(); i++)
//	{
//		int pos = S.find(S1,i);
//		if (pos != -1)
//		{
//
//			S.replace(pos, S1.length(), S2);
//		}
//	}
//	cout << S;
//}


//Task12



//{
//	string S="Programm";
//	string Sr;
//
//	for (int i = 0; i < S.length(); i++)
//	{
//		if (i % 2 != 0)
//		{
//			Sr.push_back(S[i]);
//		}
//	}
//	for (int i = S.length()-1; i >= 0; i--)
//	{
//		if (i % 2 == 0)
//		{
//			Sr.push_back(S[i]);
//		}
//
//	}
//	S = Sr;
//	Sr = "";
//	cout << S;
//}


//Task13


//{
//	string S = "rgammroP";
//	string Sr(S.length(),' ');
//
//	int index = 0;
//	for (int i = 1; i < S.length(); i+=2)
//	{
//		Sr[i]=S[index++];
//	}
//	for (int i = 0; i < S.length(); i += 2)
//	{
//		Sr[i] = S[index+((S.length()+1)/2-1-i/2)];
//	}
//	S = Sr;
//	Sr = "";
//	cout << S;
//
//
//}


//Task14
//{
//	string S;
//	cout << "Enter name: ";
//	getline(cin, S);
//
//	if (S.find("*")!=-1)
//	{
//		cout << "Invalid file name!";
//	}
//	else
//	{
//		ofstream file(S + ".txt");
//		if (file.is_open())
//		{
//			file << "Hello Volodya";
//			file.close();
//		}
//		cout << "Welldone!";
//	}
//}


//Task15

//{
//	int N = 0;
//	cout << "Enter enen num: ";
//	cin >> N;
//
//	ofstream file("Task15.txt");
//	if (file.is_open())
//	{
//		for (int i = 1; i <= N; i ++)
//		{
//			file << i * 2 << " ";
//		}
//		file.close();
//	}
//	else {
//		cout<<"File not open!";
//	}
//
//
//
//
//}

//Task16



//{
//	string text, text2, text3;
//	
//	ofstream file("Sd.txt");
//	if (file.is_open())
//	{
//		ifstream file1("Sa.txt");
//		ifstream file2("Sb.txt");
//		ifstream file3("Sc.txt");
//		while (getline(file1,text)&& getline(file2, text2)&& getline(file3, text3))
//		
//		{
//			file << text << " " << text2 << " " << text3 << endl;
//		}
//		file.close();
//		file1.close();
//		file2.close();
//		file3.close();
//	}
//	else {
//		cout<<"File not open!";
//	}
//
//}







//Task17

//{
//	ifstream file("17.txt");
//	if (file.is_open())
//	{
//		string text;
//		while (!file.eof())
//		{
//			//file >> text;
//			getline(file, text);
//			if (text.length() > 0)
//			{
//				cout << text.substr(3, 2) << endl;
//				int m = atoi(text.substr(3, 2).c_str());
//			}
//		}
//		file.close();
//
//		
//	}
//	else {
//		cout<<"File not open!";
//	}
//
//
//}


//Task18

//{
	//ifstream file("17.txt");
	//if (file.is_open())
	//{
	//	ofstream file1("18.txt");
	//	string text;
	//	while (getline(file, text))
	//	{
	//		if (text[3] == '0' && (text[4] == '6' || text[4] == '7' || text[4] == '8'))
	//		{
	//			file1 << text<<" ";
	//		}
	//	}
	//	file.close();
	//	file1.close();

	//}
	//else {
	//	cout << "File not open!";
	//}
//
//
//}




//Task19



//{
//	ifstream file("f1.txt");
//	if (file.is_open())
//	{
//		ifstream file2("f2.txt");
//		if (!file.is_open())
//		{
//			cout << "File not open!";
//			return 1;
//		}
//		else {
//			string text;
//			string text1;
//			string text2;
//			file2 >> text1 >> text2;
//			ofstream outfile("g.txt");
//			while (getline(file, text))
//			{
//				for (int i = 0; i < text.length(); i++)
//				{
//					int pos = text.find(text1, i);
//					if (pos != -1)
//					{
//
//						text.replace(pos, text1.length(), text2);
//					}
//
//				}
//				outfile << text << "\n";
//			}
//			file.close();
//			file2.close();
//			outfile.close();
//		}
//	}
//	else {
//		cout << "File not open!";
//	}
//
//
//}



//Task20


//{
//	ifstream file("f.txt");
//	ofstream outfile("g.txt");
//	if (file.is_open())
//	{
//		int choise;
//		cout << "Enter what name for you need: 1 - Name Patronymic Surname; 2 - Surname N.P.";
//		cin >> choise;
//
//		string surname, name, patronymic;
//		while (file >> surname >> name >> patronymic)
//		{
//			if (choise == 1)
//			{
//				outfile << name << " " << patronymic << " " << surname << "\n";
//			}
//			else if (choise == 2)
//			{
//				outfile << surname << " " << name[0] << "." << patronymic[0] << "." << "\n";
//			}
//			else {
//				cout << "Invalid choise, you need write 1 or 2";
//				break;
//			}
//		}
//		file.close();
//		outfile.close();
//	}
//	else 
//	{
//		cout << "File not open!";
//	}
//}