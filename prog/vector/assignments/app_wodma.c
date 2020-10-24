#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insert(FILE *fp);
void print(FILE *fp);
int search(FILE*fp, char *name);
//void delete(FILE *fp);
//void sort(FILE *fp);
//void save(FILE *fp);
//void list(FILE *fp);

struct {
	char name[25];
	int id;
	float sal;
	}emp;

int main()
{
	int choice,i,records=10;
	FILE *fp;
	fp = fopen("details.dat","w+");
	if(fp==NULL)
	{
		printf("File does not exist\n");
		return 0;
	}

	for(i=0;i<records;i++)
	{
		insert(fp);
	}
	

	do
	{	
		printf("\t\t EMPLOYEE CORNER
		printf("1.Input new record\n");
		printf("2.Print the record\n");
		printf("3.Delete  record\n");
		printf("4.Sort records\n");
		printf("5.Save records\n");
		printf("6.List all records\n");
		printf("7. Exit \n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		
	switch(choice)
	{
		case 1: insert(fp);
			break;
		case 2: print(fp);
			break;
	/*	case 3: delete(fp);
			break;
		case 4: sort(fp);
			break;
		case 5: save(fp);
			break;
		case 6: list(fp);
			break;      */
		case 7: fclose(fp);
			exit(1);
		default:
			printf("Wrong choice \n");
	}
}while(choice!=7);
}


void insert(FILE *fp)
{
		fseek(fp,0,2);
		printf("Enter employee name:");
		scanf("%s",emp.name);
		printf("Enter employee id:");
		scanf("%d",&emp.id);
		printf("Enter employee salary:");
		scanf("%f",&emp.sal);
		fwrite(&emp,sizeof(emp),1,fp);
		
	
}
void print(FILE *fp)
{
	char name[25];
	printf("Enter emplpoyee name:");
	scanf("%s", name);
	search(fp,name);
	printf("\n Name    : %s ", emp.name);
	printf("\n ID      : %d ", emp.id);
	printf("\n Salary  : %f ", emp.sal);

}

int search(FILE *fp, char *name)
{
	unsigned flag=0;
	rewind(fp);
	
	while(fread(&emp,sizeof(emp),1,fp)==1)
	{
		if(strcmp(name,emp.name)==0)
		{
			flag=1;
			break;
		}
	}

	if(flag==0)
		printf("Emplyee does not exist\n");
	return flag;

}



	
