#include"SimpleVector.h"
#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
template<class t>
class SearchAbleVector :public SimpleVecto<t>
{
public:
	SearchAbleVector() :SimpleVector()
	{

	}
	SearchAbleVector(int size) :SimpleVector<t>(size)
	{

	}
	SearchAbleVector(const t&obj):SimpleVector<t>(obj.size)
};
#endif