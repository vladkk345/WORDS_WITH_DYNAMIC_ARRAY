// Prog9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma warning(disable:4996)

#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char** qwords = 0;
    char temp[255];
    int k = 0, size = 0, length = 0;

    printf("Сколько слов Вы хотите ввести? ");
    scanf_s("%d", &size);
    qwords = (char**)malloc(size * sizeof(char*));
    printf("Теперь введите %d слов(а):\n", size);

    while (k < size)
    {
        scanf_s("%s", &temp, sizeof(temp));

        length = strlen(temp);
        if (qwords != 0)
        {
            qwords[k] = (char*)malloc(length + 1);
            strcpy(qwords[k], temp);
            k++;
        }
    }

    puts("Вот введенные Вами слова:");

    for (int i = 0; i < k; i++)
    {
        printf("%s\n", qwords[i]);
    }

    for (int i = 0; i < k; i++)
    {
        free(qwords[i]);
    }

    free(qwords);

    return 0;
}