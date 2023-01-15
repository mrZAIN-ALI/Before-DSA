#pragma once
#include<iostream>
#include<fstream>
#include<cmath>
#include<stack>
#include<string>
#include<list>
#include<vector>
using namespace std;
class Error
{
public:
	string err;
	Error(string e) { err = e; }
};

class TagsMatch
{
	string fileName;
	vector<string> loadedTagsFromFile;
	bool tagsMatchedOrNot;

public:
	TagsMatch();

	bool setFileName(string name);
	string getFileName() { return fileName; }
	vector<string> getLoadedTags() { return loadedTagsFromFile; }
	bool doesTagsMatched() { return tagsMatchedOrNot; }

	void display1(vector<string>);
	void display2(vector<string>);

	bool compareSubStrings(string, string);
	bool checkSelfClosing(string );
	int findClosing(string , int , bool& , int );
	bool areTagsMatched(vector<string> );
	vector<string> LoadFileAndReturnVecotr(string);
};
TagsMatch::TagsMatch()
{
	fileName = " ";
	tagsMatchedOrNot = false;
}
void TagsMatch::display1(vector<string> tags)
{
	if (tagsMatchedOrNot)
	{

		for (int i = 0; i < tags.size(); i++)
		{
			if (tags[i].at(1) == '/')
			{
				continue;
			}
			else
				cout << tags[i] << " </" << tags[i].substr(1) << endl;
		}
		
	}
	else
		cout<<"Sorry Gotta Run Tags not Matched properly\n";
}
bool TagsMatch::setFileName(string name)
{
	fstream file;
	file.open(name + ".txt", ios::in);
	if (file)
	{
		file.close();
		return 1;
	}
	else
		file.close();
	return 0;
}
void TagsMatch::display2(vector<string> tags)
{
	if (tagsMatchedOrNot)
	{
		int j = -1;
		for (int i = 0; i < tags.size(); i++)
		{
			if (tags[i].at(1) == '/')
			{
				if (j > 0 && j < tags.size() && tags[j].at(1) == '/')
				{
					cout << endl << tags[i];
					j++;
					continue;
				}
				cout << " " << tags[i];
			}

			else
			{

				cout << endl << tags[i];
			}
			j++;
		}
	}
	else
		cout << "Sorry Gotta Run Tags not Matched properly\n";
}
bool TagsMatch::compareSubStrings(string one, string two)
{
	if (one.compare(two) == 0)
	{
		return true;
	}
	else
		return false;
}
bool TagsMatch::checkSelfClosing(string incomingTag)
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
int TagsMatch::findClosing(string line, int nth, bool& f, int cntr)
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
		cout << "Warning : Closing anglur bracket not Found at line no " << cntr <<
			"It will not be Considered as Tag\n";
	}
	return 883;
}
bool TagsMatch::areTagsMatched(vector<string> tags_vector)
{
	vector<string>::iterator iter;
	stack<string> stack;

	bool flag = true;
	tagsMatchedOrNot = true;

	int comparedVal = -1;
	string openingTag, closingTag;

	for (iter = tags_vector.begin(); iter < tags_vector.end(); iter++)
	{

		if (checkSelfClosing(*iter))
		{
			continue;
			tagsMatchedOrNot = true;
			flag = true;
		}
		if (!stack.empty() && iter->at(1) != '/' && stack.top() == *iter)
		{

			cout << "Warning :  closing ta </" << stack.top().substr(1) << " not found for " << stack.top() << endl;
			stack.pop();
			stack.push(*iter);
			flag = false;
			tagsMatchedOrNot = false;

			continue;
		}
		else if (iter->at(1) != '/')
		{
			stack.push(*iter);
						
		}
		else if (iter->at(1) == '/')
		{
			if (!stack.empty())
			{

				openingTag = stack.top().substr(1);
				closingTag = iter->substr(2);

				comparedVal = openingTag.compare(closingTag);
				if (comparedVal == 0)
				{
					stack.pop();					
					continue;

				}
				else
				{
					cout << "Warning : starting tag <" << iter->substr(2) << "not found for :" << *iter << endl;
					//cout << "Warnin : Closing Tag </" << stack.top().substr(1) << " not Found For " << stack.top() << endl;
					//stack.pop();
					tagsMatchedOrNot = false;
					flag = false;
				}


			}
			else
			{
				cout << "Warning : starting tag <" << iter->substr(2) << "not found for :" << *iter << endl;
				flag = false;
				tagsMatchedOrNot = false;

			}
		}

	}


	while (!stack.empty())
	{
		cout << "Warnin : Closing Tag </" << stack.top().substr(1) << " not Found For " << stack.top() << endl;
		stack.pop();
		tagsMatchedOrNot = false;
		flag = false;
	}

	
	return flag;
}
vector<string> TagsMatch::LoadFileAndReturnVecotr(string fileName)
{
	vector<string> tags;
	string lineFromFile;
	bool flag;

	int openingBracket = 0,
	closingBracket = 0,
	counter = 0;

	fstream inFile;
	inFile.open(fileName+".txt", ios::in);
	if (inFile)
	{
		while (!inFile.eof())
		{
			cin.ignore(NULL);
			getline(inFile, lineFromFile);
			++counter;
			openingBracket = 0;
			bool sign = true;
			for (int i = 0; i < lineFromFile.length(); i++)
			{
				flag = false;
				if (lineFromFile[i] == '<')
				{
					sign = false;
					openingBracket = i;
					closingBracket = findClosing(lineFromFile, i + 1, flag, counter);

					//exit;

					if (closingBracket != 0 && flag == true)
					{

						flag = false;
						tags.push_back(lineFromFile.substr(openingBracket, closingBracket + 1));

					}
				}
				else if (lineFromFile[i] == '>' && openingBracket == 0 && sign)
				{

					cout << "Warning : Opening angular brecket not found at line no "
						<< counter << " It will not be considered as tag" << endl;
				}


			}

		}


	}
	else
	{
		cout << "Fetal Eroor can't load file Try Again\n";
	}
	inFile.close();

	loadedTagsFromFile = tags;
	return tags;
}