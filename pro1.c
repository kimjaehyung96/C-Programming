/*
title: c programmimg stydying ch28 challenging
date: 2022/2/22 Tus
*/

#include <stdio.h>

typedef struct
{
	char author[20];
	char title[20];
	int page;
} Bookinfo;

int main(void)
{
	Bookinfo info[3];

	printf("도서정보입력 \n");
	for(int i=0 ; i< 3 ; i++)
	{
		printf("저자: ");
		scanf("%s", info[i].author);
		printf("제목: ");
		scanf("%s", info[i].title);
		printf("페이지 수: ");
		scanf("%d", &info[i].page);
	}

	printf("\n");

	printf("도서정보출력 \n");

	for(int i=0 ; i< 3 ; i++)
	{
		printf("저자: %s\n", info[i].author);
		printf("제목: %s\n", info[i].title);
		printf("페이지 수: %d\n", info[i].page);
	}

	return 0;
}
