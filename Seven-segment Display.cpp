#include<iostream>
#include<string>
#include<vector>

using namespace std;

class seven
{
public:
				void setnum(string str);
				void numprint();
				void clear();
				void test();
private:
				vector<int> num;
				string str;
				const string table[10][3] =
				{ {" _ ","| |","|_|"}//0
				,{"   ","  |","  |"}//1
				,{" _ "," _|","|_ "}//2
				,{" _ "," _|"," _|"}//3
				,{"   ","|_|","  |"}//4
				,{" _ ","|_ "," _|"}//5
				,{" _ ","|_ ","|_|"}//6
				,{" _ ","  |","  |"}//7
				,{" _ ","|_|","|_|"}//8
				,{" _ ","|_|"," _|"}//9
				};
};

int main()
{
				string temp;
				seven s;
				while (getline(cin,temp))
				{
								//cout << temp << " ";
								s.setnum(temp);
								s.numprint();
								s.clear();
								//cout << endl;
				}
}

void seven::setnum(const string str)
{
				this->str = str;
				for (int i=0;i<str.length();i++)
				{
								if (isdigit(str[i]))
												num.push_back(str[i] - '0');
								//else if (str[i] == ' ' && !isdigit(str[i + 1]))
								//				break;
				}
}

void seven::numprint()
{
				for (int i = 0; i < 3; i++)
				{
								for (int j=0;j<num.size();j++)
								{
												cout << table[num[j]][i];
												//cout << num[j];
								}
								cout << endl;
				}
				
}
void seven::clear()
{
				num.clear();
}
void seven::test()
{
				for (int i = 0; i < 3; i++)
				{
								for (int j = 0; j < 10; j++)
								{
												cout << table[j][i];
								}
								cout << endl;
				}
}