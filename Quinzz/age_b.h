#pragma once
class age_b
{
private:
	int age;

public:

	age_b() : age(-1) {};
	age_b(int a);
	~age_b() {};

	void setAge(int a);
	int getAge() const;
	bool isLegal();

};

