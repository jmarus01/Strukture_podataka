#define _CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>
#define ERROR_OPENING_FILE -1
#define BUFFER_SIZE 1024 //max broj znakova u windowsu

int count_rows(char* FileName);

int main()
{
	








	return 0;
}

int count_rows(char* FileName)
{
	char buffer[BUFFER_SIZE];
	int count = 0;


	FILE* fp = NULL;           //definiramo ovaj mali fp kao FILE tip podatka ali pointer na to i postavimo na nula
	fp = fopen(FileName, "r"); //on sad otvara tu moju datoteku
	if (fp == NULL)            //provjeravamo jesmo li tocno otvorili jer pointer koji je jos uvik na istom mistu govori da nista nije obavljeno
	{
		printf("Datoteka nije uspješno otvorena!");
		return ERROR_OPENING_FILE;
	}

	while (!feof(fp)) //dok nismo dosli do kraja filea
	{
		fgets(buffer, BUFFER_SIZE, fp); //ne idemo chsr po char nego brze (sscanf)
		++count;
	}

	fclose(fp);
	return count;
};