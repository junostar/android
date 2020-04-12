#include <stdio.h>

class person{
public:
	char *name;
	int age;
	char *job;
	void printinfo(void)
	{
		printf("name = %s,age = %d,job = %s\n",name,age,job);
	}
};


	
int main()
{
	person per[] = {
		{"kaisha",21,"engineer"},
		{"cena",22,"student"},
	};

	per[0].printinfo();
	per[1].printinfo();

	
	return 0;
}