#pragma once
class My_String
{
public:
	My_String(char str);
	~My_String();
	My_String operator+(const My_String&other);
	void operator*(int num);
	void set_str(char input) { str = input; }
private:
	char str;
};
