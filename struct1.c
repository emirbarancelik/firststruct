#include <stdio.h>
#include <stdlib.h>

struct signin
{
	char name[40];
	int age;
	int class1;
	float avr;
};
	struct signin std;
	
int main() {
	printf("Name Surname: ");
	scanf("%s",&std.name);
	printf("Age: ");
	scanf("%d",&std.age);
	printf("Sinif: ");
	scanf("%d",&std.class1);
	printf("Ortalama: ");
	scanf("%f",&std.avr);
	
	printf("%s\n %d\n %d\n %f",std.name,std.age,std.class1,std.avr);

	
	
	
	
	
	
	
	
	return 0;
}
