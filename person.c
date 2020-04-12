#include <stdio.h>

struct person{
	char *name;
	int age;
	char *job;
	void (*printinfo)(struct person *info);
};

void printinfo(struct person *info)
{
	printf("name = %s,age = %d,job = %s\n",info->name,info->age,info->job);
}
	
int main()
{
	struct person per[] = {
		{"kaisha",21,"engineer",printinfo},
		{"cena",22,"student",printinfo},
	};

	per[0].printinfo(&per[0]);
	per[1].printinfo(&per[1]);
	
	return 0;
}