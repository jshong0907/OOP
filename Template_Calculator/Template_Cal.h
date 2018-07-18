#pragma once
template <typename Type>
class Template_Cal
{
public:
	Template_Cal();
	~Template_Cal();

	Type plus(Type a, Type b)
	{
		return a + b;
	}
	Type minus(Type a, Type b)
	{
		return a - b;
	}
private:
};

template<typename Type>
inline Template_Cal<Type>::Template_Cal()
{

}

template<typename Type>
inline Template_Cal<Type>::~Template_Cal()
{

}
