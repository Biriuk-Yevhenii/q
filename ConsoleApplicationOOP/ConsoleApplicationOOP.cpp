// ConsoleApplicationOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "GoodBasic.h"
#include "Freezer.h"
#include "Software.h"
#include "WorkClass.h"
#include "Chipsi.h"



int main()
{
    setlocale(LC_ALL, "Russian");
    WorkClass workClass;
    workClass.startWork();
}