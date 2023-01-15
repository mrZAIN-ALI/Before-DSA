#include<iostream>
#include<fstream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
class Error
{
public:
	string err;
	Error(string e) { err = e; }
};
bool compareSubStrings(string one, string two)
{
	if (one.compare(two) == 0)
	{
		return true;
	}
	else
		return false;
}
bool checkSelfClosing(string incomingTag)
{
	string arr[15] = { "<area/>","<base/>","<br/>","<col/>","<embed/>","<hr/>","<img/>","<input/>","<link/>","<meta/>","<param/>","<source/>","<trak/>","<wbr/>" };
	for (int i = 0; i < 15; i++)
	{
		if (incomingTag.compare(arr[i]) == 0)
		{
			return true;
		}
		
	
	}
	return false;
}
int findClosing(string line, int nth,bool& f,int cntr)
{
	for (int i = nth; i < line.length(); i++)
	{
		if (line[i] == '>')
		{
			f = true;
			return i;
		}
		else
		{
			f = false;
			continue;
		}

	}
	f = false;
	if (!f) 
	{
		cout << "Closing angle bracket not Found at line no " << cntr<<endl;
	}
	return 883;
}
bool areTagsMatched( vector<string> tags_vector) 
{
	 vector<string>::iterator iter;
	 stack<string> stack;
	 bool flag=0;
	 int comparedVal = -1;
	 string openingTag, closingTag;
	 int itCounter=tags_vector.size();
	for ( iter = tags_vector.begin(); iter < tags_vector.end(); iter++)
	{
		
		/*if (checkSelfClosing(*iter))
		{
			continue;
			flag = true;
		}*/
		if (!stack.empty() && iter->at(1) != '/' && stack.top() == *iter)
		{
			
			cout << "Warning :  closing ta </" << stack.top().substr(1) << " not found for " << stack.top() << endl;
			stack.pop();
			stack.push(*iter);
			flag = false;
			continue;
		}
		else if (iter->at(1) != '/')
		{
			stack.push(*iter);
			flag = true;
		}
		else if(iter->at(1) =='/')
		{
			if (!stack.empty())
			{
				/*cout << stack.size()<<endl;
				cout << " it" << itCounter << endl;*/
				openingTag = stack.top().substr(1);
				closingTag = iter->substr(2);

				comparedVal=openingTag.compare(closingTag);
				if (comparedVal==0)
				{
					stack.pop();
					flag = true;
					continue;

				}
				else if(stack.size()>itCounter)
				{
					cout << "Warning : Closing Tag </" << stack.top().substr(1) << " not Found For " << stack.top() << endl;
					stack.pop();
					
					if (!stack.empty())
					{
						openingTag = stack.top().substr(1);
						closingTag = iter->substr(2);

						comparedVal = openingTag.compare(closingTag);
						if (comparedVal == 0)
						{
							stack.pop();
							flag = true;
							continue;

						}
					}
					/*if (!stack.empty() && stack.top() == *vector)
					{

						cout << "warning : openng tag <" << iter->substr(2) << "  not found for " << *iter << endl;
						flag = false;
						continue;

					}*/
				}
			
				
			}
			else
			{
				cout << "Warning : starting tag <" << iter->substr(2) << "not found for :"<<*iter<<endl;
				flag = false;
				
			}
		}
		itCounter-=2;
		

	}

	
	
	
	while (!stack.empty())
	{
			cout << "Warnin : Closing Tag </" << stack.top().substr(1) << " not Found For " << stack.top()<<endl;
			stack.pop();
	
			flag = false;
	}
	
	return flag;
}
int main()
{
	vector<string> tags;
	string lineFromFile;
	bool flag;
	int openingBracket=0;
	int closingBracket = 0,counter=0;
	fstream inFile;
	inFile.open("tags.txt", ios::in);
	if (inFile)
	{
		while (!inFile.eof())
		{
			cin.ignore(NULL);
			getline(inFile, lineFromFile);
			++counter;
			for (int i = 0; i <lineFromFile.length(); i++)
			{
				openingBracket = 0;
				flag = false;
				if (lineFromFile[i]=='<')
				{
					openingBracket = i;
					closingBracket = findClosing(lineFromFile, i + 1,flag, counter);
					
					//exit;
				}
				if (closingBracket != 0 && flag == true)
				{
					flag = false;
					tags.push_back(lineFromFile.substr(openingBracket, closingBracket + 1));
					
				}
				/*else if(lineFromFile[i]=='>' && openingBracket==0)
				{
					
					cout << "Opening Brecket not found at line no " << counter << endl;
				}*/
				
				
			}

		}


	}
	else
	{
		cout << "can't load file\n";
	}

	bool g = areTagsMatched(tags);
	if (g)
	{
		cout << "Fuck";
	}
	else
		cout << "fuck2";
	return 0;
}